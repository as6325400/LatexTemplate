IMAGE_NAME="compilelatex"
CONTAINER_NAME="compilelatex"
MAIN_FILE="main"

if ! docker images "$IMAGE_NAME" | grep -q "$IMAGE_NAME"; then
    echo "Building xeLatex Docker image..."
    sudo docker build -t "$IMAGE_NAME" .
else
    echo "Docker image $IMAGE_NAME already exists."
fi

echo "Running Docker container..."
sudo docker run -v "$(pwd):/compilelatex" --name "$CONTAINER_NAME" "$IMAGE_NAME"


echo "Stopping and removing container..."
sudo docker stop "$CONTAINER_NAME"
sudo docker rm "$CONTAINER_NAME"

echo "Removing log..."
find . -type f -name ""$MAIN_FILE"*" | grep -vE ""$MAIN_FILE"\.pdf|"$MAIN_FILE"\.tex" | xargs rm


echo "Done."
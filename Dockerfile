FROM ubuntu:20.04

WORKDIR /compilelatex


ARG DEBIAN_FRONTEND=noninteractive

RUN apt-get update && \
    apt-get install -y texlive-xetex fonts-noto-cjk &&\
    apt-get install -y fonts-ubuntu fontconfig &&\
    apt install fonts-arphic-ukai


CMD ["xelatex", "main.tex"]
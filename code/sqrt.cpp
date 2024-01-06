bool is_prime = true;
for(long long i=2;i*i<=n;i++){
  if(n % i == 0){
    is_prime = false;
    break;
  }
}
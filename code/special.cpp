if(n % 2 == 0){
    is_prime = false;
}else{
    for(long long i=3;i*i<n;i+=2){
        if(n % i == 0){
          is_prime = false;
        }
    }
}
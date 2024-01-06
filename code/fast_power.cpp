long long fast_power(long long base, long long deg, int mod){
    long long sum = 1;
    while(deg > 0){
        if(deg & 1){
            sum = sum*base%mod;
        }
        deg >>= 1;
        base = base*base%mod;
    }
    return sum;
}
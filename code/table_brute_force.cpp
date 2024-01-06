bool is_prime(int x){
    if(x < n) return !prime_table[x];
    for(long long e:prime){
        if(x % e == 0)  return false;
        if(e*e > x) break;
    }
    return true;
}
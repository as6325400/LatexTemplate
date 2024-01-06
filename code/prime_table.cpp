const int n = 1e6+6;
bool prime_table[n];
vector<int> prime;
void build(void){
    prime_table[0] = prime_table[1] = 1;
    for(int i=2;i<n;i++){
        if(prime_table[i]) continue;
        prime.push_back(i);
        for(long long j=i;i*j < n;j++){
            prime_table[i*j] = 1;
        }
    }
}
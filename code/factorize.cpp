vector<pair<int, int>> factorize(long long x){
    vector<pair<int, int>> fact;
    for(int e:prime){
        int cnt = 0;
        while(x % e == 0){
            cnt += 1;
            x /= e;
        }
        if(cnt != 0)    fact.emplace_back(e, cnt);
        if(x == 1)      break;
        if(x < e*e){
            fact.emplace_back(x, 1);
            break;
        }
    }
    return fact;
}

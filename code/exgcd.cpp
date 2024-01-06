struct GCD{
    // ax + by = d
    ll x, y, d;
    GCD(ll x, ll y, ll d):
        x(x), y(y), d(d){};
};

GCD exgcd(ll a, ll b){
    if(b == 0){
        // 1a + 0b = a
        return GCD(1, 0, a);
    }
    GCD tmp = exgcd(b, a%b);
    //           y'    x - floor(a/b)y'     gcd
    return GCD(tmp.y, tmp.x - (a/b) * tmp.y, tmp.d);
}
pair<ll, ll> CRT(pair<ll, ll> eq1, pair<ll, ll> eq2){
    GCD k = exgcd(eq1.second, eq2.second);
    // eq1.second * k.x + eq2.second * (-k.y) = gcd(a, b) = k.d
    ll goal = eq2.first - eq1.first;
    if(goal % k.d != 0) return make_pair(-1, -1);
    k.x = k.x * (goal / k.d) % (eq2.second / k.d);
    ll ans = eq1.second * k.x + eq1.first;
    ll lcm = eq1.second / k.d * eq2.second;
    ans = (ans % lcm + lcm) % lcm;
    return make_pair(ans, lcm);
}
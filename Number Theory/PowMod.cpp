#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int t;
ll x, y, p;

ll powMod(ll a, ll b, ll m) {
    if (b == 0) return 1;
    ll x = powMod(a, b / 2, m);
    x = (x * x) % m;
    if (b % 2 != 0) return (x * (a % m)) % m;
    return x % m;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> t;
    while (t--) {
        cin >> x >> y >> p;
        cout << powMod(x, y, p) << "\n";
    }
}

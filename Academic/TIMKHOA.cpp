#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int gcd(ll a, ll b) {
    return (b == 0) ? a : gcd(b, a%b);
}

int main() {
    ll n, k, i, x;
    cin >> n;
    vector <ll> v;
    for (i=0; i<n; i++) {
        cin >> x; v.push_back(x);
    }
    ll kq = v[0];
    for (i=0; i<n; i++) {
        kq = gcd(kq, v[i]);
    }
    cout << kq;
}

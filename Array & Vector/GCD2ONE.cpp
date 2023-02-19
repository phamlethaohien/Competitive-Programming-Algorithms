#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll n, i, x, res;
vector<ll> v;

ll gcd(ll a, ll b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main() {
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> x; v.push_back(x);
    }

    res = v[0];
    for (i = 1; i < n; i++) {
        res = gcd(v[i], res);
    }

    if (res == 1) {
        cout << 0;
    }

    if (res != 1) {
        cout << -1;
    }

}

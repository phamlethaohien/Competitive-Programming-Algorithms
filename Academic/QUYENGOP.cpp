#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    freopen("QUYENGOP.inp", "r", stdin);
    freopen("QUYENGOP.out", "w", stdout);

    ll n; cin >> n;
    ll sum = n * (n + 1) / 2;
    for (int i = 1; i * i <= n; i++) {
        sum -= (i * i);
    }
    cout << sum;
}

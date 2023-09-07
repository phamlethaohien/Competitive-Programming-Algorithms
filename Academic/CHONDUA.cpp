#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("CHONDUA.inp", "r", stdin);
    freopen("CHONDUA.out", "w", stdout);

    int n; cin >> n;
    int a[n + 1], b[n + 1];
    for (int i = 0; i < n; i++) cin >> a[i];

    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        mp[b[i]]++;
    }

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += (n - mp[a[i]]);
    }
    cout << ans;
}

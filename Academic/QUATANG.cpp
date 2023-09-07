#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    freopen("QUATANG.inp", "r", stdin);
    freopen("QUATANG.out", "w", stdout);

    int n; ll x; cin >> n >> x;
    ll a[n + 1];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < x) {
            int up = upper_bound(a, a + n, x - a[i]) - a;
            up--;
            if (up != i && up != -1) {
                ans = max(ans, a[up] + a[i]);
            }
        }
        else break;
    }
    cout << ans;
}


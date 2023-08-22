#include<bits/stdc++.h>
using namespace std;

#define ll long long

const int MAXN = 200005;

int n, t, a[MAXN];

bool check(ll x, int t, int a[], int n) {
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += (x / a[i]);
    }
    return ans >= t;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n >> t;
    for (int i = 0; i < n; i++) cin >> a[i];

    ll l = 0, r = 1e18;
    ll res = -1;

    while (l <= r) {
        ll mid = (l + r) / 2;
        if (check(mid, t, a, n)) {
            res = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }

    cout << res << endl;
}

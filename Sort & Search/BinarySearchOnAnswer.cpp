#include<bits/stdc++.h>
using namespace std;

#define ll long long

const int MAXN = 200005;

int n, L, a[MAXN];

bool check(ll h, int L, int a[], int n) {
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += max(0ll, a[i] - h);
    }
    return ans >= L;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n >> L;

    ll l = 0, r = -1e9;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        r = max(r, 0ll + a[i]);
    }

    ll res = -1;

    while (l <= r) {
        ll mid = (l + r) / 2;
        if (check(mid, L, a, n)) {
            res = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }

    cout << res << endl;
}

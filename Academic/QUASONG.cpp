#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("QUASONG.inp", "r", stdin);
    freopen("QUASONG.out", "w", stdout);

    int n, k; cin >> n >> k;
    set<int> se;
    while (k--) {
        int x, y; cin >> x >> y;
        for (int i = x; i <= y; i++) se.insert(i);
    }

    set<int> ::iterator it;
    int cnt[n + 1];
    memset(cnt, 0, sizeof(cnt));
    cnt[1] = 1;
    for (int i = 2; i <= n; i++) {
        int w = 0;
        for (it = se.begin(); it != se.end(); it++) {
            if (i >= *it)
                w = (w + cnt[i - *it]) % MOD;
            cnt[i] = w;
        }
    }
    cout << cnt[n];
}

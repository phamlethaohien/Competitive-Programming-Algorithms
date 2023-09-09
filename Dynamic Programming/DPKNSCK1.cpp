#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n, m; cin >> n >> m;
    int v[n + 1], w[n + 1];
    for (int i = 0; i < n; i++) cin >> v[i] >> w[i];

    int dp[m + 1] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = m; j >= 0; j--) {
            if (j >= w[i])
                dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
        }
    }
    cout << dp[m];
}

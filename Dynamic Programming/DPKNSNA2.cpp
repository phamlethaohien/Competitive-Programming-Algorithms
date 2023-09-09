#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int m, n; cin >> m >> n;
    int v[n + 1], w[n + 1];
    for (int i = 0; i < n; i++) cin >> v[i] >> w[i];

    long long dp[m + 1] = {0};
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= w[j]) dp[i] = max(dp[i], dp[i - w[j]] + v[j]);
        }
    }
    cout << dp[m];
}

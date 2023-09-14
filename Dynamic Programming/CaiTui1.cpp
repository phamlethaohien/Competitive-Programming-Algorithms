#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n, S;
    cin >> n >> S;
    int w[n + 1], v[n + 1];
    for (int i = 1; i <= n; i++) cin >> w[i];
    for (int i = 1; i <= n; i++) cin >> v[i];

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= S; j++) {
            dp[i][j] = dp[i - 1][j];
            if (j >= w[i])
                dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + v[i]);
        }
    }
    cout << dp[n][S];
}


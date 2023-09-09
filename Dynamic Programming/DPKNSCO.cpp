#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int m, n; cin >> m >> n;
        int a[n + 1];
        for (int i = 0; i < n; i++) cin >> a[i];

        int dp[m + 1];
        dp[0] = 0;
        for (int i = 1; i <= m; i++) {
            dp[i] = 1003;
            for (int j = 0; j < n; j++) {
                if (i >= a[j]) dp[i] = min(dp[i], dp[i - a[j]] + 1);
            }
        }
        if (dp[m] == 1003) cout << -1 << "\n";
        else cout << dp[m] << "\n";
    }
}

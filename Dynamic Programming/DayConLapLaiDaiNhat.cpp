#include<bits/stdc++.h>
using namespace std;

int n, dp[101][101] = {0};
string s;

void solve() {
    cin >> n;
    cin.ignore();
    cin >> s;

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (s[i - 1] == s[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else dp[i][j] = 0;
            ans = max(dp[i][j], ans);
        }
    }
    cout << ans << "\n";
}

int main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}

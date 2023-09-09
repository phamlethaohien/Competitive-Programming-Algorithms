#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n, m, k; cin >> n >> m >> k;
        string s;
        cin.ignore();
        getline(cin, s);
        stringstream ss(s);

        vector<string> vs;
        string word;
        while (ss >> word) vs.push_back(word);

        int dp[n + 1][m + 1][k + 1];
        memset(dp, 0, sizeof(dp));
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                for (int u = 1; u <= k; u++) {
                    dp[i][j][u] = max({dp[i - 1][j][u], dp[i][j - 1][u], dp[i][j][u - 1]});
                    if (vs[0][i - 1] == vs[1][j - 1] && vs[1][j - 1] == vs[2][u - 1])
                        dp[i][j][u] = max(dp[i][j][u], dp[i - 1][j - 1][u - 1] + 1);
                }
            }
        }
        cout << dp[n][m][k] << "\n";
    }
}

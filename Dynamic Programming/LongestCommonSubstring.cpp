#include<bits/stdc++.h>
using namespace std;


void solve(string s1, string s2, int m, int n) {
    int dp[m + 1][n + 1];
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            }
            else if (s1[i - 1] == s2[j - 1]){
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else if (s1[i - 1] != s2[j - 1]) {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    cout << dp[m][n] << "\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    string s1; cin >> s1;
    int m = s1.size();
    string s2; cin >> s2;
    int n = s2.size();

    solve(s1, s2, m, n);
}

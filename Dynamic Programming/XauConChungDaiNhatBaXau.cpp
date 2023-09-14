#include<bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    int dp[s1.size() + 1][s2.size() + 1][s3.size() + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= s1.size(); i++) {
        for (int j = 1; j <= s2.size(); j++) {
            for (int k = 1; k <= s3.size(); k++) {
                dp[i][j][k] = max({dp[i - 1][j][k], dp[i][j - 1][k], dp[i][j][k - 1]});
                if (s1[i - 1] == s2[j - 1] && s2[j - 1] == s3[k - 1])
                    dp[i][j][k] = max(dp[i][j][k], dp[i - 1][j - 1][k - 1] + 1);
            }
        }
    }
    cout << dp[s1.size()][s2.size()][s3.size()];
}

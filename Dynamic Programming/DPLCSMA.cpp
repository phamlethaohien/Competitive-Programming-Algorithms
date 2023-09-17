#include<bits/stdc++.h>
using namespace std;

const int mxn = 1005;

string dp[mxn][mxn] = {};

void solve(string a, string b, int n, int m) {
    a = ' ' + a;
    b = ' ' + b;

    bool check = false;
    if (a.find('0') != -1 && b.find('0') != -1) check = true;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i] == b[j]) {
                if (a[i] != '0' || dp[i - 1][j - 1] != "") {
                    dp[i][j] = dp[i - 1][j - 1] + a[i];
                    check = true;
                }
            }
            else {
                if (dp[i - 1][j].size() == dp[i][j - 1].size())
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                else {
                    if (dp[i - 1][j].size() > dp[i][j - 1].size())
                        dp[i][j] = dp[i - 1][j];
                    else
                        dp[i][j] = dp[i][j - 1];
                }
            }
        }
    }
    if (dp[n][m] == "" && check) {
        cout << 1 << "\n";
        cout << "LCS MAX NUMBER is 0";
    }
    else if (!check) {
        cout << 0 << "\n";
        cout << "LCS MAX NUMBER is NULL";
    }
    else {
        cout << dp[n][m].size() << "\n";
        cout << "LCS MAX NUMBER is " << dp[n][m];
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    string a, b; cin >> a >> b;
    solve(a, b, a.size(), b.size());
}

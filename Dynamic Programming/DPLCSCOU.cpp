#include<bits/stdc++.h>
using namespace std;

const int mod = 25071987;

void solve(string a, string b) {
    int dp[a.size() + 1][b.size() + 1];
    memset(dp, 0, sizeof(dp));

    for (int i = 1; i <= a.size(); i++) {
        for (int j = 1; j <= b.size(); j++) {
            if (a[i - 1] == b[j - 1])
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1] + 1) % mod;
            else
                dp[i][j] = (((dp[i - 1][j] + dp[i][j - 1]) % mod) - ((dp[i - 1][j - 1]) % mod) + mod) % mod;
                // (A - B) % C = ((A % C) - (B % C) + C) % C
        }
    }
    cout << dp[a.size()][b.size()];
}

int main() {
    string a, b; cin >> a >> b;
    solve(a, b);
}

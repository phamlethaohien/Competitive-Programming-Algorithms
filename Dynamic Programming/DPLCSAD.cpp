#include<bits/stdc++.h>
using namespace std;

void solve(string a, string b) {
    vector<int> pos[256];
    for (int i = 0; i < b.size(); i++) pos[b[i]].push_back(i + 1);

    int dp[a.size() + 1][b.size() + 1];
    for (int i = 0; i <= a.size(); i++) {
        for (int j = 0; j <= b.size(); j++) {
            if (i == 0 || j == 0) dp[i][j] = 0;
            else if (a[i - 1] == b[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    int lcs = dp[a.size()][b.size()];

    int dpr[a.size() + 1][b.size() + 1];
    memset(dpr, 0, sizeof(dpr));
    for (int i = a.size(); i >= 1; i--) {
        for (int j = b.size(); j >= 1; j--) {
            if (a[i - 1] == b[j - 1])
                dpr[i][j] = dpr[i + 1][j + 1] + 1;
            else
                dpr[i][j] = max(dpr[i + 1][j], dpr[i][j + 1]);
        }
    }

    int ans = 0;
    for (int i = 0; i <= a.size(); i++) {
        for (int j = 0; j < 256; j++) {
            for (auto x : pos[j]) {
                if (dp[i][x - 1] + dpr[i + 1][x + 1] == lcs) {
                    ans++;
                    break;
                }
            }
        }
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    string a, b; cin >> a >> b;
    solve(a, b);
}

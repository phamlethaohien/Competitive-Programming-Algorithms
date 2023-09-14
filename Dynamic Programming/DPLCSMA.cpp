#include<bits/stdc++.h>
using namespace std;

void solve(string a, string b) {
    int dp[a.size() + 1][b.size() + 1];
    memset(dp, 0, sizeof(dp));

    for (int i = 1; i <= a.size(); i++) {
        for (int j = 1; j <= b.size(); j++) {
            if (a[i - 1] == b[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
            else dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
        }
    }
    int idx = dp[a.size()][b.size()];

    vector<char> v(idx, '0');
    int i = a.size(), j = b.size();
    while (i > 0 && j > 0) {
        if (a[i - 1] == b[j - 1]) {
            v[idx - 1] = a[i - 1];
            i--; j--; idx--;
        }
        else if (dp[i - 1][j] > dp[i][j - 1]) i--;
        else j--;
    }
    for (auto it : v) cout << it;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    string a, b; cin >> a >> b;
    solve(a, b);
}


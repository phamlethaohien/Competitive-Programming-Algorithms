#include<bits/stdc++.h>
using namespace std;

int ans;

void solve1(int n, string s) {
    ans = 1;
    int dp[n + 1][n + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (s[i - 1] == s[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = 0;
            ans = max(ans, dp[i][j]);
        }
    }
    cout << ans + 1;
}

bool check(int n, string s, int k) {
    set<string> se; se.clear();
    for (int i = 0; i <= n - k; i++)
        se.insert(s.substr(i, k));
    return (se.size() == n - k + 1);
}

void solve(int n, string s) {
    ans = 0;
    int left = 0, right = n, mid;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (check(n, s, mid)) {
            ans = mid;
            right = mid - 1;
        }
        else left = mid + 1;
    }
    cout << ans;
}

int main() {
    freopen("PHNT.inp", "r", stdin);
    freopen("PHNT.out", "w", stdout);

    int n; cin >> n;
    string s; cin >> s;

    solve(n, s);
}

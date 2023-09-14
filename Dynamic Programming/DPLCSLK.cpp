#include<bits/stdc++.h>
using namespace std;

int m, n, a[1001], b[1001];

void solve(int a[], int b[], int m, int n) {
    int dp[m + 2][n + 2];
    dp[-1][-1] = 0;
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            }
            else if (a[i - 1] == b[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                if (a[i] == b[i]) dp[i][j] = dp[i][j] - 1;
            }
            else if (a[i - 1] != b[j - 1]) {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    cout << dp[m][n] << "\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

   cin >> m >> n;
   for (int i = 0; i < m; i++) cin >> a[i];
   for (int i = 0; i < n; i++) cin >> b[i];

    solve(a, b, m, n);
}

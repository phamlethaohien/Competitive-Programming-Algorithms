#include<bits/stdc++.h>
using namespace std;

int m, n, a[1003], b[1003];
int dp[1003][1003];

void solve(int a[], int b[], int m, int n) {
    memset(dp, 0, sizeof(dp));
    for (int i = 2; i <= m + 1; i++) {
        for (int j = 2; j <= n + 1; j++) {
            if (a[i - 2] == b[j - 2])
                dp[i][j] = dp[i - 2][j - 2] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    cout << dp[m + 1][n + 1] << "\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

   cin >> m >> n;
   for (int i = 0; i < m; i++) cin >> a[i];
   for (int i = 0; i < n; i++) cin >> b[i];

    solve(a, b, m, n);
}

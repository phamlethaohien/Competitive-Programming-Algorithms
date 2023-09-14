#include<bits/stdc++.h>
using namespace std;

int n, m, a[5001], b[5001], dp[5001] = {0};

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> m;
    for (int i = 0; i < m; i++) cin >> b[i];

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int ls = 0;
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                dp[j] = max(dp[j], ls + 1);
            }
            if (a[i] > b[j]) {
                ls = max(ls, dp[j]);
            }
            ans = max(ans, dp[j]);
        }
    }
    cout << ans;
}

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n, m, k; cin >> n >> m >> k;
    int a[n + 1];
    for (int i = 0; i < n; i++) cin >> a[i];

    int dp[m + 1] = {0};
    dp[0] = 1;
    for (int i = 0; i < n; i++) {
        for (int j = m; j >= a[i]; j--) {
            dp[j] += dp[j - a[i]];
        }
    }
    if (dp[m] >= k) cout << "ENOUGH";
    else cout << dp[m];
}

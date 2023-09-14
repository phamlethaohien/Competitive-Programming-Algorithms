#include<bits/stdc++.h>
using namespace std;

int n, t[60001], r[60000];long long dp[60001];

void solve() {
    dp[0] = t[0];
    // TH 1: Nguoi i tu mua ve: dp[i] = dp[i - 1] + t[i]
    // TH 2: Nguoi i nho nguoi i - 1 mua ve: dp[i] = dp[i - 2] + r[i - 1]
    for (int i = 1; i < n; i++) {
        dp[i] = min(dp[i - 1] + t[i], dp[i - 2] + r[i - 1]);
    }
    cout << dp[n - 1] << "\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) cin >> t[i];
    for (int i = 0; i < n - 1; i++) cin >> r[i];

    solve();
}

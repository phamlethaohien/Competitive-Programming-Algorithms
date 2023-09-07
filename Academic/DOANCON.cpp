#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n + 1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            (a[i] > 0) ? (a[i] = 1) : (a[i] = -1);
        }
        int dp[n + 1];
        dp[n - 1] = 1;
        for (int i = n - 2; i >= 0; i--) {
            if (a[i] * a[i + 1] < 0) dp[i] = dp[i + 1] + 1;
            else dp[i] = 1;
        }
        for (int i = 0; i < n; i++) {
            cout << dp[i] << " ";
        }
        cout << "\n";
    }
}

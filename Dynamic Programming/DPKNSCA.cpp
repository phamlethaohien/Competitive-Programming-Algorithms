#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n + 1];
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        bool dp[sum + 1] = {false};
        dp[0] = dp[a[0]] = true;
        for (int i = 1; i < n; i++) {
            for (int j = sum; j >= 1; j--) {
                if (j >= a[i]) {
                    if (dp[j] || a[i] == j || dp[j - a[i]]) dp[j] = true;
                    else dp[j] = false;
                }
            }
        }
        for (int i = 0; i <= sum; i++) {
            if (dp[i]) cout << i << " ";
        }
        cout << "\n";
    }
}

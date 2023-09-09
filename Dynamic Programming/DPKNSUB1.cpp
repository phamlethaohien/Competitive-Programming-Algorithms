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
        if (sum % 2 != 0)
            cout << "NO" << "\n";
        else {
            sum /= 2;
            bool dp[sum + 1] = {0};
            dp[0] = 1;
            for (int i = 0; i < n; i++) {
                for (int j = sum; j >= a[i]; j--) {
                    if (dp[j - a[i]] || j == a[i]) dp[j] = 1;
                }
            }
            if (dp[sum] == 1) cout << "YES" << "\n";
            else cout << "NO" << "\n";
        }
    }
}

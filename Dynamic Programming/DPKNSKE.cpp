#include<bits/stdc++.h>
using namespace std;

void solve() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n; cin >> n;
    int a[n + 1];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    int s = sum / 2;
    bool dp[s + 1] = {false}, mark[s + 1] = {false};
    dp[0] = true;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j + a[i] <= s; j++) {
            if (dp[j]) mark[j + a[i]] = true;
        }
        for (int j = 0; j <= s; j++) {
            if (mark[j]) dp[j] = true;
            mark[j] = false;
        }
    }

    for (int i = s; i >= 0; i--) {
        if (dp[i]) {
            cout << sum - i - i;
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
}

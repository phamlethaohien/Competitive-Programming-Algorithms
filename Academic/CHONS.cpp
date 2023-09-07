#include<bits/stdc++.h>
using namespace std;

int subset(int a[], int n, int sum) {
    bool dp[sum + 1];
    memset(dp, false, sizeof(dp));

    dp[a[0]] = true;
    for (int i = 1; i < n; i++) {
        for (int j = sum; j >= 1; j--) {
            if (a[i] <= j) {
                if (a[i] == j || dp[j] || dp[j - a[i]]) dp[j] = true;
                else dp[j] = false;
            }
        }
    }

    int ans = 0;
    for (int i = 1; i <= sum; i++) {
        if (dp[i]) ans++;
    }
    return ans;
}

int main() {
    freopen("CHONS.inp", "r", stdin);
    freopen("CHONS.out", "w", stdout);

    int n; cin >> n;
    int a[n + 1];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    cout << subset(a, n, sum);
}

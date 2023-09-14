#include<bits/stdc++.h>
using namespace std;

int dp[1001][2], f[1001];
int a[1001];

void solve1(int n, int a[]) {
    dp[0][0] = 0;
    dp[0][1] = a[0];
    for (int i = 1; i < n; i++) {
        dp[i][1] = dp[i-1][0] + a[i];
        dp[i][0] = max(dp[i-1][0], dp[i-1][1]);
    }
    cout << max(dp[n-1][0], dp[n-1][1]);
}

void solve2(int n, int a[]) {
    f[0] = a[0];
    f[1] = max(a[0], a[1]);

    for (int i = 2; i < n; i++) {
        f[i] = max(f[i-1], f[i-2] + a[i]);
    }
    cout << f[n-1];
}

void solve3(int n, int a[]) {
    int incl = a[0];
    int excl = 0;
    int excl_new;

    for (int i = 1; i < n; i++) {
        excl_new = max(incl, excl);
        incl = excl + a[i];
        excl = excl_new;
    }
    cout << max(incl, excl);
}

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    solve2(n, a);
}

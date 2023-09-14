#include<bits/stdc++.h>
using namespace std;

int dp[100005] = {0};

void solve1(int a[], int n) {
    dp[0] = a[0];
    dp[1] = a[1];
    dp[2] = a[2] + a[0];
    for (int i = 3; i < n; i++) {
        dp[i] = a[i] + max(dp[i - 2], dp[i - 3]);
    }
    cout << dp[n-1];
}

void solve2(int a[], int n) {
    dp[0] = a[0];
    for (int i = 1; i < n; i++) {
        dp[i] = max(dp[i-1], dp[i-2] + a[i]);
    }
    cout << dp[n-1];
}

int main() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    // Goi dp[i] la tong lon nhat khong lien ke tai i
    // TH1: Chon a[i]
    // TH2: Khong chon a[i]

    solve1(a, n);
}

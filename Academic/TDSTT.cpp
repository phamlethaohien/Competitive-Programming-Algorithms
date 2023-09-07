#include<bits/stdc++.h>
using namespace std;

int n, a[100001], dp[100001];

int gcd(int a, int b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("TDSTT.inp", "r", stdin);
    freopen("TDSTT.out", "w", stdout);

    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    int ans = 0;
    for (int i = 0; i < n; i++) {
        dp[i] = 1;
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i] && gcd(a[i], a[j]) > 1) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        ans = max(ans, dp[i]);
    }
    cout << ans;
}

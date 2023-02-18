#include<bits/stdc++.h>
using namespace std;

#define ll long long

const int maxn = 1e6 + 1;

ll dp[maxn], t, n, i;

ll min(ll a, ll b) {
    if (a < b) return a;
    return b;
}

void init() {
    memset(dp, 0, sizeof(dp));
    dp[0] = maxn; dp[1] = maxn;
    dp[2] = 1; dp[3] = 1; dp[4] = 2; dp[5] = 1; dp[6] = 2; dp[7] = 1;
    for (i = 8; i < maxn; i++) {
        dp[i] = 1 + min(dp[i-2], min(dp[i-3], min(dp[i-5], dp[i-7])));
    }
}

int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        init();
        if (dp[n] == maxn) cout << -1 << endl;
        else cout << dp[n] << endl;
    }
}

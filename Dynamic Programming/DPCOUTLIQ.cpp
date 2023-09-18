#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mxn = 5005;

int n, maxdp = 0;
vector<int> v, dp(mxn, 1), cnt(mxn, 1);

int solve(vector<int> v, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (v[i] > v[j]) {
                if (dp[i] < dp[j] + 1) {
                    dp[i] = dp[j] + 1;
                    cnt[i] = 0;
                }
                if (dp[i] == dp[j] + 1)
                    cnt[i] += cnt[j];
            }
        }
        maxdp = max(maxdp, dp[i]);
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (dp[i] == maxdp)
            ans += cnt[i];
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        v.push_back(x);
    }
    cout << solve(v, n) << endl;
}

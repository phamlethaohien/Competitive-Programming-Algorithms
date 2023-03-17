#include<bits/stdc++.h>
using namespace std;

#define FAST   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll     long long
#define vll    vector<ll>
#define vpll   vector<pair<ll,ll>>
#define all(x) x.begin(),x.end()
#define grt(v) sort(v.begin(), v.end(), greater<ll>())
#define pb     emplace_back
#define mp     make_pair
#define FF     first
#define SS     second
#define MAXN   100000

int solve(vector<ll>& A) {
    vector<vector<int>> dp(A.size(), vector<int>(2000, 1));
    int ans = 0;
    for (int i = 1; i < A.size(); i++) {
        for (int j = 0; j < i; j++) {
            int diff = A[i] - A[j] + 1000;
            dp[i][diff] = dp[j][diff] + 1;
            ans = max(ans, dp[i][diff]);
        }
    }
    return ans;
}

int main() {
    FAST;

    int n, i;
    cin >> n;
    vll a(n);
    for (i = 0; i < n; i++) cin >> a[i];

    cout << solve(a) << "\n";

    return 0;
}

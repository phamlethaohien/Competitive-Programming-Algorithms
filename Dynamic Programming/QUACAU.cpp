#include<bits/stdc++.h>
using namespace std;

#define FAST   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll     long long
#define all(x) x.begin(),x.end()

#define TASK   "QUACAU."
ifstream fi (TASK"inp");
ofstream fo (TASK"out");

const int mxn = (int)1e6 + 5;
const int mod = 1000000007;

int n, m, k;
ll dp[mxn];
bool mark[mxn];

int main() {
    FAST;
    fi >> n >> m >> k;
    memset(mark, true, sizeof(mark));
    for (int i = 0; i < k; i++) {
        int x; fi >> x;
        mark[x] = false;
    }
    dp[0] = mark[0];
    for (int i = 1; i <= n; i++) {
        if (!mark[i]) dp[i] = 0;
        else {
            for (int j = 1; j <= min(i, m); j++)
                dp[i] = (dp[i] + dp[i - j]) % mod;
        }
    }

    for (int i = 0; i <= n; i++) {
        fo << dp[i] << " ";
    }
    fo << dp[n];
}

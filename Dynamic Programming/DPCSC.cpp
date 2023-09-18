#include<bits/stdc++.h>
using namespace std;

#define ll long long

const int mxn = 2003;

int n;
ll a[mxn], ans = 1, d;
vector<vector<ll> > dp(mxn, vector<ll> (mxn, 1));
bool check = false;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[i] > a[j] && a[i] - a[j] <= 50) {
                d = a[i] - a[j];
                dp[i][d] = max(dp[i][d], dp[j][d] + 1);
                ans = max(ans, dp[i][d]);
            }
        }
    }
    cout << ans;
}

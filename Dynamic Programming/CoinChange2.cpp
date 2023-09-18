#include<bits/stdc++.h>
using namespace std;

const int mod = 1000000007;

long long dp[1000001] = {0};
long long a[1000001];

long long solve(int n, long long a[], long long sum) {
    dp[0] = 1;
    for (int i = 1; i <= sum; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= a[j]) dp[i] = (dp[i] + dp[i - a[j]]) % mod;
        }
    }
    return dp[sum];
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n;
    long long sum;
    cin >> n >> sum;
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << solve(n, a, sum);
}

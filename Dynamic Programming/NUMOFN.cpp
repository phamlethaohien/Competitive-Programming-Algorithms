#include<bits/stdc++.h>
using namespace std;

const long long base = 1e9 + 7;
const int maxpt = 1e5;

long long n, i;

int main() {
    cin >> n;

    int dp[maxpt];
    dp[0] = dp[1] = dp[2] = 1;
    dp[3] = 2;

    for (i = 4; i <= n; i++) {
        dp[i] = (dp[i-1]%base + dp[i-3]%base + dp[i-4]%base) % base;
    }
    cout << dp[n] << endl;

}

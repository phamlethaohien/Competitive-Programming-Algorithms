#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int n;

int main() {
    cin >> n;
    int sum = n * (n + 1) / 2;
    if (sum % 2) {
        cout << 0;
        return 0;
    }
    sum /= 2;

    vector<int> dp(sum + 1, 0);
    dp[0] = 1;
    for (int i = 1; i < n; i++) {
        for (int j = sum; j >= i; j--) {
            dp[j] = (dp[j] + dp[j - i]) % mod;
        }
    }
    cout << dp[sum];
}

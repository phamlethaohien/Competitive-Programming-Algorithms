#include<bits/stdc++.h>
using namespace std;

#define FAST   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll     long long
#define pb     emplace_back
#define all(x) x.begin(),x.end()

int main() {
    FAST;
    int n; cin >> n;
    string s; cin >> s;

    // dp[i][j] la so ki tu it nhat can them de xau trong doan [i; j] la palindrome
    int dp[n + 1][n + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = n - 1; i >= 0; i--) {
        for (int j = i + 1; j < n; j++) {
            if (s[i] == s[j]) dp[i][j] = dp[i + 1][j - 1];
            else dp[i][j] = min(dp[i + 1][j], dp[i][j - 1]) + 1;
        }
    }
    cout << dp[0][n - 1];
}

#include<bits/stdc++.h>
using namespace std;

#define FAST   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll     long long
#define all(x) x.begin(),x.end()
#define pb     emplace_back

int main() {
    FAST;
    string s, t; cin >> s >> t;

    int dp[s.size() + 1][t.size() + 1];
    memset(dp, 0, sizeof(dp));

    // Chen vao xau rong
    for (int i = 1; i <= s.size(); i++)
        dp[i][0] = i;
    // Tu xau rong chen them ki tu
    for (int i = 1; i <= t.size(); i++)
        dp[0][i] = i;

    for (int i = 1; i <= s.size(); i++) {
        for (int j = 1; j <= t.size(); j++) {
            if (s[i - 1] == t[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
            else dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + 1;
        }
    }
    cout << dp[s.size()][t.size()];
}

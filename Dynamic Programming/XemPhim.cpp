#include<bits/stdc++.h>
using namespace std;

int main() {
    int c, n; cin >> c >> n;
    int w[n+1];
    for (int i = 0; i < n; i++) cin >> w[i];

    int dp[c + 1] = {0};
    dp[0] = 1;
    for (int i = 0; i < n; i++) {
        for (int j = c; j >= w[i]; j--) {
            if (dp[j - w[i]]) dp[j] = 1;
        }
    }

    for (int i = c; i > 0; i--) {
        if (dp[i]) {
            cout << i;
            return 0;
        }
    }

}

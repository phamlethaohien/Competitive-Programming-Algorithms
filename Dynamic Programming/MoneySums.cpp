#include<bits/stdc++.h>
using namespace std;

#define ll long long

int n, a[101];
ll sum = 0;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    vector<bool> dp(sum + 1, false);
    dp[0] = dp[a[0]] = true;
    for (int i = 1; i < n; i++) {
        for (int j = sum; j >= a[i]; j--) {
            if (dp[j] || dp[j - a[i]]) {
                dp[j] = true;
            }
            else dp[j] = false;
        }
    }

    vector<int> res;
    for (int i = 1; i <= sum; i++) {
        if (dp[i]) res.push_back(i);
    }
    cout << res.size() << "\n";
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
}

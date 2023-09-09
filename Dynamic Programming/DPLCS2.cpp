#include<bits/stdc++.h>
using namespace std;

void print(string a, string b) {
    int dp[a.size() + 1][b.size() + 1];
    for (int i = 0; i <= a.size(); i++) {
        for (int j = 0; j <= b.size(); j++) {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (a[i - 1] ==  b[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    int idx = dp[a.size()][b.size()];

    vector<char> v(idx, '0');
    int i = a.size(), j = b.size();
    while (i > 0 && j > 0) {
        if (a[i - 1] == b[j - 1]) {
            v[idx - 1] = a[i - 1];
            i--; j--;
            idx--;
        }
        else if (dp[i - 1][j] > dp[i][j - 1]) i--;
        else j--;
    }
    for (auto it : v) cout << it;
}

int main() {
    string a, b; cin >> a >> b;
    print(a, b);
}

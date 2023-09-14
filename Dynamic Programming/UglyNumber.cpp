#include<bits/stdc++.h>
using namespace std;

int solve(int n) {
    int ugly[n + 1];
    int i2 = 0, i3 = 0, i5 = 0;
    int next2 = 2, next3 = 3, next5 = 5;
    int ans = 0;

    ugly[0] = 1;
    for (int i = 1; i <= n; i++) {
        ans = min({next2, next3, next5});
        ugly[i] = ans;
        if (ans == next2) {
            i2++;
            next2 = ugly[i2] * 2;
        }
        if (ans == next3) {
            i3++;
            next3 = ugly[i3] * 3;
        }
        if (ans == next5) {
            i5++;
            next5 = ugly[i5] * 5;
        }
    }
    return ans;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << solve(n - 1) << "\n";
    }
}

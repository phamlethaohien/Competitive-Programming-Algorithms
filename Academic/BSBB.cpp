#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    freopen("BSBB.inp", "r", stdin);
    freopen("BSBB.out", "w", stdout);

    cin >> n;
    n--;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans += (n / i);
    }
    cout << ans;
}

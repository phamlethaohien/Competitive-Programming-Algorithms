#include<bits/stdc++.h>
using namespace std;

int n, i, a[10000], s, l, r, ans, sum;

int main() {
    cin >> n >> s;
    for (i = 0; i < n; i++) cin >> a[i];

    ans = 0; sum = 0;

    for (l = 1, r = 1; r <= n; r++) {
        sum += a[r];
        while (sum > s) {
            sum -= a[l];
            l++;
        }
        ans = max(ans, r - l +1);
    }
    cout << ans << endl;
}

#include<bits/stdc++.h>
using namespace std;

int n, d, a[2000006];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("HOPQUA.inp", "r", stdin);
    freopen("HOPQUA.out", "w", stdout);

    cin >> n >> d;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);

    long long ans = 0;
    int low;
    for (int i = 2; i < n; i++) {
        if (a[i] >= d)
            low = lower_bound(a, a + n, a[i] - d) - a;
        else low = 0;
        if (low <= i - 2)
            ans += ((i - low) * (i - low - 1)) / 2;
    }
    cout << ans;
}

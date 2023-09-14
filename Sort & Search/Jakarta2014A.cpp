#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t; cin >> t;
    for (int ti = 1; ti <= t; ti++) {
        int n, k, a[100001];
        cin >> n >> k;
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        int ans = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] - a[i-1] <= k) continue;
            else ans++;
        }
        cout << "Case #" << ti << ": " << ans << "\n";
    }
}

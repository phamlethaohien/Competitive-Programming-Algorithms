#include<bits/stdc++.h>
using namespace std;

const int MAXN = 200005;

int n, x, a[MAXN];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n >> x;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);

    int l = 0, r = n - 1;
    int ans = 0;
    while (l < r) {
        if (a[l] + a[r] <= x) {
            ans++;
            l++; r--;
        }
        else {
            ans++;
            r--;
        }
    }
    if (l == r) ans++;

    cout << ans;
}

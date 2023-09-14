#include<bits/stdc++.h>
using namespace std;

int t, n, k, x;

void equalToK() {
    cin >> n >> k;
    int a[n + 1];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        x = k - a[i];
        int lb = lower_bound(a + i + 1, a + n, x) - a;
        int ub = upper_bound(a + i + 1, a + n, x) - a;
        ans += (ub - lb);
    }
    cout << ans << "\n";
}

void smallerThanK() {
    cin >> n >> k;
    int a[n + 1];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int ans = 0;
    int l = 0, r = n - 1;
    while (l < r) {
        if (a[l] + a[r] < k) {
            ans += (r - l);
            l++;
        } else r--;
    }
    cout << ans << "\n";
}

void biggerThanK() {
    cin >> n >> k;
    int a[n + 1];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int ans = 0;
    int l = 0, r = n - 1;
    while (l < r) {
        if (a[l] + a[r] > k) {
            ans += (r - l);
            r--;
        } else l++;
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> t;
    while (t--) {
        biggerThanK();
    }
}

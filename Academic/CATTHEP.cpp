#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool check(int n, ll a[], int k, ll mid) {
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (a[i] / mid);
    }
    return (sum >= k);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("CATTHEP.inp", "r", stdin);
    freopen("CATTHEP.out", "w", stdout);

    int n, k; cin >> n >> k;
    ll a[n + 1];
    ll left = 1, right = 0, mid, ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        right = max(right, a[i]);
    }

    while (left <= right) {
        mid = left + (right - left) / 2;
        if (check(n, a, k, mid)) {
            ans = mid;
            left = mid + 1;
        }
        else right = mid - 1;
    }
    cout << ans;
}

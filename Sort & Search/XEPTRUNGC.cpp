#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool check(int n, int a[], ll mid, int m) {
    int sum = 0, d = 1;
    for (int i = 0; i < n; i++) {
        if (sum + a[i] <= mid) sum += a[i];
        else {
            if (a[i] > mid) return false;
            d++;
            if (d > m) return false;
            sum = a[i];
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n, m; cin >> n >> m;
    int a[n + 1];
    ll left = 1, right = 0, mid, ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        right += a[i];
    }

    while (left <= right) {
        mid = left + (right - left) / 2;
        if (check(n, a, mid, m)) {
            ans = mid;
            right = mid - 1;
        } else left = mid + 1;
    }
    cout << ans;
}

#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll s;

bool check(ll mid, ll s, int n, int a[]) {
    ll sum = 0;
    int i = 0;
    while (a[i] <= mid && i < n) {
        sum += a[i];
        i++;
    }
    sum += (mid * (n - i));
    return (sum >= s);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n; cin >> n >> s;
    int a[n + 1];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);

    ll left = 1, right = 100000000000, mid, ans = -1;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (check(mid, s, n, a)) {
            ans = mid;
            right = mid - 1;
        }
        else left = mid + 1;
    }
    cout << ans;
}

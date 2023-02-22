#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll n, i, j;

int main() {
    cin >> n;

    vector<ll> a(n), b(n);
    for (i = 0; i < n; i++) cin >> a[i];
    for (i = 0; i < n; i++) cin >> b[i];

    sort(a.begin(), a.end());

    ll res = abs(a[0] + b[0]);

    for (j = 0; j < n; j++) {
        i = lower_bound(a.begin(), a.end(), -b[j]) - a.begin();

        if ((i >= 0) && (i < n) && (abs(a[i] + b[j]) < res)) {
            res = abs(a[i] + b[j]);
        }

        if ((i-1 >= 0) && (i-1 < n) && (abs(a[i-1] + b[j]) < res)) {
            res = abs(a[i-1] + b[j]);
        }
    }

    cout << res;
}

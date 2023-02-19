#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll n, i, x, s, m;
vector<ll> a, mi;

int main() {
    freopen("BOCBAI.inp", "r", stdin);
    freopen("BOCBAI.out", "w", stdout);

    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> x; a.push_back(x);
    }
    sort(a.begin(), a.end(), greater<ll>());

    m = 0; s = a[0];
    a.erase(a.begin());
    n--;

    if (n > 1) {
        for (i = 0; i < n; i += 3) {
            mi.push_back(a[i]);
            mi.push_back(a[i+1]);
            a.erase(a.begin());
            a.erase(a.begin());
        }
        for (i = 0; i < mi.size(); i++) {
            m += mi[i];
        }
        for (i = 0; i < a.size(); i++) {
            s += a[i];
        }
    }
    else s = a[0];

    if (s > m) cout << "THANG";
    else if (s < m) cout << "THUA";
    else cout << "HOA";

}

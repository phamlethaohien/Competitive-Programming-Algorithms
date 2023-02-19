#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll n, i, q, x, t, tmp;
vector<ll> v;

int main() {
    freopen("TRUYVANTRENMANG.inp", "r", stdin);
    freopen("TRUYVANTRENMANG.out", "w", stdout);

    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> tmp; v.push_back(tmp);
    }
    cin >> q;
    while (q--) {
        cin >> t >> x;

        if (t == 1) {
            v.push_back(x);
        }

        vector<ll>::iterator del;
        if (t == 2) {
            for (i = 0; i < n; i++) {
                if (v[i] == x) {
                    del = remove(v.begin(), v.end(), v[i]);
                }
            }
        }

        if (t == 3) {
            if (find(v.begin(), v.end(), x) != v.end()) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }

    }
}

#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll t, n, i, j;

int main() {
    freopen("SEMIPRIME.inp", "r", stdin);
    freopen("SEMIPRIME.out", "w", stdout);

    cin >> n;

    vector<bool> mark(n+1, true);
    mark[0] = mark[1] = false;

    vector<ll> v;
    for (i = 2; i <= n; i++) {
        if (mark[i]) {
            v.push_back(i);
            for (j = i*i; j <= n; j += i) {
                mark[j] = false;
            }
        }
    }

    vector<ll> v1;
    for (i = 0; i < v.size(); i++) {
        for (j = i; j < v.size(); j++) {
            v1.push_back(v[i] * v[j]);
        }
    }

    sort(v1.begin(), v1.end());

    long long s = 0, i = 0;
    while (v1[i] <= n) {
        s += v1[i];
        i++;
    }

    cout << n << " " << s << endl;

    return 0;
}


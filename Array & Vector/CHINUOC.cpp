#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll n, i, j;

int main() {
    cin >> n;

    vector<bool> mark(n+1, true);
    mark[0] = mark[1] = false;

    vector<ll> v;
    for (i = 2; i <= sqrt(n); i++) {
        if (mark[i]) {
            v.push_back(i);
            for (j = i*i; j <= n; j += i) {
                mark[j] = false;
            }
        }
    }

    ll cnt = 0;
    for (i = 0; i < v.size(); i++) {
        for (j = i+1; j < v.size(); j++) {
            if (pow((v[i] * v[j]), 2) <= n) {
                cnt++;
            }
            else break;
        }
    }

    for (i = 0; i < 7; i++) {
        if (pow(v[i], 8) <= n) {
            cnt++;
        }
        else break;
    }

    cout << cnt;

}

#include<bits/stdc++.h>
using namespace std;

#define ll long long

const ll mod = 1e9 + 7;
int cnt[200005], x;
vector<int> v;

ll binPow(ll a, ll b, ll m) {
    if (b == 0) {
        return 1;
    }
    ll k = binPow(a, b / 2, m);
    k = (k * k) % m;
    if (b % 2 != 0)
        return (k * (a % m)) % m;

    return k % m;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int m;
    cin >> m;

    while (m--) {
        cin >> x;
        if(cnt[x] == 0) v.push_back(x);
        cnt[x]++;
    }

    bool isSquare = true;
    ll a = 1, sq_a = 1, b = 1;
    for(int i = 0; i < (int)v.size(); ++i) {
        a = (a * binPow(v[i], cnt[v[i]], mod)) % mod;

        if(isSquare && (cnt[v[i]] % 2) != 0){
            isSquare = false;
            b = (b * ((cnt[v[i]] + 1) / 2)) % (mod - 1);
        } else {
            b = (b * (cnt[v[i]] + 1)) % (mod - 1);
        }

        if(isSquare) {
            sq_a = (sq_a * binPow(v[i], cnt[v[i]] / 2, mod)) % mod;
        }
    }

    if(isSquare) cout << binPow(sq_a, b, mod);
    else cout << binPow(a, b, mod);

    return 0;
}

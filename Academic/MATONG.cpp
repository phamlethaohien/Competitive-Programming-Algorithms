#include<bits/stdc++.h>
using namespace std;

#define fast   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll     long long
#define all(x) x.begin(),x.end()
#define pb     emplace_back

const int MAXN = 1000001;

int main() {
    freopen("MATONG.inp", "r", stdin);
    freopen("MATONG.out", "w", stdout);

    vector<ll> fact(MAXN, 2);
    fact[1] = 1;
    for (int i = 2; i * 2 < MAXN; i++) {
        for (int j = i * 2; j < MAXN; j += i)
            fact[j]++;
    }

    int n; cin >> n;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ll x; cin >> x;
        ans += (x * fact[x]);
    }
    cout << ans;
}


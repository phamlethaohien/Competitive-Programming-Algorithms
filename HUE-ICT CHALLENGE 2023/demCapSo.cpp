#include<bits/stdc++.h>
using namespace std;

#define FAST   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll     long long
#define vll    vector<ll>
#define vpll   vector<pair<ll,ll>>
#define all(x) x.begin(),x.end()
#define grt(v) sort(v.begin(), v.end(), greater<ll>())
#define pb     push_back
#define mp     make_pair
#define FF     first
#define SS     second
#define MAXN   1000000

ll n, i, tmp, a[MAXN], x;

ll cnt(ll a[], ll n, ll sum) {
    unordered_map<ll, ll> m;

    ll i;
    for (i = 0; i < n; i++) {
        m[a[i]]++;
    }

    ll d = 0;

    for (i = 0; i < n; i++) {
        d += m[sum - a[i]];

        if (sum - a[i] == a[i]) d--;
    }
    return d/2;
}

int main() {
    FAST;

    cin >> n >> x;
    for (i = 0; i < n; i++) cin >> a[i];

    cout << cnt(a, n, x);

}

#include<bits/stdc++.h>
using namespace std;

#define FAST   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll     long long
#define vll    vector<ll>
#define vpll   vector<pair<ll,ll>>
#define all(x) x.begin(),x.end()
#define grt(v) sort(v.begin(), v.end(), greater<ll>())
#define pb     emplace_back
#define mp     make_pair
#define FF     first
#define SS     second
#define MAXN   1000000007

ll n, i;

ll divSum(ll n) {
    ll sum = 0;

    for (ll i = 1; i <= n; ++i)
        sum += ((n % MAXN) / (i % MAXN)) * (i % MAXN);

    return sum;
}

int main() {
    FAST;

    cin >> n;
    cout << (divSum(n)) % MAXN;
}


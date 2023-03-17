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

ll n, i, x, s = 0;
vll a;

int main() {
    FAST;

    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> x; a.pb(x);
    }
    sort(a.begin(), a.end());

    for (i = 0; i < n; i++) {
        if (i % 2 != 0) a[i] = -a[i];
        s += a[i];
    }

    cout << s;

}


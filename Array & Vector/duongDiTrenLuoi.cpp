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
#define MAXN   100000

ll n, i, ans, a[MAXN];

int main() {
    FAST;

    cin >> n;

    if (n == 2) {
        cout << 2 << endl;
        return 0;
    }
    n--;

    if (n % 2 != 0) {
        ans = (n*n + 1) * 2;
    }
    if (n % 2 == 0) {
        ans = (n*n - 1) * 2;
    }

    cout << ans << endl;
}

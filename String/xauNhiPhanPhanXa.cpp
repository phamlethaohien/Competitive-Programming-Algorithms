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
#define MAXN   100000

ll n, i, j;
vector<string> res(1, "");

int main() {
    FAST;
    cin >> n;

    for (i = 1; i <= n; i++) {
        vector<string> _res;

        for (j = 0; j < res.size(); j++) {
            _res.pb(res[j] + "0");
        }

        for (j = res.size() - 1; j >= 0; j--) {
            _res.pb(res[j] + "1");
        }

        res = _res;
    }

    for (auto &it: res) {
        reverse(it.begin(), it.end());
        cout << it << "\n";
    }

}

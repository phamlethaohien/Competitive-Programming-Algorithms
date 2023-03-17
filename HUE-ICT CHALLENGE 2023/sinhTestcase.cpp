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
#define MAXN   1001

ll n, i, x, a[MAXN];

void getSum(ll arr[], ll n) {
    vll s = {0};

    for (int i = 0; i < n; i++) {
        const ll v = s.size();
        for (int t = 0; t < v; t++) {
            s.pb(s[t] + arr[i]);
        }
    }

    set<ll>st(s.begin() + 1, s.end());

    cout << st.size() << endl;

    for (auto it:st) {
        cout << it << " ";
    }

}

int main() {
    FAST;

    cin >> n;
    for (i = 0; i < n; i++) cin >> a[i];

    getSum(a, n);

}

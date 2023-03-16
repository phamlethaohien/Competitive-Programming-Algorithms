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

ll n, i;

int maxSubArray(vector<ll>& a) {
    int sum = -10000, best = -10000;
    for (int i = 0; i < a.size(); i++) {
        sum = max(a[i], sum + a[i]);
        best = max(best, sum);
    }
    return best;
}

int main() {
    FAST;

    cin >> n;
    vll v(n);
    for (i = 0; i < n; i++) cin >> v[i];

    cout << maxSubArray(v);

}


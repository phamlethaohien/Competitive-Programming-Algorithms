#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("GHEPSOI.inp", "r", stdin);
    freopen("GHEPSOI.out", "w", stdout);

    priority_queue<ll, vector<ll>, greater<ll> > pq;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        pq.push(tmp);
    }

    ll ans = 0;
    while (pq.size() > 1) {
        ll x = pq.top();
        pq.pop();
        ll y = pq.top();
        pq.pop();
        ans += (x + y);
        pq.push(x + y);
    }
    cout << ans;
}

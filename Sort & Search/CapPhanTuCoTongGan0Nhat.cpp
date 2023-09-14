#include<bits/stdc++.h>
using namespace std;

int x;
vector<pair<int,int>> vp;

bool incAbs(const pair<int, int> &a, const pair<int, int> &b) {
    if (abs(a.first) != abs(b.first))
        return abs(a.first) < abs(b.first);
    return a.second < b.second;
}

void solve() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        vp.push_back({x, i});
    }
    sort(a.begin(), a.second(), incAbs);

    long long res, sum = INT_MAX;
    int idx;
    for (int i = 1; i < n; i++) {
        int tmp = abs(vp[i].first + a[i-1].first);
        if (tmp < sum) {
            sum = tmp;
            res = a[i].first + a[i-1].first;
            idx = min(a[i].second, a[i-1].second);
        }
    }

}

int main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}

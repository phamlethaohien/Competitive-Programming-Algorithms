#include<bits/stdc++.h>
using namespace std;

const int MAXN = 200005;

int n, x, y;
vector<pair<int, int>> v;

bool incS(const pair<int, int> &a, const pair<int, int> &b) {
    return a.second < b.second;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end(), incS);

    int ans = 1;
    int end_time = v[0].second;
    for (int i = 1; i < n; i++) {
        if (v[i].first >= end_time) {
            ans++;
            end_time = v[i].second;
        }
    }
    cout << ans;
}

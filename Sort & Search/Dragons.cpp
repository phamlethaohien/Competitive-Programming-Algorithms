#include<bits/stdc++.h>
using namespace std;

int n, s, x, y;
vector<pair<int, int>> p;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> s >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        p.push_back({x, y});
    }
    sort(p.begin(), p.end());

    for (int i = 0; i < n; i++) {
        if (s <= p[i].first) {
            cout << "NO";
            return 0;
        }
        s += p[i].second;
    }
    cout << "YES";
}

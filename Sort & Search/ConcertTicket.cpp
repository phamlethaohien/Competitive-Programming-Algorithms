#include<bits/stdc++.h>
using namespace std;

const int MAXN = 200005;

int n, m, a[MAXN], b[MAXN];
multiset<int> ms;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ms.insert(a[i]);
    }

    for (int i = 0; i < m; i++) {
        cin >> b[i];
        auto it = ms.upper_bound(b[i]);
        if (it == ms.begin()) {
            cout << "-1" << "\n";
        } else {
            it--;
            int ans = *(it);
            cout << ans<< "\n";
            ms.erase(it);
        }
    }
}

#include<bits/stdc++.h>
using namespace std;

const int MAXN = 200005 + 1;

int t, n, a[MAXN];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> t;

    while (t--) {
        cin >> n;

        map<int, int> mp;
        set<int> s;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
            s.insert(a[i]);
        }

        int max_fre = 0;
        for (auto it : mp) {
            max_fre = max(max_fre, it.second);
        }

        int sizeS = s.size() - 1;
        if (max_fre - sizeS > 1) cout << sizeS + 1 << "\n";
        else cout << min(sizeS, max_fre) << "\n";
    }
}

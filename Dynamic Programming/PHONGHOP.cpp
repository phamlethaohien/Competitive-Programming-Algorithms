#include<bits/stdc++.h>
using namespace std;

int main() {
    freopen("PHONGHOP.inp", "r", stdin);
    freopen("PHONGHOP.out", "w", stdout);

    int n, i, j;
    cin >> n;

    vector<pair<int, int>> a;
    vector<int> L(n, 1);
    int s, e;

    for (i = 0; i < n; i++) {
        cin >> s >> e;
        a.push_back(make_pair(e, s));
    }
    sort(a.begin(), a.end());

    int ans = 1;
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            if (a[i].second >= a[j].first)
                L[i] = max(L[i], L[j] + 1);
        }
        ans = max(ans, L[i]);
    }

    cout << ans << endl;

}

#include<bits/stdc++.h>
using namespace std;

long long n, i, j, s, t;

int main() {
    cin >> n;

    vector<long long> L(n, 1);
    vector<pair<long long, long long> > a;

    for (i = 0; i < n; i++) {
        cin >> s >> t;
        a.push_back(make_pair(t, s));
    }
    sort(a.begin(), a.end());

    long long ans = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            if (a[i].second <= a[j].first)
                L[i] = max(L[i], L[j] + 1);
        }
        ans = max(ans, L[i]);
    }
    cout << ans << endl;

}

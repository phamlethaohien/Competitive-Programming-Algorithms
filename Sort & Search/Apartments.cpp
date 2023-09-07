#include<bits/stdc++.h>
using namespace std;

using ll = long long;

const int MAXN = 200005;

int n, m, k, a[MAXN], b[MAXN];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n >> m >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    sort(a, a + n);
    sort(b, b + m);

    int i = 0, j = 0;
    int ans = 0;
    while (i < n && j < m) {
        if (abs(a[i] - b[j]) <= k) {
            ans++; i++; j++;
        }
        else if (a[i] - b[j] > k) j++;
        else i++;
    }
    cout << ans;
}


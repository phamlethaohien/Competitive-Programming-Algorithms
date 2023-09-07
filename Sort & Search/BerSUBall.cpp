#include<bits/stdc++.h>
using namespace std;

int n, m, a[101], b[101];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> m;
    for (int i = 0; i < m; i++) cin >> b[i];

    sort(a, a+n);
    sort(b, b+m);

    int ans = 0;
    int i = 0, j = 0;
    while(i < n && j < m) {
        if (abs(a[i] - b[j]) <= 1) {
            ans++;
            i++; j++;
        }
        else if (a[i] < b[j]) i++;
        else j++;
    }
    cout << ans;
}

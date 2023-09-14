#include<bits/stdc++.h>
using namespace std;

const int MAXN = 200005;

int n, x, a[MAXN];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        a[x] = i;
    }

    int ans = 1;
    for (int i = 2; i <= n; i++) {
        if (a[i] < a[i-1]) ans++;
    }

    cout << ans;
}

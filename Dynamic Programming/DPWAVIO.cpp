#include<bits/stdc++.h>
using namespace std;

int n, u[5050], d[5050], a[5050];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) {
        u[i] = 1;
        for (int j = 0; j < i; j++) {
            if (a[i] > a[j]) u[i] = max(u[i], u[j] + 1);
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        d[i] = 1;
        for (int j = n - 1; j > i; j--) {
            if (a[i] > a[j]) d[i] = max(d[i], d[j] + 1);
        }
    }
    int ans = 1;
    for (int i = 0; i < n; i++) {
        if (u[i] != 1 && d[i] != 1)
        ans = max(ans, u[i] + d[i] - 1);
    }
    cout << ans;
}

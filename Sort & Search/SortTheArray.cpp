#include<bits/stdc++.h>
using namespace std;

int n, a[100001];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    int l = -1, r = n;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i+1]) {
            l = i; break;
        }
    }
    if (l == -1) {
        cout << "yes" << "\n" << "1 1";
        return 0;
    }

    for (int i = n - 1; i >= 0; i--) {
        if (a[i] < a[i-1]) {
            r = i; break;
        }
    }

    int x = l, y = r;
    while (l < r) swap(a[l++], a[r--]);

    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i+1]) {
            cout << "no";
            return 0;
        }
    }
    cout << "yes" << "\n";
    cout << x + 1 << " " << y + 1;

}

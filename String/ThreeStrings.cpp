#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t; cin >> t;
    string a, b, c;
    while (t--) {
        cin >> a >> b >> c;

        bool ok = true;
        for (int i = 0; i < a.size(); i++) {
            if ((a[i] != c[i]) && (b[i] != c[i])) {
                ok = false;
                break;
            }
        }
        if (ok) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
}

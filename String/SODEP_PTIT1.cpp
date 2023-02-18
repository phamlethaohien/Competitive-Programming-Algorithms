#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll t, i;
string n;
bool ok;

int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        for (i = 0; i < n.size(); i+=2) {
            if (n[i] == '-') {
                n.replace(i, 1, "");
            }
            if ((i % 2 == 0 && n[i] % 2 != 0) && ((i+1) % 2 != 0 && n[i+1] % 2 == 0)) {
                ok = 0;
            }
            else {
                ok = 1;
                break;
            }
        }

        if (ok == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n; cin >> n;

    int d4 = 0, d7 = 0;
    bool ok = false;
    for (int b = 0; b <= (n/7); b++) {
	    if (7*b <= n && (n - 7*b) % 4 == 0) {
            d4 = (n - 7*b) / 4;
            d7 = b;
            ok = true;
        }
    }
    if (!ok) cout << -1;

    while (d4--) cout << 4;
    while (d7--) cout << 7;
    cout << "\n";
}

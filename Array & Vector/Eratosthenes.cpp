#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("Eratosthenes.inp", "r", stdin);
    freopen("Eratosthenes.out", "w", stdout);

    int i, j, n = 0;
    cin >> n;

    vector<bool> mark(n+1, true);
    mark[0] = mark[1] = false;

    for (i=2; i*i<=n; i++) {
        if (mark[i]) {
            for (j = i*i; j <= n; j+=i) {
                cout << j << " ";
                mark[j] = false;
            }
        }
    }
    cout << endl;
    for (i=2; i<=n; i++) {
        if (mark[i])
            cout << i << " ";
    }

}

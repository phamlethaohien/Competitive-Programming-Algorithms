#include<bits/stdc++.h>
using namespace std;

using ll = long long;

const ll MOD = (ll)1e9 + 7;
ll C[1001][1001];
//C[i][j] luu to hop chap j cua i (DK: 0 <=x n <= 1000)

void init() {
    for (int i = 0; i <= 1000; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == j) C[i][j] = 1;
            else {
                C[i][j] = C[i-1][j-1] + C[i-1][j];
                C[i][j] % MOD;
            }
        }
    }
}

int main() {
    int t; cin >> t;

    init();
    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << C[n][k] << "\n";
    }
}

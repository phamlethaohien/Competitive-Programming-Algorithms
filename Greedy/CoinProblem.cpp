#include<bits/stdc++.h>
using namespace std;

int t, n;
int v[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

void solve(int n) {
    int ans = 0;
    for (int i = 9; i >= 0; i--) {
        while (n >= v[i]) {
            n -= v[i];
            ans++;
        }
    }
    cout << ans << "\n";
}

int main() {

    cin >> t;

    while (t--) {
        cin >> n;
        solve(n);
    }
}

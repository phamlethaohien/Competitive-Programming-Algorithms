#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m, k;

    cin >> n >> m >> k;

    if (k > min(n, m)) {
        cout << n + m + k;
        return 0;
    } else {
        for (int i = 1; i <= k; i++) {
            cout << i << " " << i;
            cout << "\n";
        }
    }

}

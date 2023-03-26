#include <bits/stdc++.h>
using namespace std;

long long n, i, a[1000000];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for (i = 1; i <= n; i++) cin >> a[i];

    long long s = a[1];
    for (i = n-1; i >= 1; i--) {
        a[i] += (a[i+1] / 2);
    }
    cout << a[1];

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

long long n, x, i, j, a[1000000];

int main() {
    cin >> n >> x;
    for (i = 1; i <= n; i++) cin >> a[i];

    i = 1; j = n;
    while (i < j) {
        if (a[i] + a[j] == x) {
            cout << i << " " << j;
            return 0;
        }
        if (a[i] + a[j] < x) i++;
        if (a[i] + a[j] > x) j--;
    }
    cout << "No solution";

}

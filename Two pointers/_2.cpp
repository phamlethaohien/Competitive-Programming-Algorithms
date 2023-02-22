#include<bits/stdc++.h>
using namespace std;

int n, i, j, x, a[1000];
bool ok;

int main() {
    cin >> x;
    cin >> n;
    for (i = 1; i <= n; i++) cin >> a[i];

    i = 1; j = n;
    while(i < j) {
        if (a[i] + a[j] == x) {
            cout << i << " " << j;
            return 0;
        }
        if (a[i] + a[j] < x) {
            i++;
        }
        if (a[i] + a[j] > x) {
            j--;
        }
    }
    cout << "No solution";

}

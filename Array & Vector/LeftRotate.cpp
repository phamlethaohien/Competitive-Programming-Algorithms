#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6;
int n, i, x, d, a[MAX];

void LeftRotate(int arr[], int d, int n) {
    int tmp[n+1], k=0;

    for (i=d; i<n; i++) {
        tmp[k] = arr[i];
        k++;
    }

    for (i=0; i<d; i++) {
        tmp[k] = arr[i];
        k++;
    }

    for (i=0; i<n; i++) {
        a[i] = tmp[i];
    }
}

int main() {
    freopen("LeftRotate.inp", "r", stdin);
    freopen("LeftRotate.out", "w", stdout);

    cin >> n;
    for (i = 0; i<n; i++) {
        cin >> a[i];
    }
    cin >> d;

    LeftRotate(a, d, n);

    for (i = 0; i<n; i++) {
        cout << a[i] << " ";
    }
}

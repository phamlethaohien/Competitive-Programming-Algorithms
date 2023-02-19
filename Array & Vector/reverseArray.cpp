#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6;
int n, x, i, a[MAX];

void reverseArray(int arr[], int start, int endd) {
    while (start < endd) {
        int tmp = arr[start];
        arr[start] = arr[endd];
        arr[endd] = tmp;
        start++;
        endd--;
    }
}

int main() {
    freopen("reverseArray.inp", "r", stdin);
    freopen("reverseArray.out", "w", stdout);
    vector <int> v(MAX);
    cin >> n;

    // Using reverse() function
    for (i=0; i<n; i++) {
        cin >> x; v.push_back(x);
    }
    reverse(v.begin(), v.end());

    for (i=0; i<n; i++) {
        cout << v[i] << " ";
    }

    // Using reverseArray() void
    for (i=0; i<n; i++) {
        cin >> a[i];
    }
    reverseArray(a, 0, n-1);
    for (i=0; i<n; i++) {
        cout << a[i] << " ";
    }
}

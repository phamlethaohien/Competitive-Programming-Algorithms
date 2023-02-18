#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6;
int n, a[MAX], i, x, y, m, z, To_Find;

int Recursive(int arr[], int left, int right, int x) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x) {
            return mid;
        }

        if (arr[mid] > x) {
            return Recursive(arr, left, mid-1, x);
        }

        return Recursive(arr, mid+1, right, x);
    }
    return -1;
}

int Iterative(int arr[], int l, int r, int x) {
    while (l <= r) {
        int m = l + (r - l) / 2;

        if (arr[m] == x)
            return m;

        if (arr[m] < x)
            l = m + 1;

        else
            r = m - 1;
    }
    return -1;
}

int main() {
    freopen("BinarySearch.inp", "r", stdin);
    freopen("BinarySearch.out", "w", stdout);

    cin >> n;
    for (i=0; i<n; i++) {
        cin >> a[i];
    }
    cin >> x;

    // Recursive
    int result = Recursive(a, 0, n-1, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result << endl;

    //Iterative
    int ans = Iterative(a, 0, n - 1, x);
    (result1 == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << ans << endl;

    return 0;

}

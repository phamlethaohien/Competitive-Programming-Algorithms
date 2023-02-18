#include<bits/stdc++.h>
using namespace std;

int n, i, k, arr[100];

void RightRotate(int arr[], int n, int k) {
    k = k % n;

    for (i=0; i<n; i++) {
        if (i < k) {
            cout << arr[n+i-k] << " ";
        } else {
            cout << arr[i-k] << " ";
        }
    }
}

int main() {
    freopen("RightRotate.inp", "r", stdin);
    freopen("RightRotate.out", "w", stdout);

    cin >> n;
    for (i=0; i<n; i++) {
        cin >> arr[i];
    }
    cin >> k;

    RightRotate(arr, n, k);

}

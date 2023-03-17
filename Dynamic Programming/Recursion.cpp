#include<bits/stdc++.h>
using namespace std;

int n, i;

int tong(int n) {
    if (n == 1)
        return 1;
    return n + tong(n-1);
}

int giaiThua(int n) {
    if (n == 1)
        return 1;
    return n * giaiThua(n-1);
}

long long fibonacci(long long n) {
    if (n <= 1)
        return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int palin(int a[], int l, int r) {
    if (l > r)
        return 1;
    if (a[l] != a[r])
        return 0;
    return (a, l + 1, r - 1);
}

int main() {
    cin >> n;
    cout << tong(n) << endl;
    cout << giaiThua(n) << endl;
    cout << fibonacci(n) << endl;

    int a[n];
    for (i = 0; i < n; i++) cin >> a[i];

    if (palin(a, 0, n-1)) cout << "true";
    else cout << "false";

}

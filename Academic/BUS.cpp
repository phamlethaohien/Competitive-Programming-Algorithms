#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k, i, x, kq;
    cin >> n >> k;
    vector <long long> a;
    for (i=0; i<n; i++) {
        cin >> x; a.push_back(x);
    }
    sort(a.begin(), a.end());
    kq = 0;
    for (i=0; i<k; i++) {
        kq += a[i];
    }
    cout << kq;
}

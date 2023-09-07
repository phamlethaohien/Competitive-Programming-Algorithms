#include<bits/stdc++.h>
using namespace std;

const int MAXN = 200005;

int n, x, a[MAXN];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+ n);

    long long sum = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] > sum) break;
        sum += a[i];
    }
    cout << sum;
}

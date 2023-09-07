#include<bits/stdc++.h>
using namespace std;

int n, a[100001], b[100001], c[100001];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n;

    map<int, int> ma, mb, mc;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ma[a[i]]++;
    }
    for (int i = 0; i < n - 1; i++) {
        cin >> b[i];
        mb[b[i]]++;
    }
    for (int i = 0; i < n - 2; i++) {
        cin >> c[i];
        mc[c[i]]++;
    }

    for (int i = 0; i < n; i++) {
        if (ma[a[i]] != mb[a[i]]) {
            cout << a[i] << "\n";
            break;
        }
    }

    for (int i = 0; i < n - 1; i++) {
        if (mb[b[i]] != mc[b[i]]) {
            cout << b[i] << "\n";
            break;
        }
    }
}


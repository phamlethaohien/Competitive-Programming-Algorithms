#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll n, i, j;

int main() {
    cin >> n;

    vector<ll> a(n);
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<ll> L(n, 1);
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            if (a[i] > a[j]) {
                L[i] = max(L[i], L[j] + 1);
            }
        }
    }
    cout << *max_element(L.begin(), L.end()) << endl;
}

#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll n, i, j;

int main() {
    cin >> n;

    ll d[100000] = {0};

    for (i = 1; i <= n; i++) {
        for (j = i; j <= n; j += i) {
            d[j]++;
        }
    }

    ll cnt = 0;
    for (i = 0; i < n; i++) {
        if (d[i] == 9) {
            cnt++;
        }
    }
    cout << cnt << endl;

}

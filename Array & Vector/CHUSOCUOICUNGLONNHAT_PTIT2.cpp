#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll n, i, j;

bool check(int n) {
    ll last = n % 10;
    while (n) {
        if (n % 10 > last)
            return false;
        n /= 10;
    }
    return true;
}

int main() {
    cin >> n;

    vector<bool> mark(n + 1, true);
    mark[0] = mark[1] = false;

    for (i = 2; i*i <= n; i++) {
        if (mark[i]) {
            for (j = i*i; j <= n; j += i) {
                mark[j] = false;
            }
        }
    }

    ll d = 0;

    for (i = 0; i <= n; i++) {
        if (mark[i] && check(i)) {
            d++;
            cout << i << " ";
        }
    }
    cout << endl;
    cout << d;

}

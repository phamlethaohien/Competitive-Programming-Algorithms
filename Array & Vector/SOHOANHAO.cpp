#include<bits/stdc++.h>
using namespace std;

int n;

int dx(int n) {
    int x, m = 0;
    while (n != 0) {
        x = n % 10;
        n = n / 10;
        m = m * 10 + x;
    }
    return m;
}

int npdx(int n) {
    int x, m = 0, lt = 1;
    while (n != 0) {
        x = n % 2;
        n = n / 2;
        m = x * lt + m;
        lt = lt * 10;
    }
    return m;
}

int main() {
    freopen("SOHOANHAO.inp", "r", stdin);
    freopen("SOHOANHAO.out", "w", stdout);

    cin >> n;

    if ((dx(n) == n) && (dx(npdx(n))) == npdx(n)) cout << n;
    else cout << "not ok";

}

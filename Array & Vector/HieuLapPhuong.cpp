#include<bits/stdc++.h>
using namespace std;

#define ll long long

int i, n, a, b, d, q;

bool snt(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    cin >> q;

    d = 0;
    while (q--) {
        cin >> a;
        if (snt(a*a + (a-1)*(a-1) + a*(a-1)))
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }

}

#include<bits/stdc++.h>
using namespace std;

using ll = long long;

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}

// ax + by = gcd(a,b)
int x, y, g;
void extended_gcd(ll a, ll b) {
    if (b == 0) {
        x = 1; y = 0;
        g = a;
    } else {
        extended_gcd(b, a % b);
        int tmp = x;
        x = y;
        y = tmp - (a / b) * y;
    }
}

int main() {
    extended_gcd(16, 10);
    cout << x << " " << y << " " << g;

    //output: 2 -3 2
}

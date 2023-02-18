#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll a, b, x;

int main() {
    cin >> a >> b;
    x = __gcd(a, b);

    cout << (a/x) * (b/x);
}

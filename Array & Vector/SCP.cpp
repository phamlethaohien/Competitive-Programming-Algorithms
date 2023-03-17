#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll a, b, i;

int main() {
    cin >> a;
    cin >> b;

    for (i = a; i <= b; i++) {
        if (sqrt(i) == (ll)sqrt(i)) cout << i << " ";
    }

}

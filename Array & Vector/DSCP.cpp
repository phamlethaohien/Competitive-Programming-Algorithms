#include<bits/stdc++.h>
using namespace std;

long long l, r;

int main() {
    cin >> l >> r;

    cout << floor(sqrt(r)) - ceil(sqrt(l)) + 1 << endl;
}

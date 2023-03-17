#include<bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

unsigned long long n;

int main() {
    FAST;
    cin >> n;
    cout << n * (n+1) * (2*n + 1) / 6;
}

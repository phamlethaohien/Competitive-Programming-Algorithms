#include<bits/stdc++.h>
using namespace std;

void seive(int l, int r) {
    bool isPrime[r - l + 1];
    for (int i = 0; i <= r - l; i++) {
        isPrime[i] = true;
    }

    for (int i = 2; i * i <= r; i++) {
        for (int j = max(i*i, (l + i - 1) / i * i); j <= r; j += i) {
            isPrime[j - l] = false;
        }
    }

    for (int i = max(2, l); i <= r; i++) {
        if (isPrime[i - l]) {
            cout << i << " ";
        }
    }
}

int main() {
    int l, r;
    cin >> l >> r;
    seive(l, r);
}

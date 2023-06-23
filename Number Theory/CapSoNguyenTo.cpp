#include<bits/stdc++.h>
using namespace std;

int t, n;
bool isPrime[10000];

void seive() {
    for (int i = 0; i <= 10000; i++) {
        isPrime[i] = true;
    }

    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= 10000; i++) {
        if (isPrime[i]) {
            for (int j = i*i; j <= 10000; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

int main() {
    seive();
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 2; i <= n / 2; ++i) {
            if (isPrime[i] && isPrime[n - i]) {
                cout << i <<  " " << n - i << endl;
            }
        }
    }
}

#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1e7;

int t;
long long n;
int isPrime[MAXN];

void seive() {
    for (int i = 1; i <= MAXN; i++) isPrime[i] = i;

    isPrime[0] = 0; isPrime[1] = 1;
    for (int i = 2; i * i  <= MAXN; i++) {
        if (isPrime[i] == i) {
            for (int j = i * i; j <= MAXN; j += i) {
                if (isPrime[j] == j) isPrime[j] = i;
            }
        }
    }
}

int main() {
    seive();
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cout << isPrime[i] << " ";
        }
    }
}

#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1e7;

int t;
long long n;
bool isPrime[MAXN];
void seive() {
    for (int i = 0; i <= MAXN; i++) isPrime[i] = true;

    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i  <= MAXN; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAXN; j += i) {
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
        int ans = 0;
        for (int i = 2; i * i <= n; i++) {
            if (isPrime[i]) cout << i * i << " ";
        }
    }
}

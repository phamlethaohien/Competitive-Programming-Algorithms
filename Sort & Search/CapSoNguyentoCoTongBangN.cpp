#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1000001;

int t, n, prime[MAXN];

void seive() {
    memset(prime, true, sizeof(prime));

    prime[0] = prime[1] = false;

    for (int i = 2; i*i < MAXN; i++) {
        if (prime[i]) {
            for (int j = i*i; j < MAXN; j+=i)
                prime[j] = false;
        }
    }
}

void findPair(int n) {
    int sum = n;
    n /= 2;
    for (int i = n; i >= 1; i--) {
        if (prime[i] && prime[sum - i]) {
            cout << i << " " << sum - i << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> t;
    seive();
    while (t--) {
        cin >> n;
        findPair(n);
    }
}

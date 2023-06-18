#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return n > 1;
}

int degree(int n, int k) {
    int ans = 0;
    for (int i = k; i <= n; i *= k) {
        ans += n / i;
    }
    return ans;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        long long ans = 1;
        for (int i = 1; i <= n; i++) {
            if (isPrime(i)) {
                int d = degree(n, i);
                ans *= (d + 1);
            }
        }
        cout << ans << endl;
    }
}

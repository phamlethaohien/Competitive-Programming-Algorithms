#include<bits/stdc++.h>
using namespace std;

long long euler(int n) {
    long long res = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            res = res - res / i;
            while (n % i == 0) n /= i;
        }
    }
    if (n > 1) res -= res / n;
    return res;
}

int main() {
    int n;
    cin >> n;
    cout << euler(n);
}

#include<bits/stdc++.h>
using namespace std;

long long checkCP(long long n) {
    double tmp = sqrt(n);
    if (tmp - (long long)tmp == 0) return true;
    else return false;
}

int main() {
    //freopen("BOSUHUHU.inp", "r", stdin);
    //freopen("BOSUHUHU.out", "w", stdout);

    long long n, k, i, j, p;
    cin >> n >> k;

    long long cnt = 0;
    if (k == 1) {
        for (i = 2; i <= n; i++) {
            if (checkCP(i) == 1)
                cnt++;
        }
        cout << cnt << endl;
        return 0;
    }

    if (k == 2) {
        for (i = 2; i <= n; i++) {
            for (j = i+1; j <= n; j++) {
                if (checkCP(i * j) == 1)
                    cnt++;
            }
        }
        cout << cnt << endl;
        return 0;
    }

    if (k == 3) {
        for (i = 2; i <= n; i++) {
            for (j = i+1; j <= n; j++) {
                for (p = j+1; p <= n; p++) {
                    if (checkCP(i * j * p))
                        cnt++;
                }
            }
        }
        cout << cnt << endl;
        return 0;
    }

}

#include<bits/stdc++.h>
using namespace std;

long long n, x, i, j, cnt, a[1000000];

int main() {
    cin >> n >> x;
    for (i = 0; i < n; i++) cin >> a[i];

    unordered_map<long long, long long> m;

    for (i = 0; i < n; i++) {
        m[a[i]]++;
    }

    cnt = 0;

    for (i = 0; i < n; i++) {
        cnt += m[x - a[i]];
        if (x - a[i] == a[i])
            cnt--;
    }

    cout << cnt/2;

}

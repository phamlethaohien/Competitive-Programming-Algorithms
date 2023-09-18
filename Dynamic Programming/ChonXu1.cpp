#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define MAXN 1000006

int n, S;
int a[MAXN], f[MAXN];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n >> S;
    for (int i = 1; i <= n; i++) cin >> a[i];

    f[0] = 1;
    for (int s = 0; s <= S; s++) {
        for (int i = 1; i <= n; i++) {
            if (s >= a[i])
                f[s] = (f[s] + f[s-a[i]]) % MOD;
        }
    }
    cout << f[S];
}

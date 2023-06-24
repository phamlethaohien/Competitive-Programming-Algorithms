#include<bits/stdc++.h>
using namespace std;

using ll = long long;

const ll MAXN = 1000001;
int t;
ll n, phi[MAXN];

void seive() {
    for (ll i = 1; i < MAXN; i++) phi[i] = i;

    for (ll i = 2; i < MAXN; i++) {
        if (phi[i] == i) {
            phi[i] = phi[i] - 1;
            for (ll j = i * 2; j < MAXN; j += i) {
                phi[j] = phi[j] - (phi[j] / i);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    seive();
    cin >> t;
    while (t--) {
        cin >> n;
        cout << phi[n] << "\n";
    }
}

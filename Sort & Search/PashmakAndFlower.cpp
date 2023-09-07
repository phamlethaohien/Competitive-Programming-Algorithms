#include<bits/stdc++.h>
using namespace std;

using ll = long long;

const int MAXN = 200005 + 1;

int n;
ll a[MAXN];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n;

    long long maxB = -1e9, minB = 1e9;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        maxB = max(maxB, a[i]);
        minB = min(minB, a[i]);
        mp[a[i]]++;
    }

    cout << maxB - minB << " ";

    if (maxB != minB) cout << 1ll * mp[maxB] * mp[minB];
    else cout << 1ll * mp[maxB] * (mp[maxB] - 1) / 2;

}

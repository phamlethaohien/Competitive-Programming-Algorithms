#include<bits/stdc++.h>
using namespace std;

int n;
string s, s1;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("HOHANG.inp", "r", stdin);
    freopen("HOHANG.out", "w", stdout);

    int t; cin >> t;
    while (t--) {
        cin >> n;
        cin >> s >> s1;

        vector<int> cnt(256, 0);
        for (int i = 0; i < n; i++) cnt[(int)s[i]]++;
        vector<int> cnt1(256, 0);
        for (int i = 0; i < n; i++) cnt1[(int)s1[i]]++;

        if (cnt == cnt1) cout << 1;
        else cout << 0;
        cout << "\n";
    }
}

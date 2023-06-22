#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int t, n;
string s;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> t;
    while (t--) {
        cin >> n >> s;
        if (n < 11 || (n == 11 && s[0] != '8')) {
            cout << "NO" << "\n";
            continue;
        }
        if (n >= 11) {
            sort(s.begin(), s.end() - 10);
            if (binary_search(s.begin(), s.end() - 10, '8')) cout << "YES" << "\n";
            else cout << "NO" << "\n";
            continue;
        }
    }
}

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t; cin >> t;
    string s;
    while (t--) {
        int left = 0, right = 0;
        cin >> s;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                left = i;
                break;
            }
        }
        for (int i = s.size(); i >= left; i--) {
            if (s[i] == '1') {
                right = i;
                break;
            }
        }

        int ans = 0;
        for (int i = left; i < right; i++) {
            if (s[i] == '0') ans++;
        }
        cout << ans << endl;
    }
}

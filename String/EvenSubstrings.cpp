#include<bits/stdc++.h>
using namespace std;

int n;
string s;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n >> s;
    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        if ((int)s[i] % 2 == 0) ans += (i + 1);
    }
    cout << ans;

}

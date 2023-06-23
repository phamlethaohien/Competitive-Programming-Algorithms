#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n; string s;
    cin >> n >> s;

    int d = 0;
    string s1;
    for (int i = 0; i < s.size(); i+=2) {
        if (s[i] == s[i+1]) {
            d++;
            if (s[i+1] == 'a') s[i] = 'b';
            else s[i] = 'a';
        }
    }
    cout << d << "\n";
    cout << s;
}

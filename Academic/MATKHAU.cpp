#include<bits/stdc++.h>
using namespace std;

bool aUs(string a, string s) {
    string b;
    while (b.size() < s.size()) b += a;
    return (b == s);
}

int main() {
    string s; cin >> s;

    string res;
    for (int i = 1; i <= s.size(); i++) {
        if (s.size() % i == 0) {
            int k = s.size() / i;
            string a = s.substr(0, k);
            if (aUs(a, s)) res = a;
        }
    }

    map<char, int> mp;
    int ans = 0;
    for (int i = 0; i < res.size(); i++) {
        mp[res[i]]++;
        ans = max(ans, mp[res[i]]);
    }
    cout << ans;
}

#include<bits/stdc++.h>
using namespace std;

int countPalin(string s) {
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        int left = i - 1;
        int right = i + 1;
        while (left >= 0 && right < s.size()) {
            if (s[left] == s[right])
                cnt++;
            else break;
            left--;
            right++;
        }
    }

    for (int i = 0; i < s.size(); i++) {
        int left = i;
        int right = i + 1;
        while (left >= 0 && right < s.size()) {
            if (s[left] == s[right])
                cnt++;
            else break;
            left--;
            right++;
        }
    }
    return cnt;
}

int main() {
    freopen("DEMXAUDX.inp", "r", stdin);
    freopen("DEMXAUDX.out", "w", stdout);

    int n, t;
    cin >> n >> t;
    cin.ignore();
    string str; cin >> str;

    while (t--) {
        int s, f; cin >> s >> f;
        s--; f--;
        string s1 = "";
        for (int i = s; i <= f; i++)
            s1 += str[i];
        cout << countPalin(s1) + s1.size() << "\n";
    }
}

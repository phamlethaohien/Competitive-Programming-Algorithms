#include<bits/stdc++.h>
using namespace std;

bool isSubstring(string s1, string s2) {
    return (s2.find(s1) != string::npos);
}

int cntD(string str){
    map<char, int> cnt;
    for(int i = 0; i < str.size(); i++){
        cnt[str[i]]++;
    }
    return cnt.size();
}

void solve(string s, int n) {
    int cnt = cntD(s);
    map<string, int> mp;
    string s1 = "";
    for (int i = 0; i < n; i++) {
        s1 += s[i];
        if (s1.size() >= cnt) mp[s1]++;
    }

    int ans = s.size();
    map<string, int> ::iterator it;
    for (it = mp.begin(); it != mp.end(); it++) {
        string s2 = it->first;
        string tmp = s2;
        int sub = s2.size();
        while (s2.size() <= s.size())
            s2 += tmp;
        if (isSubstring(s, s2)) {
            ans = min(ans, sub);
        }
    }
    cout << ans;
}

void solve1(string s, int n) {
    int ans[n + 1];
    memset(ans, 0, sizeof(ans));

    int i = 1, st = 0;
    while (i < n) {
        if (s[i] == s[st]) {
            st++;
            ans[i] = st;
            i++;
        }
        else  {
            if (st != 0) {
                st = ans[st - 1];
            }
            else {
                ans[i] = 0;
                i++;
            }
        }
    }
    cout << n - ans[n - 1];
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("TRUYENT.inp", "r", stdin);
    freopen("TRUYENT.out", "w", stdout);

    int n; cin >> n;
    string s; cin >> s;

    solve1(s, n);
}

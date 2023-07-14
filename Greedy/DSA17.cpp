#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        map<char, int> mp;
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }

        priority_queue<int> Q;
        for (auto it : mp) {
            Q.push(it.second);
        }

        while (n--) {
            int tmp = Q.top();
            Q.pop();
            --tmp;
            Q.push(max(tmp, 0));
        }

        int ans = 0;
        while (!Q.empty()) {
            ans += Q.top() * Q.top();
            Q.pop();
        }

        cout << ans << endl;
    }
}

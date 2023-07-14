#include<bits/stdc++.h>
using namespace std;

int t, n, tmp;

int main() {
    cin >> t;
    while (t--) {
        priority_queue<int, vector<int>, greater<int>> Q;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            Q.push(tmp);
        }
        int ans = 0;
        while (Q.size() > 1) {
            int x = Q.top();
            Q.pop();
            int y = Q.top();
            Q.pop();
            ans += x + y;
            Q.push(x + y);
        }
        cout << ans << endl;
    }
}

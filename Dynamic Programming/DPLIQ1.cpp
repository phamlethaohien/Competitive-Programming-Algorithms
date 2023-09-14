#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    vector<int> ans;
    ans.push_back(v[0]);

    for (int i = 1; i < n; i++) {
        if (v[i] > ans.back())
            ans.push_back(v[i]);
        else {
            int low = lower_bound(ans.begin(), ans.end(), v[i]) - ans.begin();
            ans[low] = v[i];
        }
    }
    cout << ans.size();
}

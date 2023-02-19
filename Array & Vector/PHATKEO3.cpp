#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int s = 0, i = 1, ans = 0;
    vector<int> res;

    while (n--) {
        s += i;
        i = 0;
        i += 3;
        res.push_back(s);
        ans += s;
    }

    cout << ans << endl;

    for (int j = 0; j < res.size(); j++) {
        cout << res[j] << " ";
    }

}

#include<bits/stdc++.h>
using namespace std;

long long n, i, tmp;
vector<long long> v;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> tmp;
        v.emplace_back(tmp);
    }

    long long E = 0, O = 0;
    for (i = 0; i < n; i++) {
        if (v[i] % 2 == 0) E++;
        else O++;
    }

    if ((E != n/2) || (O != (n+1)/2)) {
        cout << -1;
        return 0;
    } else {
        long long ans = 0;
        vector<long long> vE;

        for (i = 0; i < v.size(); i++) {
            if (v[i] % 2 == 0) {
                vE.push_back(i+1);
            }
        }

        for (i = 0; i < vE.size(); i++) {
            ans += abs(vE[i] - (i+1)*2);
        }
        cout << ans;

    }

}

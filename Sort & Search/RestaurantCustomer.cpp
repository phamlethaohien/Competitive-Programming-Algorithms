#include<bits/stdc++.h>
using namespace std;

const int MAXN = 200005;

int n;
vector<pair<int, int>> a;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n;
    for(int i = 0; i < n; i++){
		int x, y; cin >> x >> y;
		a.push_back({x, 1});
		a.push_back({y, -1});
	}
	sort(a.begin(), a.end());

	int ans = 0, cnt = 0;
	for (auto it : a) {
		cnt += it.second;
		ans = max(ans, cnt);
	}
	cout << ans << endl;

}

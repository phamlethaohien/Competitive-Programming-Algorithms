#include<bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using ll = long long;
using vl = vector<ll>;

int N, Q, i, l, r;

vl prefixsum(const vl &a) {
	vl psum(a.size() + 1);
	for (int i = 0; i < a.size(); ++i)
        psum[i + 1] = psum[i] + a[i];
	return psum;
}

int main() {
    FAST;
	cin >> N >> Q;
	vl a(N);
	for (i = 0; i < a.size(); i++) cin >> a[i];

	vl p = prefixsum(a);
	for (i = 0; i < Q; ++i) {
		cin >> l >> r;
		cout << p[r] - p[l-1] << endl;
	}
}

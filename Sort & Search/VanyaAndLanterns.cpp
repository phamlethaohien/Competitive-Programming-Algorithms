#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1001;

int n, l, a[MAXN];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n >> l;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);

    double maxD = max(a[0], l - a[n-1]);
	for(int i = 0; i < n-1; i++){
		maxD = max(maxD, (double)(a[i+1] - a[i]) / 2);
	}
	cout << fixed << setprecision(10) << maxD;

}

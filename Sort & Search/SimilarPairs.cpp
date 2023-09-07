#include<bits/stdc++.h>
using namespace std;

const int MAXN = 50 + 1;
int t, n, a[MAXN];

bool check(int a[],int n){
	sort(a, a + n);
	int cnt_odd = 0, cnt_even = 0;
	for (int i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			++cnt_even;
		}
		else ++cnt_odd;
	}

	if (cnt_odd % 2 != cnt_even % 2) return false;
	if (cnt_odd % 2 == 0) return true;

	for (int i = 0; i < n; i++){
		for (int j = i + 1; j < n; j++){
			if (a[i] % 2 != a[j] % 2 && abs(a[i] - a[j]) == 1)
				return true;
		}
	}
	return false;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];
        if (check(a, n)) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
}

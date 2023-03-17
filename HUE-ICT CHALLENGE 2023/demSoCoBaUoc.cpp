#include<bits/stdc++.h>
using namespace std;

#define FAST   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll     long long
#define vll    vector<ll>
#define vpll   vector<pair<ll,ll>>
#define all(x) x.begin(),x.end()
#define grt(v) sort(v.begin(), v.end(), greater<ll>())
#define pb     push_back
#define mp     make_pair
#define FF     first
#define SS     second

ll x, d, n, i;

bool prime(ll a) {
	if (a < 2) return false;
	for (ll i = 2; i <= sqrt(a); i++)
        if(a % i == 0) return false;
	return true;
}

int main() {
	cin >> n;

    d = 0;
	for(i = 1; i <= n; i++) {
		cin >> x;
		if (sqrt(x) == int(sqrt(x)) && prime(int(sqrt(x)))) d++;
	}
	cout << d;
}

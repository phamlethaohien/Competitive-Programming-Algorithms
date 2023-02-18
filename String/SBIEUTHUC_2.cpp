#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("SBIEUTHUC.inp", "r", stdin);
    freopen("SBIEUTHUC.out", "w", stdout);

	long long n, i, j, t;
	string x, s;
	vector <long long> vs;
	vector <char> vd;
	cin >> s;
	x = ' ';
	s = s + ' ';
	for (i = 0; i <= s.length() + 1; i++){
		if ((s[i] != '+') and (s[i] != '-') and (s[i] != ' '))
			x = x + s[i];
        else{
            int k = atoi(x.c_str());
            vd.push_back(s[i]);
            vs.push_back(k);
            x = ' ';
        }
	}
    t = vs[0];
	for (i = 1; i <= vd.size(); i++){
		if (vd[i-1] == '+') {
			t = t + vs[i];
		}
		else if (vd[i-1] == '-') {
            t = t - vs[i];
		}
	}
	cout << t << endl;
}

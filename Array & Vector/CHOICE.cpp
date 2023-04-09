#include<bits/stdc++.h>
using namespace std;

int n, m, i, j, k, cnt = 0, septrue = 0, sepfalse = 0, ptrue = 0, pfalse = 0;
string s, tmp, ms;
vector<pair<int, int>> pans;

struct ST {
    string b;
    bool check[100] = {false};
};

int main() {
    cin >> n;
    cin >> s;
    cin >> m;
    vector<ST> v(m);

    for (i = 0; i < m; i++) {
        cin >> v[i].b;
        for (j = 0; j < v[i].b.size(); j++) {
            if ((v[i].b)[j] == s[j]) (v[i].check)[j] = true;
        }
    }

    for (int i = 0; i < m - 1; ++i){
		for (int j = i + 1; j < m; ++j){
			for (int k = 0; k < v[i].b.size(); ++k){
				if ((v[i].check)[k]) septrue++;
				else sepfalse++;

				if ((v[i].check)[k] == (v[j].check)[k] && (v[i].check)[k] == true) ptrue++;
				if ((v[i].check)[k] == (v[j].check)[k] && (v[i].check)[k] == false && (v[i].b)[k] == (v[j].b)[k]) pfalse++;
			}

			if (ptrue > (septrue / 2) && pfalse > (sepfalse / 2)) {
                pans.push_back(make_pair(i+1, j+1));
			}
			septrue = sepfalse = 0;
			ptrue = pfalse = 0;
		}
	}

	cout << pans.size() << endl;
	for (i = 0; i < pans.size(); i++) {
        cout << pans[i].first << " " << pans[i].second << "\n";
	}

}

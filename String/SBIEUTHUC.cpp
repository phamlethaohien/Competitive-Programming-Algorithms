#include <bits/stdc++.h>
using namespace std;

int convert(string s) {
    int x = 0, n = s.length();
    for (int i = 1; i < n; i++) {
       x = x * 10;
       x = x + s[i] - 48;
    }
    if (s[0] == '+') return x;
    if (s[0] == '-') return -x;
}

int main() {
    //freopen("SBIEUTHUC.inp", "r", stdin);
    //freopen("SBIEUTHUC.out", "w", stdout);

    string s; cin >> s;

    string numB, numE;
    int num[100] = {0}, ssize = 1, k = 1;
    int n = s.length(), i, j;

    for (i = 0; i < n; i++) {
        if (s[i] == '+' || s[i] == '-') {
            numB = s.substr(0, i);
            break;
        }
    }
    num[0] = atoi(numB.c_str());

    for (i = 0; i < n-1; i++) {
        for (j = i + 1; j < n; j++) {
            if ((s[i] == '+' || s[i] == '-') && (s[j] == '+' || s[j] == '-')) {
                num[k++] = convert(s.substr(i, j - i));
                i = j;
                ssize++;
            }
        }
    }

    for (i = n-1; i >= 0; i--) {
        if (s[i] == '+' || s[i] == '-') {
            numE = s.substr(i + 1, n - 1 - i);
            break;
        }
    }
    num[ssize + 1] = atoi(numE.c_str());

    int res = 0;

    for (k = 0; k <= ssize+1; k++) res += num[k];

    cout << res << endl;

    return 0;
}

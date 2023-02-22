#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a[10000], b[10000];
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int j = 1; j <= m; j++) {
        cin >> b[j];
    }

    int i = 1, j = 1;
    vector<int> c;

    while (i <= n || j <= m) {
        if (j == m + 1 || (i <= n && a[i] <= b[j]))
            c.push_back(a[i++]);
        else
            c.push_back(b[j++]);
    }
    for (int it = 0; it < c.size(); it++) {
        cout << c[it] << " ";
    }

}

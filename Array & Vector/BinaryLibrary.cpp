#include <bits/stdc++.h>
using namespace std;

int n, i, x, to_find, low, up;

int main() {
    freopen("BinaryLibrary.inp", "r", stdin);
    freopen("BinaryLibrary.out", "w", stdout);

    vector<int> v;
    cin >> n;
    for (i=0; i<n; i++) {
        cin >> x; v.push_back(x);
    }
    cin >> to_find;

    // binary_search
    if (binary_search(v.begin(), v.end(), to_find))
        cout << to_find << " found!" << endl;
    else
        cout << "Not found" << endl;

    //lower_bound
    vector<int>::iterator up, low;
    low = lower_bound(v.begin(), v.end(), to_find);
    cout << low - v.begin() << endl;

    //upper_bound
    up = upper_bound(v.begin(), v.end(), to_find);
    cout << up - v.begin() << endl;

}

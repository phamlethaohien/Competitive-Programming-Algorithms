#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int a, b;
    cin >> a >> b;

    long long ans = a + b;
    string m = to_string(a), n = to_string(b);
    string m2 = to_string(a), n2 = to_string(b);

    for (int i = 0; i < m.size(); i++) if (m[i] == '5') m[i] = '6';
    int a1 = stoi(m);

    for (int i = 0; i < n.size(); i++) if (n[i] == '5') n[i] = '6';
    int b1 = stoi(n);

    long long maxA = a1 + b1;
    maxA = max(maxA, ans);

    for (int i = 0; i < m2.size(); i++) if (m2[i] == '6') m2[i] = '5';
    int a2 = stoi(m2);

    for (int i = 0; i < n2.size(); i++) if (n2[i] == '6') n2[i] = '5';
    int b2 = stoi(n2);

    long long minA = a2 + b2;
    minA = min(minA, ans);

    cout << minA << " " << maxA;
}

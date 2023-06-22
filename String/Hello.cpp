#include<bits/stdc++.h>
using namespace std;

string appear(string s) {
    string s1 = "";
    unordered_map<char, int> d;

    for (auto i : s) {
        if (i == 'h' || i == 'e' || i == 'l' || i == 'o') {
            d[i]++;
        }
    }

    for (auto i : s) {
        if (d[i] != 0) {
            if ((i == 'h' || i == 'e' || i == 'o')) s1 += i;
            if (i == 'l' && d[i] >= 2) s1 = s1 + i + i;
            d[i] = 0;
        }
    }
    return s1;
}

int main() {
    string s;
    cin >> s;

    if (appear(s) == "hello") cout << "YES";
    else cout << "NO";
}

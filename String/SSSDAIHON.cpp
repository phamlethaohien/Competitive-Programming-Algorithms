#include<bits/stdc++.h>
using namespace std;

int main() {
    string s, s1;
    getline(cin, s);
    getline(cin, s1);

    if (s.size() > s1.size()) {
        cout << s.size();
    }
    else cout << s1.size();

}

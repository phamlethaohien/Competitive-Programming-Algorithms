#include<bits/stdc++.h>
using namespace std;

long long n, i, tmp, x, m;
vector<long long> a, b;
string s;

// So phan tu khac nhau
void solve1() {
    cin >> n;
    //set<int> s;
    map<int, bool> mp;
    for (i = 0; i < n; ++i) {
        cin >> tmp;
        //s.insert(tmp);
        mp[tmp] = true;
    }
    //cout << s.size() << endl;
    cout << mp.size() << endl;
}

// Kiem tra x co trong mang hay khong
void solve2() {
    cin >> n >> x;
    for (i = 0; i < n; i++) {
        cin >> tmp; a.push_back(tmp);
    }
    if (binary_search(a.begin(), a.end(), x)) cout << "YES" << endl;
    else cout << "NO" << endl;
}

// Tim phan tu thuoc mang thu nhat va khong thuoc mang thu hai
void solve3() {
    cin >> n >> m;
    for (i = 0; i < n; i++) {
        cin >> tmp; a.push_back(tmp);
    }
    set<int> s;
    for (i = 0; i < m; i++) {
        cin >> tmp; s.insert(tmp);
    }
    bool ok = false;
    for (i = 0; i < n; i++) {
        if (s.find(a[i]) == s.end()) {
            cout << a[i] << " ";
            ok = true;
        }
    }
    if (!ok) cout << "Not Found" << endl;
    else cout << endl;
}

// So xuat hien nhieu lan nhat trong mang
void solve4() {
    cin >> n;
    map<long long, long long> mp;
    for (i = 0; i < n; i++) {
        cin >> x;
        mp[x]++;
    }
    long long ans, fre = 0;
    for (auto it : mp) {
        if (it.second > fre) {
            fre = it.second;
            ans = it.first;
        }
    }
    cout << ans << " " << fre << endl;
}

// Ki tu co so lan xuat hien nhieu nhat trong xau
void solve5() {
    string s;
    cin.ignore();
    getline(cin, s);
    /*int f[256] = {0};
    for (char x : s) {
        f[x]++;
    }
    char res; int fre = 0;
    for (i = 0; i < 256; i++) {
        if (f[i] > fre) {
            fre = f[i];
            res = (char)(i);
        }
    }*/
    map<char, int> mp;
    for (char x : s) mp[x]++;

    char res = 0; int fre = 0;
    for (auto it : mp) {
        if (it.second > fre) {
            fre = it.second;
            res = it.first;
        }
    }
    cout << res << endl;
}

// Xau Pangram
void solve6() {
    string s;
    getline(cin, s);

    //set<char> st;
    map<char, bool> mp;
    for (char x : s) {
        //st.insert(tolower(x));
        mp[tolower(x)] = true;
    }
    if (mp.size() == 26) cout << "YES" << endl;
    else cout << "NO" << endl;
}

// Dem so tu khac nhau trong xau
void solve7() {
    string s;
    getline(cin, s);

    set<string> st;
    stringstream ss(s);
    string word;
    while (ss >> word) {
        st.insert(word);
    }
    cout << st.size() << endl;
}

int main() {
    solve1();
}

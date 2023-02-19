#include<bits/stdc++.h>
using namespace std;

bool cmp(const string &a, const string &b){
    return b + a < a + b;
}

int main(){
    int n;
    cin >> n;
    string a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    for(int i = 0; i < n; ++i){
        cout << a[i];
    }
    return 0;
}

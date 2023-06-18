#include<bits/stdc++.h>
using namespace std;

int degree(int n, int k) {
    int ans = 0;
    for (int i = k; i <= n; i *= k) {
        ans += (n / i);
    }
    return ans;
}

int main(){
    int n; cin >> n;
    cout << degree(n, 5);
}

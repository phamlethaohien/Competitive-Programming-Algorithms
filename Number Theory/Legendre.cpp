#include<bits/stdc++.h>
using namespace std;

// Cho N va so nguyen to K
// Tim x sao cho N! chia het cho K^x va x lon nhat

int degree(int n, int k){
    int ans = 0;
    for (int i = k; i <= n; i *= k) {
        ans += (n / i);
    }
    return ans;
}

int main() {
    int n, k;
    cin >> n >> k;

    cout << degree(n, k);

}

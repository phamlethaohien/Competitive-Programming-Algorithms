#include<bits/stdc++.h>
using namespace std;

#define FAST   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll     long long
#define vll    vector<ll>
#define vpll   vector<pair<ll,ll>>
#define all(x) x.begin(),x.end()
#define grt(v) sort(v.begin(), v.end(), greater<ll>())
#define pb     push_back
#define mp     make_pair
#define FF     first
#define SS     second
#define MAXN   100000

double x, y, x1, yy, x2, y2;
double hx, hy;

int main() {
    FAST;

    cin >> x >> y >> x1 >> yy >> x2 >> y2;

    double ans = 0;
    if (x >= x1 && x <= x2 && y >= yy && y <= y2) {
        ans = 0;
    }
    else {
        if (x < x1) {
            hx = x1 - x;
        } else if (x > x2) {
            hx = x - x2;
        } else hx = 0;

        if (y < yy) {
            hy = yy - y;
        } else if (y > y2) {
            hy = y - y2;
        } else hy = 0;
        ans = sqrt(hx * hx + hy * hy);
    }
    cout << setprecision(1) << fixed << ans;

}

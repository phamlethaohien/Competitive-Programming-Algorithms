#include<bits/stdc++.h>
using namespace std;

int n, k, a[1000000];
deque<int> dq;

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < k; i++) {
        while (!dq.empty() && a[i] >= a[dq.back()])
            dq.pop_back();
        dq.push_back(i);
    }
    cout << a[dq.front()] << " ";

    for (int i = k; i < n; i++) {
        if (dq.front() == i - k)
            dq.pop_front();
        while (!dq.empty() && a[i] >= a[dq.back()])
            dq.pop_back();
        dq.push_back(i);
        cout << a[dq.front()] << " ";
    }
}

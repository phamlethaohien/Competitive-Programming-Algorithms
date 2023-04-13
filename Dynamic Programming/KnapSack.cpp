#include <bits/stdc++.h>
using namespace std;

int knapSack(int W, int wt[], int val[], int n) {
	int i, w;
	vector<vector<int> > K(n + 1, vector<int>(W + 1));

	for (i = 0; i <= n; i++) {
		for (w = 0; w <= W; w++) {
			if (i == 0 || w == 0)
				K[i][w] = 0;
			else if (wt[i - 1] <= w)
				K[i][w] = max(val[i - 1] + K[i - 1][w - wt[i - 1]], K[i - 1][w]);
			else
				K[i][w] = K[i - 1][w];
		}
	}
	return K[n][W];
}

int main() {
    int n, W;
	cin >> n >> W;
	int profit[n+1]; int weight[n+1];
	for (int i = 0; i < n; i++) cin >> profit[i];
	for (int i = 0; i < n; i++) cin >> weight[i];

    cout << knapSack(W, weight, profit, n);

	return 0;
}

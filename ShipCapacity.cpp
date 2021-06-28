#include <bits/stdc++.h>
using namespace std;

int numtrips(vector<int>& vec, int cap) {
	int trips = 0, wt = 0;
	for (int i = 0; i < vec.size(); i++) {
		if (wt + vec[i] <= cap)
			wt += vec[i];
		else {
			wt = vec[i];
			trips++;
		}
	}
	return trips += 1;
}

int main()
{
	int n, da;
	cin >> n >> da;
	vector<int> vec(n);
	int mx = INT_MIN, sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> vec[i];
		mx = max(mx, vec[i]);
		sum += vec[i];
	}
	int lo = mx, hi = sum, mid;

	while (lo < hi) {
		mid = lo + (hi - lo) / 2;
		if (numtrips(vec, mid) <= da)
			hi = mid;
		else
			lo = mid + 1;
	}
	cout << lo;
	return 0;
}

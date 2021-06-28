#include <bits/stdc++.h>
using namespace std;

int minelement(vector<int>& vec, int n) {
	int lo = 0, hi = n - 1, mid;

	while (lo < hi) {
		mid = lo + (hi - lo) / 2;

		if (vec[0] > vec[mid])
			hi = mid;
		else
			lo = mid + 1;
	}
	if (vec[0] > vec[lo])
		return vec[lo];
	else
		return vec[0];
}

int main()
{
	int n;
	cin >> n;
	vector<int> vec(n);
	for (int i = 0; i < n; i++) {
		cin >> vec[i];
	}
	cout << minelement(vec, n) << endl;
	return 0;
}
//Smallest Divisor Given Threshold
#include<bits/stdc++.h>
using namespace std;

int findsum(vector<int>& vec, int div) {
	int sum = 0;
	for (int i = 0; i < vec.size(); i++) {
		sum += ceil((float)vec[i] / div);
	}
	return sum;
}

int main() {
	int n, th, maxn=INT_MIN;
	cin >> n >> th;
	vector<int> vec(n);
	for (int i = 0; i < n; i++) {
		cin >> vec[i];
		maxn = max(maxn, vec[i]);
	}
	int lo = 1, hi = maxn, mid;
	while (lo < hi) {
		mid = lo + (hi - lo) / 2;
		if (findsum(vec, mid) <= th)
			hi = mid;
		else
			lo = mid + 1;
	}
	cout << lo;
}
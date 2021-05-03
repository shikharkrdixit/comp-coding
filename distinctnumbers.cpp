#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,t;
	cin>>n;
	vector<int> vec;
	for(int i=0;i<n;i++){
	    cin>>t;
	    vec.push_back(t);
	}
	sort(vec.begin(),vec.end());
	vec.erase(unique(vec.begin(),vec.end()),vec.end());
	cout<<vec.size();
	return 0;
}
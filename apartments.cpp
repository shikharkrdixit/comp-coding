#include <bits/stdc++.h>
using namespace std;

int main() {
	long long cu,ap,df,t;
	cin>>cu>>ap>>df;
	vector<long long> vec1(cu);
	vector<long long> vec2(ap);
	for(long long a=0;a<cu;a++){
	    cin>>vec1[a];
	}
	for(long long b=0;b<ap;b++){
	    cin>>vec2[b];
	}
	int count=0;
	sort(vec1.begin(),vec1.end());
	sort(vec2.begin(),vec2.end());
	long long i=0,j=0;
	while(i<cu && j<ap){
	    if(abs(vec1[i]-vec2[j])<=df){
	        count++;
	        i++;
	        j++;
	    }
	    else
	    if(vec1[i]-vec2[j]>df){
	        j++;
	    }
	    else{
	        i++;
	    }
	}
	cout<<count;
	return 0;
}
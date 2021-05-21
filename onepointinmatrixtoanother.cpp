#include <iostream>
using namespace std;
int solve(int n,int m){
    if(n==1 || m==1)return 1;
    
    return solve(n-1,m)+(m-1,n);
}

int main() {
	int n,m;
	cin>>n>>m;
	cout<<solve(n,m);
	return 0;
}
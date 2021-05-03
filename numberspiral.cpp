#include <bits/stdc++.h>
using namespace std;

long long cmr(long long r,long long c){
    if(c%2==0){
        return (c-1)*(c-1)+r;
    }
    else{
        return c*c-r+1;
    }
}
long long rmc(long long r,long long c){
    if(r%2==0){
        return (r*r)-(c-1);
    }
    else{
        return (r-1)*(r-1)+c;
    }
}

int main() {
	long long n;
	cin>>n;
	long long r,c,res;
	while(n--){
	    cin>>r>>c;
	    if(r>c){
	        res=rmc(r,c);
	    }
	    else{
	        res=cmr(r,c);
	    }
	    cout<<res<<"\n";
	}
	return 0;
}
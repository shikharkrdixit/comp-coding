/*This was a randomly found problem
We had to print a series of number in a given pattern

1 4 9 25 64 169*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int f=1;
    int s=1,p;
    for(int i=0;i<n;i++){
        int ts=f+s;
        cout<<pow(s,2)<<" ";
        f=s;
        s=ts;
    }
	return 0;
}
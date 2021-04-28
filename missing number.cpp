#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n,sum1,sum2=0;
    cin>>n;
    sum1 = n*(n+1)/2;
    for(int i=0;i<n-1;i++){
        int temp;
        cin>>temp;
        sum2+=temp;
    }
    cout<<sum1-sum2;
    return 0;
}
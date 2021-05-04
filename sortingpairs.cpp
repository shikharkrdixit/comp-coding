#include<bits/stdc++.h>
using namespace std;

void sortpair(int a[],char b[],int n){
    vector<pair<int,char>> vec(n,pair<int,char>(0,'\0'));
    for(int i=0;i<n;i++){
        vec[i]={a[i],b[i]};
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<n;i++){
        cout<<vec[i].first<<" "<<vec[i].second<<"\n";
    }
}
int main(){
    int n;
    cin>>n;
    int ar[n];
    char b[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sortpair(ar,b,n);
    return 0;
}
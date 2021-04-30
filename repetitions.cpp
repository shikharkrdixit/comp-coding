#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    char y;
    cin>>str;
    y=str[0];
    int sz=1,tmp=1;
    for(auto i:str){
        if(y != i){
            y=i;
            sz=1;
        }
        tmp=max(tmp,sz++);
    }
    cout<<tmp;
    return 0;
}
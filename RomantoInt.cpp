class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> romtoin;
        romtoin['I']=1;
        romtoin['V']=5;
        romtoin['X']=10;
        romtoin['L']=50;
        romtoin['C']=100;
        romtoin['D']=500;
        romtoin['M']=1000;
        int n=s.length();
        int curr,prev=0,sum=0;
        for(int i=n-1;i>=0;i--){
            curr=romtoin[s[i]];
            
            if(curr<prev){
                sum-=curr;
            }else{
                sum+=curr;
            }
            prev=curr;
        }
        return sum;
    }
};
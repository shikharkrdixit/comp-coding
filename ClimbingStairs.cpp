class Solution {
public:
    int climbStairs(int n) {
        if(n==1 or n==2 or n==2) return n;
        
        int a=1,b=2;
        for(int i=3;i<=n;i++){
            b=a+b;
            a=abs(a-b);
        }
        return b;
    }
};
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,b=INT_MIN;
        for(auto x: nums){
            sum+=x;
            if(b<sum) b=sum;
            if(sum<0) sum=0;
        }
        return b;
    }
};
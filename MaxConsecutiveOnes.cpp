class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0, mx=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]){
                count+=1;
                mx=max(mx,count);
            }
            else{
                count=0;
            }
        }
        return mx;
    }
};
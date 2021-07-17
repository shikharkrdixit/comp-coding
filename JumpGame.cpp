class Solution {
public:
    bool canJump(vector<int>& nums) {
        int mx=0;
        for(int i=0;i<nums.size()-1;i++){
            mx=max(mx-1,nums[i]);
            if(mx==0 and nums[i]==0)
                return false;
        }
        return true;
    }
};
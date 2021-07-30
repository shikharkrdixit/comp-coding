class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int lo=0,hi=nums.size()-1;
        while(lo<hi){
            if(nums[lo]+nums[hi]==target){
                ans.push_back(lo+1);
                ans.push_back(hi+1);
                break;
            }
            else if(nums[lo]+nums[hi]<target)
                lo=lo+1;
            else
                hi=hi-1;
        }
        return ans;
    }
};
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int res=nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size();i++){
            for(int j=i+1,k=nums.size()-1;k>j;){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum>target)k-=1;
                else
                    j++;
                if(abs(target-res)>abs(target-sum))
                    res=sum;
            }
        }
        return res;
    }
};
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)return 0;
        if(nums.size()==1)return 1;
        int p1=0,p2=1,cnt=0;
        while(p2<nums.size()){
            if(nums[p1]==nums[p2])p2+=1;
            else{
                p1+=1;
                swap(nums[p1],nums[p2]);
                p2+=1;
                cnt+=1;
            }
        }
        return cnt+1;
    }
};
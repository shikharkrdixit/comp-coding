class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int temp=nums[i],di=0;
            while(temp>0){
                temp=temp/10;
                di+=1;
            }
            if(di%2==0) count++;
        }
        return count;
    }
};
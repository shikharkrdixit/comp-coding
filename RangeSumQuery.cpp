class NumArray {
public:
    vector<int> vec;
    NumArray(vector<int>& nums) {
        vec.resize(nums.size());
        vec[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            vec[i]=vec[i-1]+nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0)return vec[right];
        
        return vec[right]-vec[left-1];
    }
};
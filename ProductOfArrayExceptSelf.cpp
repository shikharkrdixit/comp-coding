class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> vec(n);
        
        //suffix product
        vec[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            vec[i]=nums[i]*vec[i+1];
        }
        int prod_till_now=nums[0];
        vec[0]=vec[1];
        for(int i=1;i<n-1;i++){
            vec[i] = prod_till_now*vec[i+1];
            prod_till_now*=nums[i];
        }
        vec[n-1]=prod_till_now;
        return vec;
    }
};
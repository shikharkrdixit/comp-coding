class Solution  {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int freq,val,n=nums.size();
        vector<int> vec;
        for(int i=0;i<n/2;i++){
            freq=nums[2*i]; 
            val=nums[2*i+1];
            while(freq>0){
                vec.push_back(val);
                freq-=1;
            }
        }
        return vec;
    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int vote=0,candidate;
        for(int i:nums){
            if(vote==0){
                candidate=i; vote=1;}
            else if(i==candidate)
                vote+=1;
            else
                vote-=1;
        }
        return candidate;
    }
};
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int lo=0,hi=n-1;
        int maxvol=0;
        while(lo<hi){
            maxvol=max(maxvol,min(height[lo],height[hi])*(abs(hi-lo)));
            
            if(height[lo]>height[hi]){
                hi--;
            }else{
                lo+=1;
            }
        }
        return maxvol;
    }
};
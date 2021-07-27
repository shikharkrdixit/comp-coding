class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        long res=1;
        ans.push_back(1);
        for(int i=0;i<rowIndex;i++){
            res*=(rowIndex-i);
            res/=(i+1);
            ans.push_back(res);
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> vec;
        int n=matrix.size();
        int m=matrix[0].size();
        int top=0,bottom=n-1;
        int left=0,right=m-1;
        int i;
        while(top<=bottom and left<=right){
            for(i=left;i<=right;i++){
                vec.push_back(matrix[top][i]);
            }
            
            for(i=top+1;i<=bottom;i++){
                vec.push_back(matrix[i][right]);
            }
            
            if(top!=bottom){
                for(i=right-1;i>=left;i--){
                    vec.push_back(matrix[bottom][i]);
                }
            }
            if(left!=right){
                for(i=bottom-1;i>top;i--){
                    vec.push_back(matrix[i][left]);
                }
            }
            top+=1; bottom-=1; left+=1; right-=1;
        }
        return vec;
    }
};
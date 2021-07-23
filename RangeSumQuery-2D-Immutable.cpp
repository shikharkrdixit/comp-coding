class NumMatrix {
public:
    vector<vector<int>> ans;
    NumMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        
        ans= vector<vector<int>>(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans[i][j]=matrix[i][j];
                if(i-1>=0)
                    ans[i][j]+=ans[i-1][j];
                if(j-1>=0)
                    ans[i][j]+=ans[i][j-1];
                if(i-1>=0 and j-1>=0)
                    ans[i][j]-=ans[i-1][j-1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int val=ans[row2][col2];
        if(row1-1>=0)
            val-=ans[row1-1][col2];
        if(col1-1>=0)
            val-=ans[row2][col1-1];
        if(row1-1>=0 and col1-1>=0)
            val+=ans[row1-1][col1-1];
        return val;
    }
};
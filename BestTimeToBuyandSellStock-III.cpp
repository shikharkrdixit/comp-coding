class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n==1)return 0;
        vector<int> vec(n);
        vec[0]=0;
        int leastnow=prices[0];
        
        for(int i=1;i<n;i++){
            vec[i]=max(vec[i-1],prices[i]-leastnow);
            leastnow=min(leastnow,prices[i]);
        }
        
        int maxnow=prices[n-1];
        int pi=vec[n-2];
        int ans=0;
        
        ans=max(ans,pi);
        for(int i=n-2;i>=1;i--){
            pi=vec[i-1]+maxnow-prices[i];
            ans=max(ans,pi);
            maxnow=max(maxnow,prices[i]);
        }
        pi=maxnow-prices[0];
        ans=max(ans,pi);
        return ans;
    }
};
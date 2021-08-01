class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> ans(256,0);
        if(s.size()==0)return 0;
        
        int p1=0,p2=0;
        int res=0,count=0;
        while(p1<s.size()){
            if(ans[s[p1]]>0) count++;
            ans[s[p1]]++;
            p1++;
            while(count>0){
                if(ans[s[p2]]>1)count--;
                ans[s[p2]]--;
                p2++;
            }
            res=max(res,p1-p2);
        }
        return res;
    }
};
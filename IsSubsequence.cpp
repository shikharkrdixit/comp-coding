class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ind=0;
        int i;
        for(i=0;i<t.length();i++){
            ind+=(s[ind]==t[i]);
        }
        if(ind!=s.length())
            return false;
        return true;
    }
};
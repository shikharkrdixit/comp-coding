class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        int strmat[123]={0};
        for(int i=0;i<s.length();i++){
            strmat[int(s[i])]+=1;
        }
        for(int i=0;i<t.length();i++){
            strmat[int(t[i])]-=1;
            if(strmat[int(t[i])]<0)
                return false;
        }
        return true;
    }
};
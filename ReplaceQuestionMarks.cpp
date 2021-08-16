class Solution {
public:
    string modifyString(string s) {
        string ch={'a','b','c'};
        for(int i=0;i<s.length();i++){
            if(s[i]=='?'){
            if(((i==0)or(s[i-1]!='a'))and((i==s.length()-1)or(s[i+1]!='a'))) s[i]='a';
            else if(((i==0)or(s[i-1]!='b'))and((i==s.length()-1)or(s[i+1]!='b'))) s[i]='b';
            else if(((i==0)or(s[i-1]!='c'))and((i==s.length()-1)or(s[i+1]!='c'))) s[i]='c';
            }
        }
        return s;
    }
};
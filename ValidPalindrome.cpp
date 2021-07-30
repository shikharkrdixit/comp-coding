class Solution {
public:
    bool isPalindrome(string s) {
        //if(s.size()<2)return true;
        int in=0,fi=s.size()-1;
        while(in<fi){
            if(!isalpha(s[in]) and !isdigit(s[in])){in+=1; continue;}
            if(!isalpha(s[fi]) and !isdigit(s[fi])){fi-=1; continue;}
            if(tolower(s[in])!=tolower(s[fi]))
                return false;
            in+=1;
            fi-=1;
        }
        return true;
    }
};
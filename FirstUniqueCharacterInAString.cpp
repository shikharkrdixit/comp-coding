class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> strmap;
        for(char c:s){
            strmap[c]+=1;
        }
        for(int i=0;i<s.size();i++){
            if(strmap[s[i]]==1)
                return i;
        }
        return -1;
    }
};
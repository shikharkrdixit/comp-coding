class Solution {
public:
    stack<char> backspace(string str){
        stack<char> st;
        for(char &ch:str){
            if(ch!='#') st.push(ch);
            else if(st.empty()==false) st.pop();                        
        }
        return st;
    }
    bool backspaceCompare(string s, string t) {
        return backspace(s)==backspace(t);
    }
};
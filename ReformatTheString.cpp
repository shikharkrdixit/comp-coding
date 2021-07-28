class Solution {
public:
    string reformat(string s) {
        string sint="";
        string schr="";
        for(auto i:s){
            if(isdigit(i)){
                sint+=i;
            }else{
                schr+=i;
            }
        }
        string ans="";
        int si=sint.length();
        int sc=schr.length();
        if(abs(si-sc)>1)
            return ans;
        
        
        if(si>sc){
            for(int i=0;i<si;i++){
                ans+=sint[i];
            if(i<sc){
                ans+=schr[i];
            }
            }
            
        }else{
            for(int i=0;i<sc;i++){
                ans+=schr[i];
            if(i<si){
                ans+=sint[i];
            }
            }
        }
        return ans;
    }
};
class Solution {
public:
    string addStrings(string num1, string num2) {
        int l1=num1.length()-1;
        int l2=num2.length()-1;
        string str="";
        
        int carr=0;
        while(l1>=0 or l2>=0 or carr>0){
            int a,b;
            if(l1>=0) a=num1[l1]-'0'; else a=0;
            if(l2>=0) b=num2[l2]-'0'; else b=0;
            
            str+=(a+b+carr)%10+'0';
            carr=(a+b+carr)/10;
            l1--,l2--;
        }
        reverse(str.begin(),str.end());

        return str;
    }
};
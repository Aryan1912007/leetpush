class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0"||num2=="0")
        return "0";
        string s(num1.size()+num2.size(),'0');
        for(int i=num1.size()-1;i>=0;i--){
            int carry=0;
            for(int j=num2.size()-1;j>=0;j--){
                int val=(num1[i]-'0')*(num2[j]-'0')+(s[i+j+1]-'0')+carry;
                if(val>9){
                    s[i+j+1]=to_string(val%10)[0];
                    carry=val/10;
                 }
                else{
                    s[i+j+1]=to_string(val)[0];
                    carry=0;

                }
               

        }s[i]=to_string((s[i]-'0')+carry)[0];}
        int i=0;
        while(i<s.size()&&s[i]=='0'){
            i++;}
            return s.substr(i);
         
    }
};
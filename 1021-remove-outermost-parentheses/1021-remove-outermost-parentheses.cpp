class Solution {
public:
    string removeOuterParentheses(string s) {
        int h=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                h++;
                if(h==1){
                    s.erase(i,1);
                    i--;}}
               
            else
                h--;
                if(h==0){
                    s.erase(i,1);
                    i--;
            }
             
                
        }
        return s;
        
    }
};
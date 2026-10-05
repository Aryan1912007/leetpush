class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> s1;
        int k=0,h=0,l=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                h++;}
            
            else{
                h--;
                if(s[i-1]=='(')
                    k+=pow(2,h);}}
                    return k;
    }};
             
class Solution {
public:
    int maxDepth(string s1) {
        int count=0;
       stack<char > s;
       for(char i: s1){
        if(i=='(')
            s.push(i);
        else if(i==')'){
                count=max((int)s.size(),count);
                s.pop();}
        else continue;
        

        }
       return count;

    }
};
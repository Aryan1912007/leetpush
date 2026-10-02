class Solution {
public:
    bool isValid(string s) {
        stack<char> s1;
        for(int i: s){
            if(i=='('||i=='['||i=='{')
                s1.push(i);
            else {
                if((int)s1.size()==0)
                    return false;
                if(i==')'&&s1.top()=='('||
                    i=='}'&&s1.top()=='{'||
                    i==']'&&s1.top()=='[')
                    s1.pop();
                else 
                    return false;
            }
        }
        return (int)s1.size()==0;
        
    }
};
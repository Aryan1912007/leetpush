class Solution {
public:
    int minAddToMakeValid(string s) {
        int h=0;
        int x=0;
        for(int i:s){
            if(i=='('){
                if(h<0){
                    x+=abs(h);
                    h=1;

                }
                else
                    h++;
            }
                
            else
                h--;

        }
        return x+abs(h);
        
    }
};
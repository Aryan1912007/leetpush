class Solution {
public:
    int countDigits(int num) {
        int x=num;
        int count=0;
        while(x>0){
            int div=x%10;
            if(num%div==0){
                count++;}
            x=x/10;

        }
        return count;
        
    }
};
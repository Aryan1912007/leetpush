class Solution {
public:
    bool isPowerOfFour(int n) {
                int sum=0;
        while(n>0){
            int y=n%4;
            sum=sum+y;
            n=n/4;
        }
        if(sum==1)
        return true;
        return false;
        
    }
};
 
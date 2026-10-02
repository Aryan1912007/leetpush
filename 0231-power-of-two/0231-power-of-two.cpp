class Solution {
public:
    bool isPowerOfTwo(int n) {
        int sum=0;
        while(n>0){
            int y=n%2;
            sum=sum+y;
            n=n/2;
        }
        if(sum==1)
        return true;
        return false;
        
    }
};
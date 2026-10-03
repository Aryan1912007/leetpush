class Solution {
public:
    int mirrorDistance(int n) {
        int x=n;
        int reverse=0;
        while(x>0){
            int y=x%10;
            reverse=reverse*10+y;
            x/=10;
        }
        return abs(n-reverse);
        
    }
};
class Solution {
public:
    int mySqrt(int x) {
        long long i=1;
        if(x<1)
            return 0;
        else if(x<2)
            return 1;
        else{
        while(i<=(x/2)+1){
            if(i*i>x){
                return i-1;
            }
            i++;
        }}
        return 0;
    }
};
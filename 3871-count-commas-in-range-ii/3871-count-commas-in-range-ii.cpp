class Solution {
public:
    long long countCommas(long long n) {
       
        if(n<(1000))
            return 0;
        else if(n<(1000000)){
            return (n-999);
        }
        else if(n<(1000000000)){
            return (999000+(n-999999)*2);

        }
        else if(n<(1000000000000)){
            return (1998999000+(n-999999999)*3);

        }
        else if(n<1000000000000000)
            return (2998998999000+(n-999999999999)*4);
        else
            return (2998998999000+(n-999999999999)*4+1);

        
        return 0;
        
    }
};
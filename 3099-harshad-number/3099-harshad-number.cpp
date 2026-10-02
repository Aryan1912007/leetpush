class Solution {
public:
   int sumDigits(int n) {
    if (n == 0)
        return 0;
    return n%10 + sumDigits(n/10);
}
    
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int y=sumDigits(x);
        if(x%y==0)
            return y;
        return -1;

        
    }
};
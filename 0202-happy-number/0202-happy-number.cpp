class Solution {
public:
    int square(int n) {
        int total = 0;
        while (n > 0) {
            int digits = n % 10;
            total += digits * digits;
            n /= 10;
        }
        return total;
    }

    bool isHappy(int n) {
        int x = n;
        int i = 0;
    
        while (x != 1 && i < 20) {
            x = square(x);
            i++;
        }
        
        return x == 1;
    }
};
class Solution {
public:
    int countEven(int num) {
        int k = num;
        int sum = 0;
        while(k > 0){
            sum += k%10;
            k /= 10;
        }
        if(sum%2 != 0){
            return (num-1)/2;
        }
        return num/2;
    }
};
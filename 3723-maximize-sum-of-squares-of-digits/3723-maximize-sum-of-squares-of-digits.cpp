class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum>(num*9))
            return "";

            int tens=sum/9;
            int ones=sum%9;
            int zero=num-tens;
            string ans=string(tens,'9');

        if (ones>0){
            ans+=to_string(ones);
            zero--;
        }
        ans+=string(zero, '0');
        return ans;

        
    }
};
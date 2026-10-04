
class Solution {
public:
    bool checkValidString(string s) {
        int c1 = 0, c2 = 0;

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == '(') {
                c1++;
                c2++;
            }
            else if (s[i] == ')') {
                c1--;
                c2--;
            }
            else {
                c1--;  
                c2++; 
            }

            if (c2 < 0)
                return false;

            if (c1 < 0)
                c1 = 0;
        }

        return c1 == 0;
    }
};
class Solution {
public:
  
int minInsertions(string s) {
    int need = 0, op = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            if (need % 2 == 1) {
                op++;
                need--;
            }
            need += 2;
        }
        else {
            need--;
            if (need < 0) {
                op++;
                need = 1;
            }
        }
    }

    return op + need;
}

};
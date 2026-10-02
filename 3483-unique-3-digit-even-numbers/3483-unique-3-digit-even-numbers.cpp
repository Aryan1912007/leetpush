class Solution {
public:
    int totalNumbers(vector<int>& digits) {
int count[10] = {0};
        for (int d : digits) {
            count[d]++;
        }
        
        int total = 0;
        
        for (int i = 100; i < 1000; i += 2) {
            int d1 = i / 100;
            int d2 = (i / 10) % 10;
            int d3 = i % 10;
            
            count[d1]--;
            count[d2]--;
            count[d3]--;
            
            if (count[d1] >= 0 && count[d2] >= 0 && count[d3] >= 0) {
                total++;
            }
            
            count[d1]++;
            count[d2]++;
            count[d3]++;
        }
        
        return total;
    }
};
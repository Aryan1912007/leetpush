class Solution {
public:
    int hammingWeight(int n) {
        int x=0;
        for(int i=31;i>=0;i--){
            x+=((n>>i)&1);

        }
        return x;
    }
};
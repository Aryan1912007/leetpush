class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        int i=0,j=a.size()-1;
        while(i<j){
            if(a[i]+a[j]==target){
                a.clear();
                a.push_back(i+1);
                a.push_back(j+1);
                    return a;}
            else if(a[i]+a[j]>target)
                j--;
            else
                i++;
            

        }
        return a;
                
    }
};
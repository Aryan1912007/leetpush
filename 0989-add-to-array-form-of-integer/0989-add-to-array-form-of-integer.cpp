class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
    vector<int > nums;
    reverse(num.begin(),num.end());
    int i=0;
    while(i<num.size()||k>0){
        if(i<num.size())
        k=k+num[i];
        nums.push_back(k%10);
        k=k/10;
        i++;
    }
    reverse(nums.begin(),nums.end());
        return nums;
        

    }
};
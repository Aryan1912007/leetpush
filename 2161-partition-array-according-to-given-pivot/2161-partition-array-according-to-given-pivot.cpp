class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
       vector<int> v1;
       vector<int> v2;
       for(int i: nums){
            if(i<pivot)
                v1.push_back(i);
            else if(i>pivot)
                v2.push_back(i);
            else
                continue;

       }
       int n1=v1.size(),n2=v2.size();

       for(int i=0;i<nums.size()-(n1+n2);i++)
        {
            v1.push_back(pivot);
        }
       for(int i=0;i<v2.size();i++){
            v1.push_back(v2[i]);
       }
       return v1;
    }};
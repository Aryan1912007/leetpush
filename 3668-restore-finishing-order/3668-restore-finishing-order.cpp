class Solution {
public:
    vector< int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> v;
        for(int i=0;i<order.size();i++){
            int l=0,r=friends.size()-1;
       while (l <= r) {
    int mid = l + (r - l) / 2;
    if (friends[mid] == order[i]) {
        v.push_back(order[i]);
        break;
    }
    else if (friends[mid] > order[i]) {
        r = mid - 1; 
    }
    else {
        l = mid + 1;
}}
            if(v.size()==friends.size())
            break;
        }
        return v;
        }
       
};
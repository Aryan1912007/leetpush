class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
     map<int, int> s;
        for (int i : nums) {
            s[i]++;
        }
        nums.clear();
        vector<pair<int, int>> f;
        for (auto [key, value] : s) {
            f.push_back({value, key});
        }
        sort(f.begin(), f.end());
        for (int i = f.size() - 1; i >= (int)f.size() - k; i--) {
            nums.push_back(f[i].second);
        }

        return nums;
    }
};
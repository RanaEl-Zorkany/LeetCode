class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for (int x : nums)
        if (!s.insert(x).second) return true;
        return false;
    }
};
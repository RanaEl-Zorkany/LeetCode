class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> a(nums1.begin(), nums1.end()), res;
        for (int x : nums2) if (a.count(x)) res.insert(x);
        return vector<int>(res.begin(), res.end());
    }
};
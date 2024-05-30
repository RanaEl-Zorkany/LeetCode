class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int upper = upper_bound(nums.begin(), nums.end(), 0) - nums.begin();
        int lower = lower_bound(nums.begin(), nums.end(), 0) - nums.begin();
        int size = nums.size();
        return max(size - upper, lower);
    }
};
class Solution {
public:
    int findMaxK(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int start = 0, end = nums.size() - 1;
    while (nums[start] < 0 && nums[end] > 0)
    {
        if (abs(nums[start]) == nums[end]) return nums[end];
        else if (abs(nums[start]) < nums[end]) end--;
        else start++;
    }
    return -1;
}
};
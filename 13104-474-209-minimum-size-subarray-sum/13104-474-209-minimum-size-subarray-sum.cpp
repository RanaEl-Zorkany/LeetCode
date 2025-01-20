class Solution {
    vector<int> prefix;
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // SLIDING WINDOW O(n)
        int len = nums.size(), minLen = INT_MAX, start = 0, sum = 0;
        if(nums[0] >= target) return 1;

        for(int end = 0; end < len; end++){
            sum += nums[end];
            while (sum >= target) {
                minLen = min(minLen, end - start + 1);
                sum -= nums[start];
                start++;
            }
        }
        return (minLen == INT_MAX) ? 0 : minLen;
    }
};
class Solution {
    vector<int> prefix;
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // PREFIX SUM O(nlog(n))
        int len = nums.size(), minLen = INT_MAX;
        if(nums[0] >= target) return 1;
        prefix.resize(len + 1);
        for(int i = 0; i < len; i++){
            prefix[i + 1] = prefix[i] + nums[i];
        } 
        if(prefix[len] < target) return 0;

        for(int i = 0; i <= len; i++){
            int targetSum = target + prefix[i];
            int pos = upper_bound(targetSum);
            if (pos <= len) {
                minLen = min(minLen, pos - i);
            }
        }
        return minLen == INT_MAX ? 0 : minLen;
    }
    int upper_bound(int target){
        int start = 0, end = prefix.size(), mid;
        while(start < end){
            mid = start + (end - start) / 2;
            if (prefix[mid] == target) 
                return mid;
            else if(prefix[mid] > target)
                end = mid;
            else start = mid + 1;
        }
        return start;
    } 
};

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int n = nums.size(), complement;
        for (int i = 0; i < n; i++){
            mp[nums[i]] = i;
        }
        for (int i = 0; i < n; i++){
            complement = target - nums[i];
            if(mp.contains(complement) && mp[complement] != i){
                return {i, mp[complement]};
            }
        }
        return {};
    }
};
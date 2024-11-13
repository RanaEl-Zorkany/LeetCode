class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;
        int n = nums.size();
        for (int i = 0; i < n; i++){
            mp[nums[i]] = i;
        }
        for (int i = 0; i < n; i++){
            int complement = target - nums[i];
            if(mp.contains(complement) && mp[complement] != i){
                return {i, mp[complement]};
            }
        }
        return {};
    }
};
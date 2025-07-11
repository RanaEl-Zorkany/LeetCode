class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i=0; i<nums.size() - 1; i++){
            if(i>0 && nums[i] == nums[i-1]) continue; // skip duplicates
            int left = i + 1, right = nums.size() - 1;
            while(left < right){
                int sum = nums[i] + nums[left] + nums[right];
                if(sum == 0){
                    ans.push_back({nums[i], nums[left], nums[right]});
                    while(left < right && nums[left] == nums[left + 1]) left++; // skip duplicates
                    while(left < right && nums[right] == nums[right - 1]) right--; // skip duplicates
                    left++; right--;
                }
                else if (sum > 0) right--;
                else left++;
            }
        }
        return ans;
    }
};
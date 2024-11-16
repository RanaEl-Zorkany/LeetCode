class Solution {
public:
    bool isSorted(vector<int>& nums, int begin, int end){
        for(int i = begin + 1; i <= end; i++)
            if(nums[i] <= nums[i - 1] || nums[i] > nums[i - 1] + 1) return false;
        return true;
    }
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int> res;
        int len = nums.size();
        int i = 0;
        for(; i <= len - k; i++){
            bool is_sorted = isSorted(nums, i, i + k - 1);
            if(is_sorted) res.push_back(nums[i + k - 1]);
            else res.push_back(-1);
        }
        return res;
    }
};
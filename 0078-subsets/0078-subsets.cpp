class Solution {
public:
    vector<int> taken;
    vector<vector<int>> result;
    vector<vector<int>> subsets(vector<int>& nums){
        int index = 0;
        backtracking(nums, index);
        return result;
    }
    void backtracking(vector<int>& nums, int index){
        if(index == nums.size()){
            result.push_back(taken);
            return;
        }
        backtracking(nums, index + 1);
        taken.push_back(nums[index]);
        backtracking(nums, index + 1);
        taken.pop_back();
    }
    
    
    // vector<vector<int>> subsets(vector<int>& nums) {
    //     int n = nums.size();
    //     vector<vector<int>> subsets;
    //     // generating subsets
    //     for (int msk = 0; msk < (1 << n); msk++){
    //         vector<int> subset;
    //         for (int i = 0; i < n; i++)
    //         {
    //             if(msk & (1 << i))
    //                 subset.push_back(nums[i]);
    //         }
    //         subsets.push_back(subset);
    //     }
    //     return subsets;
    // }
};
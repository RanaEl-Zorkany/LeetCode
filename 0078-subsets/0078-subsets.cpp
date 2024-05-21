class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int result = 0;
        vector<vector<int>> subsets;
        for (int msk = 0; msk < (1 << n); msk++){
            vector<int> subset;
            for (int i = 0; i < n; i++)
            {
                if(msk & (1 << i))
                    subset.push_back(nums[i]);
            }
            subsets.push_back(subset);
        }
        return subsets;
    }
};
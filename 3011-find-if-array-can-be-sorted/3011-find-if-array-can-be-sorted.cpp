class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        int SIZE = nums.size();
        for (int i = 0; i < SIZE - 1; i++)
        {
            for (int j = i + 1; j < SIZE; j++)
            {
                if (nums[i] > nums[j]){
                    if(__builtin_popcount(nums[i]) == __builtin_popcount(nums[j]))
                        swap(nums[i], nums[j]);
                    else return false;
                }
                else continue;
            }
        }
        return true;
    }
};
class Solution {
public:
    long long ans;
    vector<int> taken;
    int subsetXORSum(vector<int>& nums) {
        int index = 0;
        backtracking(nums, index);
        return ans;
    }
    void backtracking(vector<int>& nums, int index){
        if(index == nums.size()){
            int sum = 0;
            for (int i = 0; i < taken.size(); i++)
                sum ^= taken[i];
            ans += sum;
            return;
        }

        backtracking(nums, index + 1);
        taken.push_back(nums[index]);
        backtracking(nums, index + 1);
        taken.pop_back();
    }
};
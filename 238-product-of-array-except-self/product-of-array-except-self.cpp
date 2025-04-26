class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // productExceptSelf
        int zeroCount = 0, product = 1, zeroIndex = -1;
        vector<int> result(nums.size(), 0);
        for(int i=0; i<nums.size(); ++i){
            if(nums[i] == 0) { zeroCount++; zeroIndex = i; }
            else product *= nums[i];
        }
        if(zeroCount > 1) return result;
        if(zeroCount == 1){
            result[zeroIndex] = product;
            return result;
        }
        for(int i=0; i<nums.size(); ++i){
            result[i] = product/nums[i];
        }
        return result;
    }
};
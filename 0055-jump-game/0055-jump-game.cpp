class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i = 0, len = nums.size(), maxx = 0;
        if(len == 1) return true;
        for(; i<len; i++){
            if(i > maxx) return false;
            maxx = max(maxx, i+nums[i]);
            if(maxx >= len - 1) return true;
        }
        return false;
    }
};
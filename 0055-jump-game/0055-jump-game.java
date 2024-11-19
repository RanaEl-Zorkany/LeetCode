class Solution {
    public boolean canJump(int[] nums) {
        int i = 0, len = nums.length, max = 0;
        if(len == 1) return true;
        for(; i<len; i++){
            if(i > max) return false;
            max = Math.max(max, i+nums[i]);
            if(max >= len - 1) return true;
        }
        return false;
    }
}
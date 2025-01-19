public class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        // ArrayList<Integer> prefix = new ArrayList<>();
        int len = nums.length;
        int start = 0, sum = 0, minLen = Integer.MAX_VALUE;
        
        if(nums[0] >= target) return 1;

        
        for(int end = 0; end < len; end++){
            sum += nums[end];
            while (sum >= target) {
                minLen = Math.min(minLen, end - start + 1);
                sum -= nums[start];
                start++;
            }
        }
        return (minLen == Integer.MAX_VALUE) ? 0 : minLen;
    }
};
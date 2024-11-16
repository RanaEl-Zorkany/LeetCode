class Solution {
    public boolean isSorted(int[] nums, int begin, int end){
        for(int i = begin + 1; i <= end; i++)
            if(nums[i] <= nums[i - 1] || nums[i] > nums[i - 1] + 1) return false;
        return true;
    }
    public int[] resultsArray(int[] nums, int k) {
        int len = nums.length;
        int[] res = new int[len - k + 1];
        int i = 0;
        for(; i <= len - k; i++){
            boolean is_sorted = isSorted(nums, i, i + k - 1);
            if(is_sorted) res[i] = nums[i + k - 1];
            else res[i] = -1;
        }
        return res;
    }
    
    
    
}
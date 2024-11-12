class Solution {
    public List<String> summaryRanges(int[] nums) {
        int range;
        List<String> summRanges = new ArrayList<>();
        int len = nums.length;
        if (len == 0) return summRanges;
        else if (len == 0){
            summRanges.add(Integer.toString(nums[0]));
            return summRanges;
        }
        range = nums[0];
        
        for(int i = 1;i < len; i++){
            if (nums[i-1] + 1 != nums[i]) {
                if(nums[i - 1] != range)
                    summRanges.add(Integer.toString(range) + "->" + Integer.toString(nums[i - 1]));
                else
                    summRanges.add(Integer.toString(range));
                range = nums[i];
            }
        }
        
        if(nums[len - 1] == range)
            summRanges.add(Integer.toString(range));
        else 
            summRanges.add(Integer.toString(range) + "->" + Integer.toString(nums[len - 1]));
        return summRanges;
    }
}
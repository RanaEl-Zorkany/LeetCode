class Solution {
    public int removeDuplicates(int[] nums) {
        int n, zero = 0, cnt = 0, start;
        n = nums.length; 
        for(int i = 0, j = 0; i < n; i++){
            start = nums[j];
            if(start == nums[i]){
                cnt++;
                if(cnt > 2){
                    nums[i] = 10005;
                    zero++;
                } else continue;
            }
            else{
                j = i;
                cnt = 0;
                i--;
            }
        }
        Arrays.sort(nums);
        return n - zero;
    }
}
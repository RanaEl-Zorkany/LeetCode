class Solution {
    public boolean canSortArray(int[] nums) {
        int SIZE = nums.length;
        for (int i = 0; i < SIZE - 1; i++)
        {
            for (int j = i + 1; j < SIZE; j++)
            {
                if (nums[i] > nums[j]){
                    // bitCount returns number of 1's in binary representation
                    if(Integer.bitCount(nums[i]) == Integer.bitCount(nums[j])){
                        int temp = nums[i];
                        nums[i] = nums[j];
                        nums[j] = temp;
                    }
                    else return false;
                }
                else continue;
            }
        }
        return true;
    }
}
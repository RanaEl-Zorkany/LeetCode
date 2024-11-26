class Solution {
    public int singleNumber(int[] nums) {
        Map<Integer,Integer> mp = new HashMap<>();
        for (int i = 0; i < nums.length; i++)
        {
            if (mp.containsKey(nums[i])) {
                mp.put(nums[i], mp.get(nums[i]) + 1);
            } else {
                mp.put(nums[i], 1); 
            }
        }
        for (Map.Entry<Integer, Integer> it : mp.entrySet()) {
            if(it.getValue() == 1)
                return it.getKey();
        }
        return -1;
    }
}
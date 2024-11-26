class Solution {
    public int singleNumber(int[] nums) {
        Map<Integer,Integer> mp = new HashMap<>();
        for (int n : nums)
        {
            if (mp.containsKey(n)) {
                mp.put(n, mp.get(n) + 1);
            } else {
                mp.put(n, 1); 
            }
        }

        for (Map.Entry<Integer, Integer> it : mp.entrySet())
        {
            if(it.getValue() == 1)
                return it.getKey();
        }
        return -1;
    }
}
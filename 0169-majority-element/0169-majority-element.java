class Solution {
    public int majorityElement(int[] nums) {
        Map<Integer, Integer> mp = new HashMap<>();
        int max = 0, num = 0;
        int majority = (nums.length / 2);
        for(int n : nums){
            if (mp.containsKey(n)) {
                mp.put(n, mp.get(n) + 1); 
            } else {
                mp.put(n, 1); 
            }
        }
        for (Map.Entry<Integer, Integer> it : mp.entrySet())
        {
            if(it.getValue() >= majority)
            {
                if (it.getValue() > max){
                    max = it.getValue();
                    num = it.getKey();
                }

            }
        }
        return num;
    }
}
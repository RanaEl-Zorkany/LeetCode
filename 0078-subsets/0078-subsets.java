class Solution {
    List<List<Integer>> result;
    public List<List<Integer>> subsets(int[] nums){
        int index = 0;
        result = new ArrayList<>();
        List<Integer> taken = new ArrayList<>(); 
        backtracking(nums, index, taken);
        return result;
    }
    public void backtracking(int[] nums, int index, List<Integer> taken){
        if(index == nums.length){
            result.add(new ArrayList<>(taken));
            return;
        }
        backtracking(nums, index + 1, taken);
        taken.add(nums[index]);
        backtracking(nums, index + 1, taken);
        taken.remove(taken.size() - 1);
    }
}
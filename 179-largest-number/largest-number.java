class Solution {
    public String largestNumber(int[] nums) {
        List<String> str = new ArrayList<>();
        for(int num : nums){
            str.add(String.valueOf(num));
        }
        Collections.sort(str, (a, b) -> (b + a).compareTo(a + b));
        if(str.get(0).equals("0")) return "0";
        StringBuilder answer = new StringBuilder();
        for(String num : str){
            answer.append(num);
        }
        return answer.toString();
    }
}
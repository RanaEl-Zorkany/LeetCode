class Solution {
    public int romanToInt(String s) {
        Map<Character, Integer> mp = new HashMap<>();
        mp.put('I', 1); mp.put('V', 5); mp.put('X', 10); mp.put('L', 50); 
        mp.put('C', 100); mp.put('D', 500); mp.put('M', 1000);
        
        int len = s.length() - 1;
        int sum = 0;
        for(int i = 0; i <= len; i++){
            char letter = s.charAt(i);
            if(i != len){
                char nextLetter = s.charAt(i+1);
                if(mp.get(letter) >= mp.get(nextLetter))
                    sum += mp.get(letter);
                else sum -= mp.get(letter);  
            } else sum += mp.get(letter);
        }
        return sum;
    }
}
class RandomizedSet {
    Set<Integer> set;
    ArrayList<Integer> array;
    public RandomizedSet() {
        set = new HashSet<>();
        array = new ArrayList<>();
    }
    
    public boolean insert(int val) {
        if(!set.contains(val)){
            set.add(val);
            array.add(val);
            return true;
        }
        return false;
    }
    
    public boolean remove(int val) {
        if(set.contains(val)){
            set.remove(val);
            int index = array.indexOf(val);
            array.remove(index);
            return true;
        }
        return false;
    }
    
    public int getRandom() {
        int max = array.size() - 1, min = 0;
        int randomNum = (int)(Math.random() * (max + 1));
        int element = array.get(randomNum);
        return element;
    }
}

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet obj = new RandomizedSet();
 * boolean param_1 = obj.insert(val);
 * boolean param_2 = obj.remove(val);
 * int param_3 = obj.getRandom();
 */
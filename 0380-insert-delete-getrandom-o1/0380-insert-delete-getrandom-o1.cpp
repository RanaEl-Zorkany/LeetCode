class RandomizedSet {
private:
    set<int> set;
    vector<int> vec;
public:
    RandomizedSet() {}
    bool insert(int val) {
        if(set.count(val)){
            return false;
        }
        set.insert(val);
        vec.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        if(set.count(val)){
            set.erase(val);
            auto it = find(vec.begin(), vec.end(), val);
            int index = it - vec.begin();
            vec.erase(vec.begin() + index);
            return true;
        }
        return false;
    }
    
    int getRandom() {
        int max = vec.size() - 1;
        int randomNum = rand() % (max + 1);
        return vec[randomNum];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet obj = new RandomizedSet();
 * boolean param_1 = obj.insert(val);
 * boolean param_2 = obj.remove(val);
 * int param_3 = obj.getRandom();
 */
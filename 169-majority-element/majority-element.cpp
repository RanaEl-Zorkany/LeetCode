class Solution {
public:
    int majorityElement(vector<int>& nums) {
    map<int, int> mp;
    int majority = (nums.size() / 2);
    for(auto n : nums){mp[n]++;}
    for (auto [first,second]:mp){
        if(second > majority) return first;
    }
    return 0;
}
};
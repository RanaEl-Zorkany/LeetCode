class Solution {
public:
    vector<int> taken;
    vector<int> v;
    vector<vector<int>> ans;
    set<vector<int>> result;
    vector<vector<int>> subsetsWithDup(vector<int>& nums){
        sort(nums.begin(), nums.end());
        for(auto n:nums) v.push_back(n);
        backtracking(0);
        for(auto r:result) ans.push_back(r);
        return ans;
    }
    void backtracking(int index){
        if(index == v.size()){
            result.insert(taken);
            return;
        }
        backtracking(index + 1);
        taken.push_back(v[index]);
        backtracking(index + 1);
        taken.pop_back();
    }
};
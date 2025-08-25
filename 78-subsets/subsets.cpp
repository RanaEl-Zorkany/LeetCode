class Solution {
public:
    vector<vector<int>> ans;
    vector<int> taken;
    vector<int> v;
    vector<vector<int>> subsets(vector<int>& nums) {
        for(auto n:nums) v.push_back(n);
        backtracking(0);
        return ans;
    }
    void backtracking(int idx){
        if(idx == v.size()){
            ans.push_back(taken);
            return;
        }
        backtracking(idx + 1);
        taken.push_back(v[idx]);
        backtracking(idx + 1);
        taken.pop_back();
    }
};
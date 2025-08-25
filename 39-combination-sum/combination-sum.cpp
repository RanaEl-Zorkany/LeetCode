class Solution {
public:
    vector<vector<int>> ans;
    vector<int> v;
    vector<int> taken;
    int t;
    void backtracking(int idx, int sum){
        if(sum == t){
            ans.push_back(taken);
            return;
        }
        if (idx >= v.size() || sum > t) return;
        
        backtracking(idx + 1, sum);
        taken.push_back(v[idx]);
        backtracking(idx, sum + v[idx]);
        taken.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        t = target;
        for(auto n:candidates) v.push_back(n);
        backtracking(0, 0);
        return ans;
    }
};
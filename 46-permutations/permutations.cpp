class Solution {
public:
    vector<vector<int>> ans;
    vector<int> v;
    set<int> visited;
    vector<int> result;
    void backtracking(int cnt){
        if(cnt == v.size()){
            ans.push_back(vector<int>(result.begin(), result.end()));
            return;
        }
        for(int i=0; i<v.size(); ++i){
            if(!visited.count(v[i])){
                result.push_back(v[i]);
                visited.insert(v[i]);
                backtracking(cnt + 1);
                result.pop_back();
                visited.erase(v[i]);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        for(auto n:nums) v.push_back(n);
        backtracking(0);
        return ans;
    }
};
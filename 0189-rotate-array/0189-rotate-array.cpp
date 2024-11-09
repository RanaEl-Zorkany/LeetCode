class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        if(len > 1){
            vector<pair<int, int>> vp;
            for(int i = 0; i < len; i++){
                vp.push_back(make_pair(nums[i], i+k));
            }
            for(auto i: vp){
                nums[i.second%len] = i.first;
            }
        }
    }
};
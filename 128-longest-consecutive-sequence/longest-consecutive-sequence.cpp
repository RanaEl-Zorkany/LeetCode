class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> sett(nums.begin(), nums.end());
        int ans=0;
        for(auto element:sett){
            if(!sett.count(element-1)){
                int res = 1;
                while(sett.count(++element)) res++;
                ans = max(ans,res);
            }
        } 
        return ans;
    }
};
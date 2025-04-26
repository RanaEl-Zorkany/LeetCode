class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int k = unordered_set<int>(nums.begin(),nums.end()).size();
        unordered_set<int> sub;
        int ans = 0;
        for(int i=0; i<nums.size(); i++){
            int j=i; 
            while(j<nums.size()){
                if(sub.size() > k) break;
                sub.insert(nums[j]);
                if(sub.size() == k) ans++;
                j++;
            }
            if(sub.size() < k) return ans;
            sub.clear();
        }
        return ans;
    }
};
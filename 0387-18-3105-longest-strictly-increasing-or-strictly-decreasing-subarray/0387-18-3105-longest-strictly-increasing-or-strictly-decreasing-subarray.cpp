class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int mx=0, len = nums.size(),inc=1, dec=1;
        if(len == 1) return 1;

        for(int i=1; i<len; i++){
            if(nums[i] > nums[i-1]) inc++, dec=1;
            else if(nums[i] < nums[i-1]) dec++, inc=1;
            else inc=dec=1;
            mx = max({mx,inc,dec});
        }
        return mx;
    }
};
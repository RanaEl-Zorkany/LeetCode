class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int range;
        vector<string> summRanges;
        int len = nums.size();
        if (len == 0) return summRanges;
        else if (len == 0){
            summRanges.push_back(to_string(nums[0]));
            return summRanges;
        }
        range = nums[0];
        
        for(int i = 1;i < len; i++){
            if (nums[i-1] + 1 != nums[i]) {
                if(nums[i - 1] != range)
                    summRanges.push_back(to_string(range) + "->" + to_string(nums[i - 1]));
                else
                    summRanges.push_back(to_string(range));
                range = nums[i];
            }
        }
        
        if(nums[len - 1] == range)
            summRanges.push_back(to_string(range));
        else 
            summRanges.push_back(to_string(range) + "->" + to_string(nums[len - 1]));
        return summRanges;
    }
};
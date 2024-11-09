class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n, zero = 0, cnt = 0, start;
        n = nums.size(); 
        for(int i = 0, j = 0; i < n; i++){
            start = nums[j];
            if(start == nums[i]){
                cnt++;
                if(cnt > 2){
                    nums[i] = 10005;
                    zero++;
                } else continue;
            }
            else{
                j = i;
                cnt = 0;
                i--;
            }
        }
        sort(nums.begin(), nums.end());
        for(int i:nums){cout << i << " ";}
        return n - zero;
    }
};
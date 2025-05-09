class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0, end = nums.size() - 1, mid, minn = 6000;
        while(start <= end){
            mid = start + (end - start) / 2;
            if(nums[mid] >= nums[start]){
                if(nums[end] >= nums[mid]) end = mid - 1;
                else start = mid + 1;
            } 
            else end = mid - 1;
            minn = min(minn, nums[mid]);
        }
        return minn;
    }
};
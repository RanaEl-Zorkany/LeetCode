class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int i = 0, j = nums.size() - 1, mid = 0, cnt = 0;
        while (i<j)
        {
            mid = i + (j - i) / 2;
            if (nums[mid] < nums[mid + 1] )
                i = mid + 1;
            else
                j = mid;
        }
        return i;
    }
};
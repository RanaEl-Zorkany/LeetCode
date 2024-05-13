class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
    int i = k, j = k, mx = 0, result, minElement = nums[k];
    int n = nums.size();
    if (n == 1) return nums[0];
    while (i > 0 || j < n-1) {
        if (i == 0) j++;
        else if (j == n - 1) i--;
        else if (nums[i - 1] < nums[j + 1]) j++;
        else i--;
        minElement = min({ minElement, nums[i], nums[j] });
        result = minElement * (j - i + 1);
        mx = max(mx, result);
    }
    
    return mx;
    }
};
class Solution {
public:
    int maxArea(vector<int>& height) {
    int start = 0, end = height.size() - 1, maxx = 0;
    // searching
    while (start<=end)
    {
        int mini = min(height[start], height[end]);
        maxx = max(maxx, mini * (end - start));
        if (height[start] < height[end])
            start++;
        else
            end--;
    }
    return maxx;
}
};
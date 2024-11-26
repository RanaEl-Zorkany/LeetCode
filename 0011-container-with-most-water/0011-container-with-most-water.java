class Solution {
    public int maxArea(int[] height) {
        int start = 0, end = height.length - 1, maxx = 0;
        while (start<=end)
        {
            int mini = Math.min(height[start], height[end]);
            maxx = Math.max(maxx, mini * (end - start));
            if (height[start] < height[end])
                start++;
            else
                end--;
        }
        return maxx;
    }
}
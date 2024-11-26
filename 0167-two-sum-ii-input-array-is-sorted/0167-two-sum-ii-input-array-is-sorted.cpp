class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        int start = 0, end = numbers.size() - 1;
        while (start<=end)
        {
            if (numbers[start] + numbers[end] == target) {
                result.push_back(++start);
                result.push_back(++end);
                return result;
            }
            else if (numbers[start] + numbers[end] > target) end--;
            else start++;
        }
        return result;
    }
};
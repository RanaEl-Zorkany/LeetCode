class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        letters.erase(unique(letters.begin(), letters.end()), letters.end());
        int start = 0, end = letters.size() - 1, mid;
        bool flag = false;
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (letters[mid] == target)
            {
                mid++;
                flag = true;
                break;
            }
            else if (letters[mid] > target)
                end = mid - 1;
            else
                start = mid + 1;
        }
        if (flag && mid != letters.size())
            return letters[mid];
        else if (flag && mid == letters.size())
            return letters[0];
        else if (!flag && mid == 0) {

            if (letters[mid] > target)
                return letters[mid];
            else if (letters[mid] < target)
                return letters[mid + 1];
        }
        else if (!flag && mid == letters.size() - 1) {

            if (letters[mid] > target)
                return letters[mid];
            else if (letters[mid] < target)
                return letters[0];
        }
        return letters[mid] > target ? letters[mid]:letters[mid + 1];
    }
};
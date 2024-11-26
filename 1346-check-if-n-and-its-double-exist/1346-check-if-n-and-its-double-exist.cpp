class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size(); i++)
        {
            int num = arr[i] * 2;
            if (num != 0) {
                int start = 0, end = arr.size() - 1, mid;
                while (start <= end)
                {
                    mid = start + (end - start) / 2;
                    if (num == arr[mid]) {
                        return true;
                    }
                    else if (num < arr[mid]) {
                        end = mid - 1;
                    }
                    else
                        start = mid + 1;
                }
            }
            else if (num == 0) {
                int start = 0, end = arr.size() - 1, mid;
                while (start <= end)
                {
                    mid = start + (end - start) / 2;
                    if (arr[mid] == 0 && i != mid) {
                        return true;
                    }
                    else if (0 < arr[mid]) {
                        end = mid - 1;
                    }
                    else
                        start = mid + 1;
                }
            }
        }
        return false;
    }
};
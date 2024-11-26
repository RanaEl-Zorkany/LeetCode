class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        long long start1 = 0, start2 = 0;
        vector<int> merged;
        while (start1 < nums1.size() && start2 < nums2.size()) {
            if (nums1[start1] <= nums2[start2]) {
                merged.push_back(nums1[start1]);
                start1++;
            }
            else {
                merged.push_back(nums2[start2]);
                start2++;
            }
        }

        while (start1 < nums1.size()) {
            merged.push_back(nums1[start1]);
            start1++;
        }

        while (start2 < nums2.size()) {
            merged.push_back(nums2[start2]);
            start2++;
        }

        int size = merged.size();

        if (size % 2 == 0) 
            return (merged[size / 2 - 1] + merged[size / 2]) / 2.0;
        else return merged[size / 2];
    }
};
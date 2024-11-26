class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int start1 = 0, start2 = 0;
        ArrayList<Integer> merged = new ArrayList<>();
        
        while (start1 < nums1.length && start2 < nums2.length) {
            if (nums1[start1] <= nums2[start2]) {
                merged.add(nums1[start1]);
                start1++;
            } else {
                merged.add(nums2[start2]);
                start2++;
            }
        }

        while (start1 < nums1.length) {
            merged.add(nums1[start1]);
            start1++;
        }

        while (start2 < nums2.length) {
            merged.add(nums2[start2]);
            start2++;
        }

        int size = merged.size(); 

        if (size % 2 == 0)
            return (merged.get(size / 2 - 1) + merged.get(size / 2)) / 2.0;
        else return merged.get(size / 2);
    }
}

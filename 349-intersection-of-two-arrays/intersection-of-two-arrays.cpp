class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> st(nums1.begin(), nums1.end());
        vector<int> ans;
        sort(nums2.begin(), nums2.end());
        if(st.count(nums2[0])) ans.push_back(nums2[0]);
        for(int i=1; i<nums2.size(); ++i){
            if(nums2[i] != nums2[i-1] && st.count(nums2[i])) ans.push_back(nums2[i]);
            else continue;
        }
        return ans;
    }
};
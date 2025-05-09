class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<pair<int, pair<int, int>>> maxHeap;
        for(auto x:nums1){
            for(auto y:nums2){
                if(maxHeap.size()<k)
                    maxHeap.push({x+y,{x,y}});
                else if(x+y < maxHeap.top().first) {
                    maxHeap.pop();
                    maxHeap.push({x+y,{x,y}});
                }
                else break;
            }
        }
        vector<vector<int>> ans;
        while(!maxHeap.empty()){
            auto top = maxHeap.top().second;
            maxHeap.pop();
            ans.push_back({top.first, top.second});
        }
        return ans;
    }
};
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, int>> maxHeap;
        int idx = 0;
        for(auto p:points){
            int x = p[0], y = p[1];
            int dis = (x*x) + (y*y);
            maxHeap.push({dis, idx});
            if(maxHeap.size() > k) maxHeap.pop();
            idx++;
        }
        vector<vector<int>> ans;
        while(!maxHeap.empty()){
            int pos = maxHeap.top().second;
            ans.push_back(points[pos]);
            maxHeap.pop();
        }
        return ans;
    }
};
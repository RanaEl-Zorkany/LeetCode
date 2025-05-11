class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        priority_queue<pair<int, string>, vector<pair<int, string>>, greater<pair<int, string>>> minHeap;
        for(auto n : nums){
            minHeap.push({n.size(), n});
            if(minHeap.size() > k) minHeap.pop();
        }
        return minHeap.top().second;
    }
};
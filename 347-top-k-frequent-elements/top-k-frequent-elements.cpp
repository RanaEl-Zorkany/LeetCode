class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int i=0; i<nums.size(); i++)
            freq[nums[i]]++;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> minHeap;
        for (auto& [num, count] : freq) {
            minHeap.push({count, num});
            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }
        vector<int> res;
        while (!minHeap.empty()) {
            res.push_back(minHeap.top().second);
            minHeap.pop();
        }
        // reversing the result
        reverse(res.begin(), res.end());
        return res;
    }
};
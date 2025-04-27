class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>> maxHeap;
        for(int num:nums){
            maxHeap.push(num);
        }
        int result;
        while(k--){
            cout << maxHeap.top() << " ";
            result = maxHeap.top();
            maxHeap.pop();
        }
        return result;
    }
};
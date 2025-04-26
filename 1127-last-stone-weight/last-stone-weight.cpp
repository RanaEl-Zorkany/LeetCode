class Solution {
private:
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int, vector<int>> maxHeap;
        for(int stone:stones)
            maxHeap.push(stone);
        while(maxHeap.size()>1){
            int x = maxHeap.top(); maxHeap.pop();
            int y = maxHeap.top(); maxHeap.pop();
            if(x-y != 0) maxHeap.push(x-y);
        }
        return maxHeap.size() == 0 ? 0:maxHeap.top();
    }
};
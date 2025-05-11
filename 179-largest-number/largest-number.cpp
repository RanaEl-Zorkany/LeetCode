class Solution {
public:
    string largestNumber(vector<int>& nums) {
        auto comp = [](const string &a, const string &b){
        return a + b < b + a;
        };
        priority_queue<string, vector<string>, decltype(comp)> maxHeap(comp);
        string answer = "";
        for(auto num : nums){
            maxHeap.push(to_string(num));
        }
        while(!maxHeap.empty()){
            answer += maxHeap.top();
            maxHeap.pop();
        }
        return answer[0] == '0' ? "0" : answer;
    }
};
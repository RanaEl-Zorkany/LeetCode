class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string answer = "";
        auto comp = [](const string &a, const string &b){
        return a + b < b + a;
        };
        priority_queue<string, vector<string>, decltype(comp)> maxHeap(comp);
        for(auto num : nums){
            maxHeap.push(to_string(num));
        }
        if(maxHeap.top() == "0") return "0";
        while(!maxHeap.empty()){
            answer += maxHeap.top();
            maxHeap.pop();
        }
        return answer;      
    }
};
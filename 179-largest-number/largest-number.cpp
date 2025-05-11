class Solution {
public:
    string largestNumber(vector<int>& nums) {
        /* WITH HEAP */
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

        /* WITHOUT HEAP */
        // vector<string> str;
        // for(auto num : nums){
        //     str.push_back(to_string(num));
        // }
        // sort(str.begin(), str.end(), [](const string &a, const string &b){
        //     return a + b > b + a;
        // });
        // if(str[0] == "0") return "0";
        // for(auto num : str){
        //     answer += num;
        // }
        return answer;           
    }
};
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> stc;
        int len = temperatures.size();
        vector<int> result(len,0);
        int days = 0;
        for(int i=0; i<len; ++i){
            while(!stc.empty() && temperatures[i] > temperatures[stc.top()]){
                int ind = stc.top();
                stc.pop();
                result[ind] = i - ind; 
            }
            stc.push(i);
        }
        return result;
    }
};
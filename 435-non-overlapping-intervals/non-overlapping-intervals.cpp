class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](auto &a, auto &b){
            return a[1] < b[1];
        });
        int cnt = 0, end = INT_MIN;
        for(auto in : intervals){
            if(in[0] < end) cnt++;
            else end = in[1];
        }
        return cnt;
    }
};
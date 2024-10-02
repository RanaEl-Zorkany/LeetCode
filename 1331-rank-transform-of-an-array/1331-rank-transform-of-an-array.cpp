class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int, int> rank_mp;
        vector<int> sortedArray(arr);
        sort(sortedArray.begin(), sortedArray.end());
        int rank = 1;
        for(int i=0; i < sortedArray.size(); i++){
            if(i>0 && sortedArray[i] > sortedArray[i - 1])
                rank++;
            rank_mp[sortedArray[i]] = rank;
        }
        for(int i=0; i<arr.size(); i++){
            arr[i] = rank_mp[arr[i]];
        }
        return arr;
    }
};
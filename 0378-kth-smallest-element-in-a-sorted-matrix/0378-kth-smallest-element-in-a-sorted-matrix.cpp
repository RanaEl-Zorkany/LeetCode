class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int outer = matrix.size();
        vector<int> vc;
        for (int i = 0; i < outer; i++)
        {
            vc.insert(vc.end(), matrix[i].begin(), matrix[i].end());
        }
        sort(vc.begin(), vc.end());    
        return vc[k - 1];
    }
};
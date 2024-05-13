class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
    map<double, vector<int>> mp;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            double fraction = static_cast<double>(arr[i]) / arr[j];
            mp[fraction] = {arr[i], arr[j]};
        }
    }
    
    auto it = mp.begin();
    advance(it, k - 1);
    return it->second;
    }
};
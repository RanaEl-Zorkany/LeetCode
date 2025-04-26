class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int goodTriplets = 0, size = arr.size();
        for(int i=0; i<size-2; i++){
            for(int j=i+1; j<size-1; j++){
                if(abs(arr[i] - arr[j]) > a) continue;
                for(int k=j+1; k<size; k++){
                    if(abs(arr[k] - arr[j]) > b || abs(arr[i] - arr[k]) > c) continue;
                    goodTriplets++;
                }
            }
        }
        return goodTriplets;
    }
};
class Solution {
public:
    int numberOfHours(vector<int>& piles, int h){
        int t = 0;
        for(int i=0; i < piles.size(); i++){
            double div = static_cast<double>(piles[i]) / h;
            t += static_cast<int>(ceil(div));
        }
        return t;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int start = 1;
        int end = *max_element(piles.begin(), piles.end());
        while(start < end){
            int target;
            int mid = start + (end - start)/2;
            target = numberOfHours(piles, mid);
            if(target <= h) end = mid;
            else if(target > h) start = mid + 1;
        }
        return start;
    }
};
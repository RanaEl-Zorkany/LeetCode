class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mp;
        int max = 0, num;
        int majority = (nums.size() / 2);
        for(auto n : nums){
            mp[n]++;
        }
        map<int, int>::iterator it;
        for (it = mp.begin(); it != mp.end(); it++)
        {
            if(it -> second >= majority)
            {
                if (it -> second > max){
                    max = it -> second;
                    num = it -> first;
                }

            }
        }
        return num;
    }
};
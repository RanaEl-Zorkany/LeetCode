class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
    sort(people.begin(), people.end());
    int start = 0, end = people.size()-1, sum = 0, cnt = 0;
    while(start <= end){
        if (people[start] + people[end] > limit){
            cnt++;
            end--;
        } 
        else {
            start++;
            end--;
            cnt++;
        }
    }
    return cnt;
    }
};
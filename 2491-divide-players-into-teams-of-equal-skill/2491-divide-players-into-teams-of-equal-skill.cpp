#define ll long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
class Solution {
public:
    ll production, sum; 
    long long dividePlayers(vector<int>& skill) {
        sort(all(skill));
        int size = skill.size() - 1;
        int i = 0, j = size;
        sum = skill[i] + skill[j];
        for(; i < j; i++, j--){
            if(sum != skill[i] + skill[j])
                return -1;
            production += (skill[i] * skill[j]);
        }
        return production;
    }
};
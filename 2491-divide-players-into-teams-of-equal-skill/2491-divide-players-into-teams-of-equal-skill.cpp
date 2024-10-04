#define all(x) (x).begin(), (x).end()
#define ll long long
class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(all(skill));
        int size = skill.size() - 1;
        int i = 0, j = size;
        ll production = 0, sum = skill[i] + skill[j];
        
        for(; i < j; i++, j--){
            if(sum != skill[i] + skill[j])
                return -1;
            production += (skill[i] * skill[j]);
        }
        return production;
    }
};
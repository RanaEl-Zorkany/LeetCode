class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> sortedScore;
        vector<string> medal;
        map<int, int> mp;
        sortedScore = score;
        sort(sortedScore.begin(), sortedScore.end());
        reverse(sortedScore.begin(), sortedScore.end());
        for (int i = 0; i < sortedScore.size(); i++)
            mp[sortedScore[i]] = i+1;

        for (int i = 0; i < score.size(); i++)
        {
            if(mp[score[i]] == 1)
                medal.push_back("Gold Medal");
            else if (mp[score[i]] == 2)
                medal.push_back("Silver Medal");
            else if (mp[score[i]] == 3)
                medal.push_back("Bronze Medal"); 
            else 
                medal.push_back(to_string(mp[score[i]])); 
        }

        return medal;
    }
};
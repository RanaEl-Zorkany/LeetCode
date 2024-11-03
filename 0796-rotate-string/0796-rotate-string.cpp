class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;
        string doubleString = s + s;
        return doubleString.find(goal) != string::npos;
    }
};
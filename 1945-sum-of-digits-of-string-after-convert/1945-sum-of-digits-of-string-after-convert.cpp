class Solution {
public:
    int getLucky(string s, int k) {
        string numericString = "";
        for(char ch:s){
            numericString += to_string(ch - 'a' + 1);
        }
    
        while (k--)
        {
            int sum = 0;
            for (int i = 0; i < numericString.size(); i++)
            {
                sum += numericString[i] - '0';
            }
            numericString = to_string(sum);
        }
        return stoi(numericString);
    }
};
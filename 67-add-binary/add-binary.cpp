class Solution {
public:
    string addBinary(string a, string b) {
        string ans; int remainder = 0;
        if(a.size() < b.size()) swap(a, b);
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        for(int i=b.size(); i<a.size(); i++) b += '0';
        cout << a << "   " << b;
        int i = 0;
        for(; i<a.size(); ++i){
            if(a[i] == '1' && b[i] == '1'){
                if(remainder == 0) ans += '0';
                else ans += '1';
                remainder = 1;
            }
            else if((a[i] == '0' && b[i] == '1') || (a[i] == '1' && b[i] == '0')){
                if(remainder == 0) ans += '1';
                else ans += '0';
            }
            else if(a[i] == '0' && b[i] == '0'){
                if(remainder == 0) ans += '0';
                else ans += '1';
                remainder = 0;
            }
        }
        if(remainder == 1) ans += '1';
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
class Solution {
public:
    bool isLongPressedName(string name, string typed) {
    int name_ptr = 0, typed_ptr = 0, cnt = name.size();
    while (name_ptr < name.size() && typed_ptr < typed.size())
    {
        if (name[name_ptr] == typed[typed_ptr]) {
            name_ptr++;
            typed_ptr++;
            cnt--;
        }
        else {
            if (typed_ptr > 0) {
                if (typed[typed_ptr] != typed[typed_ptr - 1])
                    return false;
                else
                    typed_ptr++;
            }
            else
                return false;
        }
    }
    if (name_ptr == name.size())
        name_ptr--;
    while (typed_ptr < typed.size())
    {
        if (typed[typed_ptr] != name[name_ptr])
            return false;
        typed_ptr++;
    }
    return (cnt == 0) ? true : false;
    }
};

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if (n == 0) {
            return "";
        }
        
        string minimum = *min_element(strs.begin(), strs.end());
        string maximum = *max_element(strs.begin(), strs.end());
        int len = min(minimum.length(), maximum.length());
        
        int i = 0;
        while (i < len && minimum[i] == maximum[i]) {
            i++;
        }
        
        return minimum.substr(0, i);
    }
};
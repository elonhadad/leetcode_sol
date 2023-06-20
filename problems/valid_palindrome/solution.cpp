class Solution {
public:
    string without = "";
    bool isPalindrome(string s) {
        for(int i=0; i<s.length();i++){
            if (s[i] >= 'a' && s[i] <='z')
                without+=s[i];
            if(s[i]>='A' && s[i]<='Z')
                without+=s[i]+32;
            if(s[i]>=48 && s[i]<=57)
                without+=s[i];
        }
        for (int i=0; i<without.length()/2;i++){
            if (without[i]!=without[without.length()-1-i])
                return false;
        }
        
    return true;
    }
};
class Solution {
public:


int lengthOfLongestSubstring(string s) {
    vector<int> m(256, -1); // Initialize a vector to store the last occurrence of each character
    int maxLength = 0, start = -1; // Initialize the maximum length and the start of the window

    for (int i = 0; i < s.size(); i++) {
        if (m[s[i]] > start) // If the character is already in the window, move the start of the window
            start = m[s[i]];
        m[s[i]] = i; // Update the last occurrence of the character
        maxLength = max(maxLength, i - start); // Update the maximum length if necessary
    }

    return maxLength;
}


};
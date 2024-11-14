class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int n = s.length();
    int maxLength = 0;
    unordered_map<char, int> charIndex;

    int left = 0;
    for (int right = 0; right < n; ++right) {
        char currentChar = s[right];
        if (charIndex.find(currentChar) != charIndex.end() && charIndex[currentChar] >= left) {
            left = charIndex[currentChar] + 1;
        }
        charIndex[currentChar] = right;
        maxLength = std::max(maxLength, right - left + 1);
    }

    return maxLength;
    }
};
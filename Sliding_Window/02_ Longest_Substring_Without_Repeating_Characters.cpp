class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_set<char> window;

        int L = 0;
        int maxLength = 0;

        for (int R = 0; R < s.length(); R++) {

            while (window.find(s[R]) != window.end()) {
                window.erase(s[L]);
                L++;
            }

            window.insert(s[R]);

            maxLength = max(maxLength, R - L + 1);
        }

        return maxLength;
    }
};
class Solution {
public:
    bool palindrome(const string& s, int first, int last) {
        while (first < last) {
            if (s[first] != s[last])
                return false;
            first++;
            last--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int maxLen = 0;
        int start = 0;
        if (s.length() == 1) {
            return s;
        }

        for (int i = 0; i < s.size(); i++) {
            for (int j = i; j < s.size(); j++) {
                if (palindrome(s, i, j) && (j - i + 1 > maxLen)) {
                    start = i;
                    maxLen = j - i + 1;
                }
            }
        }
        return s.substr(start, maxLen);
    }
};

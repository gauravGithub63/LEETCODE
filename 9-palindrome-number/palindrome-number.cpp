class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        long long revertedNumber = 0;
        int original = x; // Save the original number

        while (x > 0) {
            revertedNumber = revertedNumber * 10 + x % 10;
            x /= 10;
        }

        return original == revertedNumber;
    }
};

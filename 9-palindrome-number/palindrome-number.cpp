class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;  // Negative numbers are not palindromes
        }

        long long reversed = 0;
        int original = x;

        while (x != 0) {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x /= 10;
        }

        // Compare the reversed number with the original number
        return reversed == original;
    }
};

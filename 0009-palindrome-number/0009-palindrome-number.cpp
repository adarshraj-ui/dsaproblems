class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers and numbers ending in 0 (except 0 itself) are not palindromes
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversedNumber = 0;
        int original = x;

        while (x > 0) {
            // Check for potential overflow before multiplying by 10
            if (reversedNumber > (INT_MAX / 10)) {
                return false; 
            }
            reversedNumber = reversedNumber * 10 + (x % 10);
            x /= 10;
        }

        return original == reversedNumber;
    }
};
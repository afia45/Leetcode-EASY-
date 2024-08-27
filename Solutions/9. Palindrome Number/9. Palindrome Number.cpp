class Solution {
public:
    bool isPalindrome(int x) {
        // A negative number cannot be a palindrome
        if (x < 0) {
            return false;
        }
        
        // Convert the number to a string
        string s = to_string(x);
        
        // Initialize two pointers
        int left = 0;
        int right = s.size() - 1;
        
        // Compare characters from both ends
        while (left < right) {
            if (s[left] != s[right]) {
                return false; // If mismatch, it's not a palindrome
            }
            left++;
            right--;
        }
        
        return true; // If all characters matched, it's a palindrome
    }
};

/* To determine if a string is a palidrome if removing at most 1 char. Since iterating through a string is symmetric(left and right is right and left if you flip the order)
    We can handle cases like uc----cu by creating a helper method which will scan both sides to ensure that removing one will be a palindrome. Since using a simple loop and skipping over a char will cause errors in this case because both left and right need equal precedence.

*/
bool validPalindrome(char* s) {
    bool isPalindrome(char* s, int l, int r){
        while (l < r){
            if (s[l] != s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }

    int l = 0, r = strlen(s) - 1;

    while (l < r){
        if (s[l] == s[r]){
            l++;
            r--;
        } else {
            return isPalindrome(s, l + 1, r) || isPalindrome(s, l, r-1);
        }

    }
    return true;
}
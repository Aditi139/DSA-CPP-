class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int h = s.length() - 1;

        while (l < h) {

            if (!isalnum(s[l])) {
                l++;
            }
            else if (!isalnum(s[h])) {
                h--;
            }

            // dono alphabet hain
            else if (isalpha(s[l]) && isalpha(s[h])) {
                if (tolower(s[l]) != tolower(s[h])) {
                    return false;
                }
                l++;
                h--;
            }

            // dono digit hain
            else if (isdigit(s[l]) && isdigit(s[h])) {
                if (s[l] != s[h]) {
                    return false;
                }
                l++;
                h--;
            }

            // ek letter aur ek digit
            else {
                return false;
            }
        }
        return true;
    }
};

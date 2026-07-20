#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    // Helper function to check whether
    // substring from left to right is palindrome
    bool isPalindrome(string &s, int left, int right) {

        while (left < right) {

            if (s[left] != s[right]) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }

    bool validPalindrome(string s) {

        int left = 0;
        int right = s.size() - 1;

        while (left < right) {

            // Characters match
            if (s[left] == s[right]) {
                left++;
                right--;
            }

            // First mismatch found
            else {

                // Try skipping left character
                // OR skipping right character
                return isPalindrome(s, left + 1, right) ||
                       isPalindrome(s, left, right - 1);
            }
        }

        // String is already a palindrome
        return true;
    }
};

int main() {

    Solution obj;

    string s;

    cout << "Enter String: ";
    cin >> s;

    if (obj.validPalindrome(s))
        cout << "True";
    else
        cout << "False";

    return 0;
}
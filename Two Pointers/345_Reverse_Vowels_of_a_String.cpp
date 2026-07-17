#include <iostream>
#include <string>
#include <algorithm> // for std::swap
#include <cctype>    // for std::tolower

using namespace std;

class Solution {
public:
    // Helper function to check if a character is a vowel
    bool isVowel(char c) {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    string reverseVowels(string s) {
        int left = 0;
        int right = s.length() - 1;
        
        while (left < right) {
            while (left < right && !isVowel(s[left])) {
                left++;
            }
            while (left < right && !isVowel(s[right])) {
                right--;
            }
            if (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};

int main() {
    Solution solver;
    
    // Test Case 1
    string test1 = "hello";
    cout << "Original: " << test1 << " -> Reversed Vowels: " << solver.reverseVowels(test1) << endl;
    
    // Test Case 2
    string test2 = "leetcode";
    cout << "Original: " << test2 << " -> Reversed Vowels: " << solver.reverseVowels(test2) << endl;
    
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.length() - 1;

        while (start < end) {
            if (s[start] != s[end]) {
                return false;
            }

            start++;
            end--;
        }

        return true;
    }

    string firstPalindrome(vector<string>& words) {

        for (string word : words) {
            if (isPalindrome(word)) {
                return word;
            }
        }

        return "";
    }
};

int main() {

    Solution obj;

    vector<string> words = {"abc", "car", "ada", "racecar", "cool"};

    cout << obj.firstPalindrome(words);

    return 0;
}
// LeetCode 7 - Reverse Integer
// Difficulty: Medium
// Topic: Math

#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:

    // Function to reverse an integer
    int reverse(int x) {

        int ans = 0;

        // Process each digit until the number becomes 0
        while(x != 0) {

            // Extract the last digit
            int digit = x % 10;

            // Check for integer overflow before updating ans
            if((ans > INT_MAX / 10) || (ans < INT_MIN / 10)) {
                return 0;
            }

            // Append the extracted digit to the reversed number
            ans = (ans * 10) + digit;

            // Remove the last digit from x
            x = x / 10;
        }

        // Return the reversed integer
        return ans;
    }
};

int main() {

    Solution obj;

    int x;

    // Take input from the user
    cout << "Enter an integer: ";
    cin >> x;

    // Function call
    cout << "Reversed Integer: " << obj.reverse(x);

    return 0;
}
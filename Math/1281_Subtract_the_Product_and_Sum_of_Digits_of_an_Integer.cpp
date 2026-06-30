// LeetCode 1281 - Subtract the Product and Sum of Digits of an Integer
// Difficulty: Easy
// Topic: Math
// Time Complexity: O(log10 n)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

class Solution {
public:

    // Function to find the difference between
    // the product and the sum of the digits
    int subtractProductAndSum(int n) {

        int prod = 1;   // Stores the product of digits
        int sum = 0;    // Stores the sum of digits

        // Process each digit of the number
        while(n != 0) {

            // Extract the last digit
            int digit = n % 10;

            // Multiply the digit with the product
            prod *= digit;

            // Add the digit to the sum
            sum += digit;

            // Remove the last digit
            n = n / 10;
        }

        // Calculate the difference
        int result = prod - sum;

        // Return the final answer
        return result;
    }
};

int main() {

    Solution obj;

    int n;

    // Take input from the user
    cout << "Enter a number: ";
    cin >> n;

    // Function call
    cout << "Result: " << obj.subtractProductAndSum(n);

    return 0;
}
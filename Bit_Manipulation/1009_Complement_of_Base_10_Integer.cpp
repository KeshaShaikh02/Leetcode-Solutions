// // LeetCode 1009 - Complement of Base 10 Integer
// Difficulty: Easy
// Topic: Bit Manipulation

#include <iostream>
using namespace std;

class Solution {
public:

    // Function to find the bitwise complement of a number
    int bitwiseComplement(int n) {

        int m = n;      // Copy of the original number
        int mask = 0;   // Mask will contain all 1's of the same length as n

        // Special case: Complement of 0 is 1
        if(n == 0)
            return 1;

        // Create the mask
        while(m != 0) {
            mask = (mask << 1) | 1;  // Shift left and add 1
            m = m >> 1;              // Remove the last bit
        }

        // Find the complement and keep only required bits using mask
        int ans = (~n) & mask;

        return ans;
    }
};

int main() {

    Solution obj;

    int n;

    // Take input from the user
    cout << "Enter a number: ";
    cin >> n;

    // Function call
    cout << "Bitwise Complement: " << obj.bitwiseComplement(n);

    return 0;
}
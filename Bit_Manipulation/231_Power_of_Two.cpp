// LeetCode 231 - Power of Two
// Difficulty: Easy
// Topic: Math

#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:

    // Function to check whether a number is a power of 2
    bool isPowerOfTwo(int n) {

        int ans = 1;   // Start with 2^0 = 1

        // Generate powers of 2 up to 2^30
        for(int i = 0; i <= 30; i++) {

            // If current power matches n, return true
            if(ans == n) {
                return true;
            }

            // Prevent integer overflow before multiplying by 2
            if(ans < INT_MAX / 2) {
                ans = ans * 2;
            }
        }

        // If no power of 2 matches n
        return false;
    }
};

int main() {

    Solution obj;

    int n;

    // Take input from the user
    cout << "Enter a number: ";
    cin >> n;

    // Function call
    if(obj.isPowerOfTwo(n)) {
        cout << n << " is a Power of Two";
    }
    else {
        cout << n << " is NOT a Power of Two";
    }

    return 0;
}
        
    
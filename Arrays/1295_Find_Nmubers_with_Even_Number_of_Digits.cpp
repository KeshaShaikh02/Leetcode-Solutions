#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int count = 0; // Stores the count of numbers having even number of digits

        // Traverse each element of the array
        for(int i = 0; i < nums.size(); i++) {

            int digit = 0;      // Stores digit count of current number
            int num = nums[i];  // Copy current element

            // Count the digits of the current number
            while(num > 0) {
                digit++;         // Increase digit count
                num = num / 10;  // Remove the last digit
            }

            // Check if the digit count is even
            if(digit % 2 == 0) {
                count++;
            }
        }

        // Return the total count of numbers with even digits
        return count;
    }
};

int main() {

    Solution obj;

    vector<int> nums = {12, 345, 2, 6, 7896};

    cout << "Output: " << obj.findNumbers(nums);

    return 0;
}
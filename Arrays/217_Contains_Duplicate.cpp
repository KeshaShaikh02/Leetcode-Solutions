// LeetCode 217 - Contains Duplicate
// Difficulty: Easy
// Topic: Array, Hashing
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:

    // Function to check whether the array contains duplicate elements
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> st;   // Stores unique elements

        // Traverse each element of the array
        for(int i = 0; i < nums.size(); i++) {

            // If the current element already exists in the set,
            // then a duplicate is found
            if(st.find(nums[i]) != st.end()) {
                return true;
            }

            // Insert the current element into the set
            st.insert(nums[i]);
        }

        // No duplicate found
        return false;
    }
};

int main() {

    Solution obj;

    int n;

    // Take the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);

    // Take array elements as input
    cout << "Enter the array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Function call
    if(obj.containsDuplicate(nums)) {
        cout << "Duplicate element found.";
    }
    else {
        cout << "No duplicate element found.";
    }

    return 0;
}
    
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        return left;
    }
};

int main() {
    Solution sol;
    
    // Example 1
    vector<int> nums1 = {1, 3, 5, 6};
    int target1 = 5;
    cout << "Result 1: " << sol.searchInsert(nums1, target1) << endl; // Output: 2

    // Example 2
    vector<int> nums2 = {1, 3, 5, 6};
    int target2 = 2;
    cout << "Result 2: " << sol.searchInsert(nums2, target2) << endl; // Output: 1

    return 0;
}
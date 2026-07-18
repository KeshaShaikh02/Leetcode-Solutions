// LeetCode 11 - Container With Most Water
// Pattern: Two Pointers
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxArea = 0;

        while (left < right) {

            // Calculate width
            int width = right - left;

            // Smaller height determines water level
            int h = min(height[left], height[right]);

            // Calculate current area
            int area = width * h;

            // Update maximum area
            maxArea = max(maxArea, area);

            // Move the pointer with smaller height
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxArea;
    }
};

int main() {

    Solution obj;

    vector<int> height = {1,8,6,2,5,4,8,3,7};

    cout << "Maximum Water = " << obj.maxArea(height);

    return 0;
}
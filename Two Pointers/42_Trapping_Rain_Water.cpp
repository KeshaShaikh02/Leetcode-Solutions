#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {

        int left = 0;
        int right = height.size() - 1;

        int leftMax = 0;
        int rightMax = 0;
        int ans = 0;

        while (left < right) {

            if (height[left] <= height[right]) {

                if (height[left] >= leftMax) {
                    leftMax = height[left];
                } else {
                    ans += leftMax - height[left];
                }

                left++;

            } else {

                if (height[right] >= rightMax) {
                    rightMax = height[right];
                } else {
                    ans += rightMax - height[right];
                }

                right--;
            }
        }

        return ans;
    }
};

int main() {

    Solution obj;

    vector<int> height = {4, 2, 0, 3, 2, 5};

    cout << "Total Trapped Water = " << obj.trap(height) << endl;

    return 0;
}
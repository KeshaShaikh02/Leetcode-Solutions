// LeetCode 977 - Squares of a Sorted Array

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    vector<int> sortedSquares(vector<int>& nums) {

        int left = 0;
        int right = nums.size() - 1;

        vector<int> ans(nums.size());

        int pos = nums.size() - 1;

        while(left <= right) {

            int leftSquare = nums[left] * nums[left];
            int rightSquare = nums[right] * nums[right];

            if(leftSquare > rightSquare) {

                ans[pos] = leftSquare;
                left++;

            }
            else {

                ans[pos] = rightSquare;
                right--;

            }

            pos--;
        }

        return ans;
    }
};


int main() {

    Solution obj;

    vector<int> nums = {-4,-1,0,3,10};

    vector<int> result = obj.sortedSquares(nums);

    for(int i : result) {
        cout << i << " ";
    }

    return 0;
}
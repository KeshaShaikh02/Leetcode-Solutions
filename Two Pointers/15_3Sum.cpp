#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {

    vector<vector<int>> ans;
    int n = nums.size();

    // Step 1: Sort the array
    sort(nums.begin(), nums.end());

    // Step 2: Fix one element
    for (int i = 0; i < n - 2; i++) {

        // Skip duplicate starting elements
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        int left = i + 1;
        int right = n - 1;

        // Step 3: Two Pointer Search
        while (left < right) {

            int sum = nums[i] + nums[left] + nums[right];

            if (sum == 0) {

                // Store the triplet
                ans.push_back({nums[i], nums[left], nums[right]});

                left++;
                right--;

                // Skip duplicate left values
                while (left < right && nums[left] == nums[left - 1])
                    left++;

                // Skip duplicate right values
                while (left < right && nums[right] == nums[right + 1])
                    right--;
            }

            else if (sum < 0) {

                // Need a larger sum
                left++;
            }

            else {

                // Need a smaller sum
                right--;
            }
        }
    }

    return ans;
}

int main() {

    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> result = threeSum(nums);

    cout << "Unique Triplets:\n";

    for (auto triplet : result) {
        cout << "[ ";
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    return 0;
}
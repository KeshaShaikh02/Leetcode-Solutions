#include <iostream>
#include <vector>
using namespace std;

double findMaxAverage(vector<int>& nums, int k) {

    // Step 1: Calculate the first window sum
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += nums[i];
    }

    // Step 2: Initialize maximum sum
    int maxSum = sum;

    // Step 3: Initialize sliding window pointers
    int left = 0;
    int right = k;

    // Step 4: Slide the window
    while (right < nums.size()) {

        // Remove the left element and add the new right element
        sum = sum - nums[left] + nums[right];

        // Update maximum sum
        maxSum = max(maxSum, sum);

        // Move the window
        left++;
        right++;
    }

    // Step 5: Return maximum average
    return (double)maxSum / k;
}

int main() {

    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;

    double ans = findMaxAverage(nums, k);

    cout << "Maximum Average = " << ans << endl;

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int numOfSubarrays(vector<int>& arr, int k, int threshold) {
    int count = 0;
    int sum = 0;

    // Step 1: Calculate first window sum
    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }

    // Step 2: Check first window
    if (sum >= threshold * k) {
        count++;
    }

    // Step 3: Slide the window
    for (int i = k; i < arr.size(); i++) {

        // Remove outgoing element and add incoming element
        sum = sum - arr[i - k] + arr[i];

        // Check current window
        if (sum >= threshold * k) {
            count++;
        }
    }

    return count;
}

int main() {

    vector<int> arr = {2, 2, 2, 2, 5, 5, 5, 8};

    int k = 3;
    int threshold = 4;

    int ans = numOfSubarrays(arr, k, threshold);

    cout << "Answer = " << ans << endl;

    return 0;
}
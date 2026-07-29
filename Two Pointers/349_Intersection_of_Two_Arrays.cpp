#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

    // Step 1: Sort both arrays
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    vector<int> ans;

    int i = 0;
    int j = 0;

    // Step 2: Two Pointer
    while (i < nums1.size() && j < nums2.size()) {

        if (nums1[i] < nums2[j]) {
            i++;
        }
        else if (nums1[i] > nums2[j]) {
            j++;
        }
        else {

            // Add only unique element
            if (ans.empty() || ans.back() != nums1[i]) {
                ans.push_back(nums1[i]);
            }

            i++;
            j++;
        }
    }

    return ans;
}

int main() {

    vector<int> nums1 = {4, 9, 5};
    vector<int> nums2 = {9, 4, 9, 8, 4};

    vector<int> result = intersection(nums1, nums2);

    cout << "Intersection: ";

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
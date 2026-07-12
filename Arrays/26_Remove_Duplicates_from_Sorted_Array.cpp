#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {

    int j = 0;

    for(int i = 1; i < nums.size(); i++) {

        if(nums[i] != nums[j]) {

            j++;
            nums[j] = nums[i];
        }
    }

    return j + 1;
}

int main() {

    vector<int> nums = {1,1,2,2,3,3,4};

    int k = removeDuplicates(nums);

    cout << "Unique Elements: " << k << endl;

    cout << "Modified Array: ";

    for(int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
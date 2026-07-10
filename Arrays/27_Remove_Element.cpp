#include <iostream>
using namespace std;

int removeElement(int nums[], int size, int val) {

    int k = 0;

    for (int i = 0; i < size; i++) {

        if (nums[i] != val) {

            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}

int main() {

    int nums[] = {3, 2, 2, 3};

    int size = sizeof(nums) / sizeof(nums[0]);

    int val = 3;

    int k = removeElement(nums, size, val);

    cout << "k = " << k << endl;

    cout << "Modified Array: ";

    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
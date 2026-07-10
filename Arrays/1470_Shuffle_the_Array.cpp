#include <iostream>
#include <vector>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> result(2 * n);
    
    for (int i = 0; i < n; i++) {
        result[2 * i] = nums[i];
        result[2 * i + 1] = nums[i + n];
    }
    
    return result;
}

int main() {
    vector<int> nums = {2, 5, 1, 3, 4, 7};
    int n = 3;
    
    vector<int> result = shuffle(nums, n);
    
    cout << "Shuffled Array: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    
    return 0;
}
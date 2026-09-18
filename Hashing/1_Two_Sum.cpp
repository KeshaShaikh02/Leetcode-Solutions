#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {

    map<int, int> mpp;

    for(int i = 0; i < nums.size(); i++) {

        int complement = target - nums[i];

        auto it = mpp.find(complement);

        if(it != mpp.end()) {
            return {it->second, i};
        }

        mpp[nums[i]] = i;
    }

    return {};
}

int main() {

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = twoSum(nums, target);

    cout << ans[0] << " " << ans[1];

    return 0;
}
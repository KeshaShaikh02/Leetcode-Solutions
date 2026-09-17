#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
bool containsDuplicate(vector<int>& nums) {
    unordered_map<int, bool> mpp;

    for(int i=0; i<nums.size(); i++) {
        if(mpp.find(nums[i]) != mpp.end()) {
            return true;
        }
        mpp[nums[i]] = true;
    }
    return false;
}
int main() {
    int n;
     cin >> n;
     vector<int> nums(n);
     for(int i=0; i<n; i++) {
         cin >> nums[i];
     }
     bool answer = containsDuplicate(nums);
     cout << answer;
     return 0;
}
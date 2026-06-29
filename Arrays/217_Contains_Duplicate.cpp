#include<iostream>
#include <vector>
#include <unordered_set>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> st;

        for(int i = 0; i < nums.size(); i++) {

            // Check if current element already exists
            if(st.find(nums[i]) != st.end()) {
                return true;
            }

            // Insert current element
            st.insert(nums[i]);
        }

        return false;
    }
};
    
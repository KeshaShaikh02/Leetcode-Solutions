#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies = *max_element(candies.begin(), candies.end());
        vector<bool> result;
        
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= maxCandies)
                result.push_back(true);
            else
                result.push_back(false);
        }
        
        return result;
    }
};

int main() {
    Solution sol;
    
    vector<int> candies = {2, 3, 5, 1, 3};
    int extraCandies = 3;
    
    vector<bool> ans = sol.kidsWithCandies(candies, extraCandies);
    
    cout << "Output: [";
    for (int i = 0; i < ans.size(); i++) {
        cout << (ans[i] ? "true" : "false");
        if (i != ans.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
    
    return 0;
}
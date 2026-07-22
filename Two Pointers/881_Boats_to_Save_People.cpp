#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int numRescueBoats(vector<int>& people, int limit) {

    // Step 1: Sort the array
    sort(people.begin(), people.end());

    int left = 0;
    int right = people.size() - 1;
    int boats = 0;

    while (left <= right) {

        // If lightest and heaviest can share a boat
        if (people[left] + people[right] <= limit) {
            left++;
            right--;
        }
        // Otherwise, heaviest goes alone
        else {
            right--;
        }

        // One boat is used in every iteration
        boats++;
    }

    return boats;
}

int main() {

    vector<int> people = {3, 2, 2, 1};
    int limit = 3;

    cout << "Minimum Boats Required: "
         << numRescueBoats(people, limit);

    return 0;
}
#include<iostream>
#include<unordered_map>
using namespace std;

bool isAnagram(string s, string t) {
    if(s.length() != t.length()) {
        return false;
    } 
    unordered_map<char, int> mpp;

    for(int i= 0; i < s.length(); i++) {
        mpp[s[i]]++;
    }
    for(int i=0; i<t.length(); i++) {
        mpp[t[i]]--;
    }
    for(auto it : mpp) {
        if(it.second != 0){
            return false;
        }
    }
    return true;
}
int main() {
    string s, t;
    cin >> s;
    cin >> t;
    bool answer = isAnagram(s,t);
    cout << answer;
    return 0;
}
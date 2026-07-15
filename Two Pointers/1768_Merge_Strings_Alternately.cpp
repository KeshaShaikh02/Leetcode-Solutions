#include <iostream>
#include <string>
using namespace std;

string mergeAlternately(string word1, string word2)
{
    string ans = "";

    int i = 0;
    int j = 0;

    while (i < word1.size() || j < word2.size())
    {
        if (i < word1.size())
        {
            ans += word1[i];
            i++;
        }

        if (j < word2.size())
        {
            ans += word2[j];
            j++;
        }
    }

    return ans;
}

int main()
{
    string word1, word2;

    cout << "Enter first string: ";
    cin >> word1;

    cout << "Enter second string: ";
    cin >> word2;

    string result = mergeAlternately(word1, word2);

    cout << "Merged String: " << result << endl;

    return 0;
}
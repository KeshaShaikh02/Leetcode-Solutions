#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch)
{
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int maxVowels(string s, int k)
{
    int vowelCount = 0;

    // Step 1: Count vowels in the first window
    for (int i = 0; i < k; i++)
    {
        if (isVowel(s[i]))
        {
            vowelCount++;
        }
    }

    int maxVowelCount = vowelCount;

    int left = 0;
    int right = k;

    // Step 2: Slide the window
    while (right < s.length())
    {
        // Remove left character
        if (isVowel(s[left]))
        {
            vowelCount--;
        }
        left++;

        // Add right character
        if (isVowel(s[right]))
        {
            vowelCount++;
        }

        // Update answer
        maxVowelCount = max(maxVowelCount, vowelCount);

        right++;
    }

    return maxVowelCount;
}

int main()
{
    string s = "abciiidef";
    int k = 3;

    cout << "Maximum Vowels = " << maxVowels(s, k);

    return 0;
}
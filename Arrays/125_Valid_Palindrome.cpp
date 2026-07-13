#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(string s)
{
    int left = 0;
    int right = s.length() - 1;

    while (left < right)
    {
        // Skip special characters from left
        if (!isalnum(s[left]))
        {
            left++;
        }

        // Skip special characters from right
        else if (!isalnum(s[right]))
        {
            right--;
        }

        // Compare valid characters
        else
        {
            if (tolower(s[left]) != tolower(s[right]))
            {
                return false;
            }

            left++;
            right--;
        }
    }

    return true;
}

int main()
{
    string s = "A man, a plan, a canal: Panama";

    if (isPalindrome(s))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}
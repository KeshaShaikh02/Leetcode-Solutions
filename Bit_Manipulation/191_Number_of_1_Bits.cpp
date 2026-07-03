#include <iostream>
using namespace std;

int hammingWeight(int n)
{
    int count = 0;

    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }

        n = n >> 1;
    }

    return count;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    int ans = hammingWeight(n);

    cout << "Number of 1 bits = " << ans << endl;

    return 0;
}
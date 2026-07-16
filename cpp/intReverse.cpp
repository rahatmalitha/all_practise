#include <iostream>
using namespace std;

int main()
{
    int n = 125, digit, reverseInt = 0;

    while (n > 0)
    {
        digit = n % 10;
        reverseInt = (reverseInt * 10) + digit;

        n /= 10;
    }

    cout << reverseInt;

    return 0;
}
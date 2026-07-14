#include <iostream>
using namespace std;

int decToBinary(int n)
{
    int ans = 0, pow = 1;
    while (n > 0)
    {
        int rem = n % 2;
        n /= 2;
        ans += rem * pow;
        pow *= 10;
    }
    return ans;
}
int main()
{
    int decNum = 9;
    int binaryNum = decToBinary(decNum);
    cout << "Decimal: " << decNum << " => Binary: " << binaryNum << endl;
    return 0;
}
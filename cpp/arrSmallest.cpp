#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int size = 5;
    int arr[size] = {20, 5, 1, -15, 25};

    int smallest = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    cout << smallest;

    return 0;
}
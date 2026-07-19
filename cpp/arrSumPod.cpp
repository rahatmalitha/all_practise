#include <iostream>
using namespace std;

void sumPod(int arr[], int n)
{
    int sum = 0, pod = 1;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        pod *= arr[i];
    }

    if (pod < 0)
    {
        pod = -pod;
    }

    cout << "Sum of arr = " << sum << endl;
    cout << "Pod of arr = " << pod << endl;
}

int main()
{
    int arr[] = {5, 10, 15, 3, -2, 7};
    int sz = sizeof(arr) / sizeof(arr[0]);

    sumPod(arr, sz);

    return 0;
}
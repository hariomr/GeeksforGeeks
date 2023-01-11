#include <iostream>
using namespace std;

void reversearray(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    if (start > end)
    {
        return;
    }

    while (start <= end)
    {
        int temp = arr[end];
        arr[end] = arr[start];
        arr[start] = temp;
        start++;
        end--;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    reversearray(arr, 6);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

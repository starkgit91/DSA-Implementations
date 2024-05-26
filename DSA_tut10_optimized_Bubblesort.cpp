// if given array is already sorted then no swap.
//Time Complexity is O(n)
#include <iostream>
using namespace std;
void BubbleSort(int arr[], int n)
{
    for (size_t i = 1; i <= n - 1; i++)
    {
        int count = 0;
        for (size_t j = 0; j <= n - 2; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                count = 1;
            }
        }
        if (count == 0)
        {
            break;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    BubbleSort(arr, n);

    return 0;
}
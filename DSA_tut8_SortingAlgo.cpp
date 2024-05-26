// 'Selection sorting'
//Time Complexity is O(n^2)
#include <iostream>
// #include <vector>
// #include <algorithm>
using namespace std;
void SelectionSort(int arr[], int n)
{
    for (size_t i = 0; i < n - 1; i++)
    {
        int smallest_index = i;
        for (size_t j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallest_index])
            {
                smallest_index = j;
            }
            swap(arr[i], arr[smallest_index]);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    SelectionSort(arr, n);
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

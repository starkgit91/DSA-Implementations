#include <bits/stdc++.h>
using namespace std;
int binarysearch(vector<int> arr, int n, int key)
{
    int s = 0;
    int e = n; 
    while (s <= e)
    {   
        int mid = floor(s+ (e-s)/2);
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }
    }
    return -1;
}

int main()
{
    int n;
    printf("enter size: ");
    cin >> n;
    vector<int> arr;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr.push_back(x);
    }
    int key;
    printf("enter key: ");
    cin >> key;
    cout << binarysearch(arr,n-1, key);

    return 0;
}
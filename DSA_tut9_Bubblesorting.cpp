// "Bubble sorting" -- compare adjecent element
//Time Complexity is O(n^2)
#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void BubbleSort(vector<int> vec, int n)
{
    for (size_t i = 1; i < n; i++)
    {
        for (size_t j = 0; j < n - 1; j++)
        {
            if (vec[j] > vec[j + 1])
            {
                swap(vec[j], vec[j + 1]);
            }
        }
    }
    for (size_t i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> vec;
    // int vec[n];
    int num;
    for (size_t i = 0; i < n; i++)
    {
        cin >> num;
        vec.push_back(num);
    }
    BubbleSort(vec, n);
 
    return 0;
}
// "Merge Sort"

#include <bits/stdc++.h>
using namespace std;

void Merge(int vec[], int l, int mid, int r)
{   
    int mid1 = mid - l + 1;
    int end = r - mid;
    // create L[0,mid] R[mid+1,vec.size()]
    int left_vec[mid1];
    int right_vec[end];
    // mid = floor(vec.size() / 2);
    for (size_t i = 0; i < mid1; i++)
    {
        left_vec[i]=vec[l + i];
    }
    for (size_t j = 0; j < end; j++)
    {
        right_vec[j]=vec[mid + 1 + j];
    }
    // maintain current index of subarrays and array
    int i, j, k;
    i = 0;
    j = 0;
    k = l;
    while (i < mid1 && j < end)
    {
        if (left_vec[i] <= right_vec[j])
        {
            vec[k] = left_vec[i];
            i++;
        }
        else
        {
            vec[k] = right_vec[j];
            j++;
        }
        k++;
    }
    // when run out of element in L or R,pick remaining element and put in A[]
    while (i < mid1)
    {
        vec[k] = left_vec[i];
        i++;
        k++;
    }
    while (j < end)
    {
        vec[k] = right_vec[j];
        j++;
        k++;
    }
    
}
// Divide the array into two subarrays, sort them and merge them
void MergeSort(int vec[], int l, int r)
{
    if (l < r)
    {
        // m is the point where the array is divided into two subarrays
        int mid = l + (r - l) / 2;

        MergeSort(vec, l, mid);
        MergeSort(vec, mid + 1, r);

        // Merge the sorted subarrays
        Merge(vec,l,mid,r);
    }
}
void printvector(int vec[],int n){
    printf("the sorted array is: ");
    for (size_t i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }

}
signed main()
{   
    int n;
    printf("enter size of vector: ");
    cin >> n;
    int vec[n];
    // int num;
    printf("enter the elemnts in vector: ");
    for (size_t i = 0; i < n; i++)
    {
        cin >> vec[i];
        // vec.push_back(num);
    }
    MergeSort(vec, 0, n - 1);
    printvector(vec,n);
    return 0;
}

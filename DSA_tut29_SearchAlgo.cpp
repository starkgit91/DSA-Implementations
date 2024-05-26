// Linear Search
#include <bits/stdc++.h>
using namespace std;
int linearsearch(vector<int> arr,int n,int key){  //TC = O(n)
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            cout<<"key found at ";
            return i;
        }
    }
    cout<<"key not found: ";
    return -1;
}
int main(){
    int n;
    printf("enter size: ");
    cin>>n;
    vector<int> arr;
    int x;
    for(int i=0 ; i<n;i++){
        cin>>x;
        arr.push_back(x);
    }
    int key;
    printf("enter key: ");
    cin>>key;
    cout<<linearsearch(arr,n,key);

    return 0;
}
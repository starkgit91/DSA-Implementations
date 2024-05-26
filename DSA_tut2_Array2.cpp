#include <iostream>
using namespace std;

int main(){   
    int n;
    cout<<"Enter the no of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of Array: "<<endl;
    for (int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"the array is: ";
    for (int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int sum = 0;

    for (int j=0;j<n;j++){
        sum += arr[j];   
    }
    cout<<"sum of array is: "<<sum<<endl; 
    return 0;
}
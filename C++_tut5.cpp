//Array creating and printing by user input

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter no of elements in array: "<<endl;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i] = i+1;
    }
    cout<<"The array is: "<<endl;
    for(int j=0; j<n; j++){
        cout<<arr[j]<<" ";

    }
    return 0;
}
//Creating an Array
#include<iostream>
using namespace std;
int main(){
    /*int a[10] ={1,2,3,4};
    // a[0]=2;
    // int a[4]={1,2,3,4};  ///Initialization
    // cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<endl; // Printing values
    for(int i=0;i<10;i++){  
        //i<10 for int a[10] ={1,2,3,4}; shows that rest element of array is zero after initialization..
        cout<<a[i]<<" ";

    }*/

    int a[10];
    for (int i=0;i<10;i++){
        a[i]=i*i;
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int x;
    cout<<sizeof(x)<<endl;

    int b[10]={1,2,3};
    cout<<sizeof(b)<<endl;
    
    return 0;
}


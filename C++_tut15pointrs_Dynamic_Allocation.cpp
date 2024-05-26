// Dynamic memory allocation is a process that allows us to do
//  exactly what we're looking to do above, to allocate memory while
//  our program is running, as opposed to telling the computer exactly
//  how much we'll need (and for what) ahead of time.
#include <iostream>
using namespace std;
int main(){
    int a = 4;
    int* ptr = &a;
    *ptr = 99;
    cout<<"the address of a "<<ptr<<endl;
    cout<<"the value at address ptr is=a= "<<*ptr<<endl;

    //Dtynamically Initialize the pointer to integer
    int* pntr = new int(40);
    cout<<"the address of new int is "<<pntr<<endl;
    cout<<"the value at address pntr is=a= "<<*pntr<<endl;

    //array as pointer
    // allocating a block of memory
    // Dynamically allocation of memory using new keyword
    int* arr = new int[3]; // Dynamically Allocated Array
    arr[0] = 12;
    *(arr+1) = 13; //arr[1] = 13;
    *(arr+2) = 14;  // arr[2]= 14;
    // delete[] arr;
    cout<<"the value of arr[0] is "<<arr[0]<<endl;
    cout<<"the value of arr[1] is "<<arr[1]<<endl;
    cout<<"the value of arr[2] is "<<arr[2]<<endl;

    return 0;
}
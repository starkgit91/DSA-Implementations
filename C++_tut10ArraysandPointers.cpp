//Arrays using Pointers
//Pointer Arithmatic ->> Traversal of Pointers
// address_new = address_current + i*size_of_datatype

#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4};
    int* pointer = arr;
    cout<<*(pointer++)<<endl;
    cout<<*++pointer<<endl;
    cout<<"the of arr[0] is "<<*(pointer)<<endl;
    cout<<"the of arr[1] is "<<*(pointer+1)<<endl;
    cout<<"the of arr[2] is "<<*(pointer+2)<<endl;
    cout<<"the of arr[3] is "<<*(pointer+3)<<endl;

    return 0;
}

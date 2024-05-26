#include <iostream>
using namespace std;
int main(){
    int a=3;
    int* b = &a;
    // &-> Address of operator
    cout<<"the address of a is "<<&a;
    cout<<"the address of a is "<<b;
    //* -> (value at operator) Dereference Operator
    cout<<"the value at address b is "<<*b<<endl;
    
    //Pointer to pointer
    int **c = &b;

    cout<<"address of b is "<<&b;
    cout<<"address of b is "<<c;
    int* x = *c;
    // dereference once to c to get b
    cout<<"value at address c is "<<x;
    // dereference twice to c to get value of b or to get a
    cout<<"value at address value_at(value_at(c)) is "<<**c;
    
return 0;
}
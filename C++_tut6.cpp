//Operators 
#include<iostream>
using namespace std;
int main(){
    int a = 12;
    int b = 5;
    int c = 0;
    c = a&b;
    cout<<c<<endl;
    c = a|b;
    cout<<c<<endl;
    c = a^b;
    cout<<c<<endl;
    c=~a;
    cout<<c<<endl;
    c=a<<2;
    cout<<c<<endl;
    c=a>>2;
    cout<<c<<endl;
    return 0;
}

#include <iostream>
using namespace std;
class Complex{
    int real,img;
    public:
        void getdata(){
            cout<<"the real part is "<<real<<endl;
            cout<<"the img part is "<<img<<endl;
        }
        void setdata(int a, int b){
            real = a;
            img = b;
        }
};

int main(){
    int size = 3;
    Complex *ptr = new Complex[size];
    //code
    return 0;
}
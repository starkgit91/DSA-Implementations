// Fibonacci Series
#include<iostream>
using namespace std;

int fib(int n){
    // cin>>n;
    if (n<=1){
        cout<<n;
    }
    return fib(n-1)+fib(n-2); 
    
}
int main(){
    int n;
    cin>>n;
    fib(n);
    cout<<fib(n);
    // cout<<fib(n)<<endl;
    
    return 0;
}

//for series
#include<iostream>
using namespace std;
int fib_series(int n){
    if (n<=1){
        return n;
    }
    return fib_series(n-1)+fib_series(n-2);
}
int main(){
    int n, i=0;
    cout<<"enter the number: ";
    cin>>n;
    fib_series(n);
    while (i<=n){
        cout<<" "<<fib_series(i);
        i++;
    }
    return 0;
}
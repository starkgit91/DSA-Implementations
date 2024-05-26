// // Recursion-- Calling a function Itself
// // when a problem depends on a problem of the same nature
// // but with the smaller input size
// // big problem--> smaller prob--> smallest prob
#include <bits/stdc++.h>
using namespace std;
// recursion uses PMI- Principle of Mathematical Induction
// step1- Base Case
// step2- Induction Hypothesis
// step3- Induction Case
int fact(int n)
{   
    //base case
    if (n == 0 or n == 1)
    {
        return 1;
    }
    // assumption-- Recursive case
    int recur = fact(n-1);
    return n * recur; // 3rd step- calculation
}
int fib(int n){
    //base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    //recursive case
    int recur = fib(n-1) + fib(n-2);
    //3rd step- induction
    return recur;
}

int power(int x, int n){
    //base case
    if(n==0){
        return 1;
    }
    //recursive case
    int recur = power(x,n-1);
    //calculation 3rd case
    return x*recur;

}
int main()
{
    int n,x;
    cin >> n;
    printf("\nenter base for power: ");
    cin>>x;
    int res = fact(n);
    int nfib = fib(n);
    int pow = power(x,n);
    cout <<"factorial: "<<res<<endl;
    cout<<"nth fib no is: "<<nfib<<endl;
    cout<<x<<"^"<<n<<" is: "<<pow<<endl;
    return 0;
}





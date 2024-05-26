// fib num using Dynamic Programming
#include <bits/stdc++.h>
using namespace std;
#define int long long
class Stark
{
public:
    long long fib(long long n)
    { // hashmap to store fib number
        long long f[n + 2];
        f[0] = 0;
        f[1] = 1;
        for (long long i = 2; i <= n; i++)
        {
            f[i] = f[i - 1] + f[i - 2]; // add prev no and store em
        }
        return f[n];
    }
};
signed main()
{
    
    Stark dp;
    long long n;
    cin >> n;
    cout << dp.fib(n);
    return 0;
}

// fib using Nth power Matrix

// Fibonacci Series using Optimized Method
// #include <bits/stdc++.h>
// using namespace std;

// void multiply(int F[2][2], int M[2][2]);
// void power(int F[2][2], int n);

// // Function that returns nth Fibonacci number
// int fib(int n)
// {
// 	int F[2][2] = { { 1, 1 }, { 1, 0 } };
// 	if (n == 0)
// 		return 0;
// 	power(F, n - 1);

// 	return F[0][0];
// }

// // Optimized version of power() in method 4
// void power(int F[2][2], int n)
// {
// 	if (n == 0 || n == 1)
// 		return;
// 	int M[2][2] = { { 1, 1 }, { 1, 0 } };

// 	power(F, n / 2);
// 	multiply(F, F);

// 	if (n % 2 != 0)
// 		multiply(F, M);
// }

// void multiply(int F[2][2], int M[2][2])
// {
// 	int x = F[0][0] * M[0][0] + F[0][1] * M[1][0];
// 	int y = F[0][0] * M[0][1] + F[0][1] * M[1][1];
// 	int z = F[1][0] * M[0][0] + F[1][1] * M[1][0];
// 	int w = F[1][0] * M[0][1] + F[1][1] * M[1][1];

// 	F[0][0] = x;
// 	F[0][1] = y;
// 	F[1][0] = z;
// 	F[1][1] = w;
// }

// int main()
// {
// 	int n;cin>>n;

// 	cout << fib(n);
// 	// getchar();

// 	return 0;
// }


#include <bits/stdc++.h>
using namespace std;
// #define int long long
vector<int> M(500005);
void solvecode()
{
    int n, x;
    cin >> n, x;
    vector<int> V(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> V[i];
    }
    for (size_t i = 0; i < n; i++)
    {
        M[V[i]]++;
    }
    int a = 1;
    while (a < x)
    {
        if (M[a] == 0)
        {
            a++;
            continue;
        }
        else
        {
            if (M[a] % (a + 1) != 0)
            {
                cout << ("No\n");
                return;
            }
            M[a + 1] += M[a] / (a + 1);
            a++;
        }
        cout << "Yes\n";
    }
}
int main()
{
    int t = 1;

    solvecode();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
void print(vector<vector<int>> v, int sv, vector<bool> &visited)
{
    cout << sv << endl;
    // visited[sv] = true;
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        if (v[sv][i] == 1 && visited[i] == false)
        {
            print(v, i, visited); // resursion for other node to print
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    // vector- dynamic allocation
    // vector<vector<int>> matrix(n,vector<int>(n,0));
    vector<vector<int>> mat(n, vector<int>(n, 0));
    // array - dynamic allocation
    // int *mat = new int[n * n];
    for (int i = 1; i <= e; i++)
    {
        int fv, sv;
        cin >> fv >> sv;
        mat[fv][sv] = 1;
        mat[sv][fv] = 1;
    }
    // creating visited vector for avoiding infinite recusive call
    vector<bool> visited(n, false);
    // calling fn
    print(mat, 0, visited);

    return 0;
}
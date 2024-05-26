
// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// public:
//     int mincostfunction(vector<int> &x, vector<int> &y,int m, int n)
//     {

//         int i = 1; // i th vertical line
//         int j = 1; // j th horizontal line
//         int counter = 0; //min cost
//         while (i < m && j < n)
//         {
//             if (x[i - 1] > y[j - 1])
//             // if ith element of vertical vector is > than jth ele of hor vector->> update cost!
//             {
//                 counter += x[i - 1] * j;
//                 i++;
//             }
//             else
//             {
//                 counter += y[j - 1] * i;
//                 j++;
//             }
//         }
//         while (i < m)
//         {
//             counter += x[i - 1] * j;
//             i++;
//         }
//         while (j < n)
//         {
//             counter += y[j - 1] * i;
//             j++;
//         }
//         return counter;
//     }
// };
// int main()
// {
//     int t;
//     cin >> t;
    
//     while (t--)
//     {
//         cout << endl;
//         int m, n;
//         cin >> m >> n;
//         vector<int> y;
//         vector<int> x;
//         for (int i = 0; i < m - 1; i++)
//         {
//             cin >> x[i];
//         }
//         for (int i = 0; i < n - 1; i++)
//         {
//             cin >> y[i];
//         }
//         // sorting array in rev odr
//         sort(x.rbegin(),x.rend());
//         sort(y.rbegin(),y.rend());

//         Solution stark;
//         int res = stark.mincostfunction(x, y,m ,n);
//         cout << res;
//     }

//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

// class Solution
// {
// public:
//     int check_goodarray(vector<int> &x, int n)
//     {
//         int odd = floor(n / 2);
//         int check_counter = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (x[i] % 2 != 0)
//             {
//                 check_counter++;
//             }
//         }
//         if (odd == check_counter)
//         {
//             return 1;
//         }
//         else
//         {
//             return -1;
//         }
//     }
//     int min_move(vector<int> &x, int n)
//     {
//         int counter = 0;
//         if (check_goodarray(x, n) == 1)
//         {
//             vector<int> check;
//             for (int i = 0; i < n; i++)
//             {
//                 if ((i % 2 == 0 && x[i] % 2 == 0) || (i % 2 != 0 && x[i] % 2 != 0))
//                 {
//                     counter = counter;
//                 }
//                 else
//                 {
//                     check.push_back(i);
//                     if (check.size() == 2)
//                     {
//                         swap(x[check.at(0)], x[check.at(1)]);
//                         counter++;
//                         check.pop_back();
//                         check.pop_back();
//                     }
//                 }
//             }
//             return counter;
//         }
//         else
//         {
//             return check_goodarray(x, n);
//         }
//     }
// };

// signed main()
// {
//     int t;
//     cin >> t;
//     Solution stark;
//     vector<int> result;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> x(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> x[i];
//         }
//         int res = stark.min_move(x, n);
//         result.push_back(res);
//     }
    
//     for (int j = 0; j < result.size();j++)
//     {
//         cout<<result[j]<<endl;
//     }
    
//     return 0;
// }
// #define int long long

void solve() {
  int n,m;cin>>n>>m;
  vector<int> vec(m);
  for(int i=0;i<m;i++) cin>>vec[i];
  // logic   
  sort(vec.begin(),vec.end());
  int minx = INT_MAX;
  vector<int> mcqueen;
  for(int i=0;i<m-n+1;i++){
    
    for(int j=n-1+i;j<m;j++){
      int dif = abs(vec[j]-vec[i]);
      minx = min(minx,dif);
    }
    mcqueen.push_back(minx);
  }
  int res = *min_element(mcqueen.begin(),mcqueen.end());
  cout<<res<<endl;
  
}
signed main()
{
  // solve();
  int t1;
  cin >> t1;
  for (int k11 = 1; k11 <= t1; k11++) {
    solve();
  }
  return 0;
}
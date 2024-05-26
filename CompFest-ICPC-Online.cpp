#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;


#define int long long
#define ll long longSSSS
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountint
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

//DP Digital WALLET
const int N = 1e5 + 50;
const int M = 12;
void solve(){
  int n,m,k;cin>>n>>m>>k;
  vector<vector<int>> mat(N,vector<int>(M));
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j<= m; j++){
      cin>>mat[j][i];
    }
  }
  for (int i = 1; i <= m; i++)
  {
    sort(mat[i].begin()+1,mat[i].begin()+1+n,greater<>());
    for(int j=1;j<=n;j++){
      mat[i][j] += mat[i][j-1];
    }
  }
  
  vector<vector<int>> dp(N,vector<int>(M));
  swap(n,m);
  dp[1][1]=0;
  for(int i=1;i<=n-k+1;i++){
    for (int j = i,s=1; j <=n && s<=k; j++,s++){
      int f = j-i+1;
      for (int w = 0; w <= min(f,n-i-k+2); w++){
        //dp approach
        dp[i+w][f-w+1] = max(dp[i+w][f-w+1],dp[i][f]+mat[j][w]);
      } 
    }
  }
  
  int wallet=0;
  for(int i=0;i<=n+1;i++){
    for (int j = 0; j <= k; j++){
      wallet = max(wallet,dp[i][j]);
    }
  }

  cout<<wallet<<endl; //dp
  // for(int i=1;i<=m-k+1;i++){
  //   int maxx=0;
  //   int idx=0;
  //   int p=0;
  //   for (int j = 1; j <= n; j++)
  //   {
  //     int s =i;
  //     int f =i+k-1;
  //     int z = *max_element(mat[j].begin()+s,mat[j].begin()+f+1);
  //     if(z>maxx){
  //       maxx = max(maxx,z);
  //       // cout<<maxx<<": ";
  //       idx = distance(mat[j].begin(),find(mat[j].begin()+s,mat[j].begin()+f+1,maxx));
  //       // cout<<idx<<" ";
  //       p = j;
  //     }
  //   }
  //   mat[p][idx]=0;
  //   wallet+=maxx;
  // }
  // cout<<wallet<<endl; //dp
  //sort metrix
  // vector<int> hold(n*m);
  // int x=0;
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < m; j++)
  //   {
  //     hold[x] = mat[i][j];
  //     x++;
  //   }   
  // }
  // sort(hold.begin(),hold.end());
  // x=0;
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < m; j++)
  //   {
  //     mat[i][j]=hold[x];
  //     x++;
  //   }
  // }
  
}

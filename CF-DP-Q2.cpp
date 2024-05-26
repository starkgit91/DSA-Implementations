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



void solve() {
  int n;cin >> n;
//   vector<int> vec(n);
//   for (int i = 0; i < n; i++) cin >> vec[i];
  string s;cin>>s;
  int idxA;
  if(s.find('R')!=string::npos==true){
    idxA = s.find('R');
  }
  else{
    idxA = INT_MAX - 1;
  }
  // cout<<idxA<<" ";
  int idxB;
  // cout<<idxB<<endl;
  if(s.find('B')!=string::npos==true){
    idxB = s.find('B');
  }
  else{
    idxB = INT_MAX;
  }
  if(n==1 && s[0]=='?'){
    s='B';
    cout<<s<<endl;
  }
  else{
    for(int i=0;i<n;i++){
      if(s[i]=='?' && s[i-1]=='B' && s[i+1]=='B'){
        s[i]='R';
      }
      //headptr
      else if(s[i]=='?' && i==0  && (idxA<idxB) && (idxA%2!=0)){
        s[i]='B';
      }
      else if(s[i]=='?' && i==0  && (idxA>idxB) && (idxB%2!=0)){
        s[i]='R';
      }
      else if(s[i]=='?' && i==0  && (idxA<idxB) && (idxA%2==0)){
        s[i]='R';
      }
      else if(s[i]=='?' && i==0  && (idxA>idxB) && (idxB%2==0)){
        s[i]='B';
      }
      //endptr
      else if(s[i]=='?' && i==n-1 && s[i-1]=='B'){
        s[i]='R';
      }
      else if(s[i]=='?' && i==n-1 && s[i-1]=='R'){
        s[i]='B';
      }
      else if(s[i]=='?' && s[i-1]=='R' && s[i+1]=='R'){
        s[i]='B';
      }
      else if(s[i]=='?' && s[i-1]=='R' && s[i+1]=='?'){
        s[i]='B';
      }
      else if(s[i]=='?' && s[i-1]=='B' && s[i+1]=='?'){
        s[i]='R';
      }
      else if(s[i]=='?' && s[i-1]=='B' && s[i+1]=='R'){
        s[i]='B';
      }
      else if(s[i]=='?' && s[i-1]=='R' && s[i+1]=='B'){
        s[i]='R';
      }
  
    }
    cout<<s<<endl;
  }
  
}

signed main()
{
  // solve();
  int t1;
  cin >> t1;
  for (int k11 = 1; k11 <= t1; k11++)
  {
    solve();
    // solve1();
  }
#ifndef ONLINE_JUDGE
  freopen("Error.txt", "w", stderr);
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  // se();

  return 0;
}
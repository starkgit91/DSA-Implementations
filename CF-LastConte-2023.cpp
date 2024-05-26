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

//CF Last R Q1

// void solve(){
//   int n,k;cin>>n>>k;
//   vector<int> vec(n);
//   // string s;cin>>s;
// //   vector<pair<int,int>> query(n,make_pair(0,0));
// //   priority_queue<pair<int,int>> pqueue;
// //   unordered_map<int,int> hashmap;
//   for(int i=0;i<n;i++) cin>>vec[i];
//   int count=1;
// //   sort(vec.rbegin(),vec.rend());
//   for(auto it:vec){
//     count *= it;
//   }
//   if(2023%count!=0){
//     cout<<"NO"<<endl;
//   }
//   else{
//     int rem = 2023/count;
//     if(k==1){
//       cout<<"YES"<<endl;
//       cout<<rem<<endl;
//     }
//     else{
//       cout<<"YES"<<endl;
//       cout<<rem<<" ";
//       for(int i=1;i<k;i++){
//         cout<<1<<" ";
//       }
//       cout<<endl;
//     }
   
//   }


// }

// CF Last R Q2

void solve2(){
  int n,k;cin>>n>>k;
//   vector<int> vec(n);
  // string s;cin>>s;
//   vector<pair<int,int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   for(int i=0;i<n;i++) cin>>vec[i];
//   int count=1;
//   sort(vec.rbegin(),vec.rend());
  if(n==1){
    int rem = k*k;
    cout<<rem<<endl;
    
  }
  else{
    if(__gcd(n,k)==1){
      cout<<n*k<<endl;
    }
    else{
      for(int i=2;i<=n;i++){
       if(i*i<=k){
        if(n%i==0 || k%i==0){
          cout<<i*k<<endl;
          break;
        }
       }
      }
    }
    
  }
}

// CF Round 921 div2 Q1

// void solve(){
//   int n,k;cin>>n>>k;
//   // vector<int> vec(n);
//   // vector<vector<int>> mat(3,vector<int>(3));
//   // vector<string> vec;
//   // string s;cin>>s;
//   // for(int i=0;i<n;i++) cin>>vec[i];
//   // fsort(vec);
//   // vector<int> query(m);
//   // loop(i,0,m) cin>>query[i];
//   // vector<pair<long long, long long>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   vector<int> dp;
//   int bot_trace=0;
//   // sort(vec.begin(),vec.end());
//   int count=0;
//   int ans = INT32_MAX;
//   bool flag=false;
//   // vector<vector<bool>> DP(3,vector<bool>(3,1));
//   string gen = "abcdefghijklmnopqrstuvwxyz";
//   string res;
//   if(n>=k){
//     loop(i,0,n){
//       res+=gen.substr(0,k);
//     }
//   }
//   else{
//     // int j=0;
//     loop(i,0,n){
//       res+= gen[i] + gen.substr(0,i) + gen.substr(i+1,k-i-1);

//     }
//   }
//   cout<<res<<endl;
// }

// CF Round 921 div2 Q2
// void solve(){
//   int x,n;cin>>x>>n;
//   // vector<int> vec(n);
//   // vector<vector<int>> mat(3,vector<int>(3));
//   // vector<string> vec;
//   // string s;cin>>s;
//   // for(int i=0;i<n;i++) cin>>vec[i];
//   // fsort(vec);
//   // vector<int> query(m);
//   // loop(i,0,m) cin>>query[i];
//   // vector<pair<long long, long long>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   vector<int> dp;
//   int bot_trace=0;
//   // sort(vec.begin(),vec.end());
//   int count=1;
//   int ans = INT32_MAX;
//   bool flag=false;
//   if (n == 1) {
//     cout<<x;
//     return;
//   }
//   // for(int i=x/n;i>=1;i--){
//   //   if(x%i==0){
//   //     int gcdf = x/i;
//   //     if(gcdf>=n){
//   //       count=i;
//   //       break;
//   //     }
//   //   }
//   // }
//   for(int i=1;i<=sqrt(x);i++){
//     if(x%i==0){
//       int gcdf = x/i;
//       int gcdr = i;
//       if(gcdf>=n){
//         count= max(count,gcdr);
//       }
//       if(gcdr>=n){
//         count=max(count,gcdf);
//       }
//     }
//   }
//   cout<<count<<endl;
// }
//CF Ed 161 Q1

// void solve(){
//   long long n;cin>>n;
//   //  vector<long long> vec(n);
//   string a,b,c;cin>>a>>b>>c;
//   // for(int i=0;i<n;i++) cin>>vec[i];
//   // vector<pair<long long, long long>> query(n,make_pair(0,0));
//   // priority_queue<pair<int ,int>> pqueue;
//   // unordered_map<int ,int> hashmap;
//   // unordered_set<int> sett;
//   // set<int> map;
//   // vector<long long> dp(n);
//   // for(int i=0;i<n;i++) cin>>dp[i];
//   long long bot_trace=0;
//   // long long res=0;
//   // long long count =0;
//   bool flag=false;
//   // vector<long long> dp(n);
//   // for(int i=0;i<n;i++) cin>>dp[i];
//   // sort(vec.begin(),vec.end());
//   // string tot = a+b;
//   long long sz = c.size();
//   for(int i=0;i<n;i++){
//     if(a[i]==b[i] && a[i]!=c[i]){
//       flag=true;
//     }
//     else if(a[i]!=c[i] && b[i]!=c[i]){
//       flag = true;
//     }
//   }
//   if(flag) cout<<"YES"<<endl;
//   else cout<<"NO"<<endl;
// }  


// CF Ed 161 Q2

// void solve(){
//   long long n;cin>>n;
//    vector<long long> vec(n+1,0);
//   // string a,b,c;cin>>a>>b>>c;
//   for(int i=0;i<n;i++){
//     int x;cin>>x;
//     vec[x]++;
//   }
//   vector<pair<long long, long long>> query(n,make_pair(0,0));
//   priority_queue<pair<int ,int>> pqueue;
//   unordered_map<int ,int> hashmap;
//   unordered_set<int> sett;
//   set<int> map;
//   // vector<long long> dp(n);
//   // for(int i=0;i<n;i++) cin>>dp[i];
//   // long long bot_trace=0;
//   long long res=0;
//   long long count =0;
//   bool flag=false;
  
//   // for(int i=0;i<n;i++) cin>>dp[i];
  
//   if(n<3){
//     cout<<0<<endl;
//   }
//   else{
//     vector<long long> dp;
//     dp=vec;
//     sort(dp.begin(),dp.end());
//     if(dp[n]==n){
//       long long x = n*(n-1)*(n-2)/6;
//       cout<<x<<endl;
//     }
//     else{
//       for(int i = 0; i <= n; i++){
//         long long y = vec[i];
//         res += (y*(y-1)*(y-2))/6;
//         res += ((y*(y-1))/2)*count;
//         count+=y;
//       }
//       cout<<res<<endl;
//     }

//   }



// }
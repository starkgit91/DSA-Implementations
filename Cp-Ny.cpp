

// void solve(){
//   int n,h,m;cin>>n>>h>>m;
//   vector<int> vec(n);
//   // string s;cin>>s;
//   vector<pair<int,int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   // for(int i=0;i<n;i++) cin>>vec[i];
// //   int count=0;
// //   sort(vec.rbegin(),vec.rend());
//   for(int i=0;i<n;i++){
//     cin>>query[i].first;
//     cin>>query[i].second;
//   }
//   sort(query.begin(),query.end());
//   bool flag = false;
//   for(auto it:query){
//     if(it.first>=h){
//       if(it.first==h && it.second>=m){
//         int x = it.first-h;
//         int y = it.second-m;
//         flag=true;
//         cout<<x<<" "<<y<<endl;
//         break;
//       }
//       if(it.first>h && it.second>=m){
//         int x = it.first-h;
//         int y = it.second-m;
//         flag=true;
//         cout<<x<<" "<<y<<endl;
//         break;
//       }
//       if(it.first>h && it.second<m){
//         int x = it.first-h-1;
//         int y = 60 + it.second-m;
//         flag=true;
//         cout<<x<<" "<<y<<endl;
//         break;
//       }
//     }
//   }
  
//   int x = query[0].first;
//   int y = query[0].second;
  
  
//   if(flag==false){
//     if(m<=y){
//       h = 24-h;
//       // if(y+m>60){
//       //   x = x+h;
//       //   y = y+m;
//       //   cout<<x<<" "<<y<<endl;
//       // }
//       // else{
//         x = x+h;
//         y=abs(y-m);
//         cout<<x<<" "<<y<<endl;
//       // }
//     }
//     else{
//       h=23-h;
//       m=60-m;
//       // if(y>m){
//         x = x+h;
//         y = y+m;
//         cout<<x<<" "<<y<<endl;
//       // }
//       // else{
//       //   x = x+h;
//       //   y=abs(y-m);
//       //   cout<<x<<" "<<y<<endl;
//       // }
//     }
//   }
  


// }

//MINECRAFT Vectorpair

// void solve(){
//   int n,m;cin>>n>>m;
//   vector<int> vec(n+1);
//   // string s;cin>>s;
//   vector<pair<int,int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   for(int i=1;i<=n;i++) cin>>vec[i];
//   int count=0;
// //   sort(vec.rbegin(),vec.rend());
//   vector<pair<int,int>> hitpoint(n+1,make_pair(0,0));
//   for(int i=0;i<m;i++){
//     cin>>query[i].first;
//     cin>>query[i].second;
//   }
//   int score=0;
//   for(int i=1;i<n;i++){
//     if(vec[i]>vec[i+1]){
//       score+=(vec[i]-vec[i+1]);      
//     }
//     hitpoint[i+1].first=score;
//   }
//   score=0;
//   for(int i=n;i>1;i--){
//     if(vec[i]>vec[i-1]){
//       score+=(vec[i]-vec[i-1]);
//     }
//     hitpoint[i-1].second=score;
//   }
//   // for(auto it=1;it<=n;it++) cout<<hitpoint[it].first<<" "<<hitpoint[it].second<<endl;
//   for(int i=0;i<m;i++){
//     if(query[i].first<query[i].second){
//       int damage = abs(hitpoint[query[i].first].first-hitpoint[query[i].second].first);
//       cout<<damage<<endl;
//     }
//     else{
//       int damage = abs(hitpoint[query[i].first].second-hitpoint[query[i].second].second);    
//       cout<<damage<<endl;
//     }
//   }
 
// }

// Symmetric Matrix

// void solve(){
//   int n,m;cin>>n>>m;
// //   vector<int> vec(n);
//   // string s;cin>>s;
//   vector<pair<int,int>> query(2*n);
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
// //   for(int i=1;i<=n;i++) cin>>vec[i];
//   int count=0;
// //   sort(vec.rbegin(),vec.rend());
// //   vector<pair<int,int>> hitpoint(n+1,make_pair(0,0));
//   for(int i=0;i<2*n;i++){
//     cin>>query[i].first;
//     cin>>query[i].second;
//   }
//   if(m%2!=0){
//     cout<<"NO"<<endl;
//   }
//   else{
//     bool flag=false;
//     for(int i=0;i<(2*n - 1);i++){
//       if(query[i].second==query[i+1].first){
//         cout<<"YES"<<endl;
//         flag = true;
//         break;
//       }
//       else{
//         i++; //floyd fast pointer
//       }
//     }
//     if(!flag) cout<<"NO"<<endl;
//   }
 
// }

//DENSE ARR

// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   // string s;cin>>s;
//   vector<pair<int,int>> query(2*n);
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   for(int i=0;i<n;i++) cin>>vec[i];
//   int count=0;
// //   sort(vec.rbegin(),vec.rend());
// //   vector<pair<int,int>> hitpoint(n+1,make_pair(0,0));
//   for(int i=0;i<n-1;i++){
//     int minx = min(vec[i],vec[i+1]);
//     int maxx = max(vec[i],vec[i+1]);
//     if((maxx/(double)minx)>2){
//       // cout<<maxx<<" "<<minx;
//       // cout<<maxx/(double)minx;
//       int expn = ceil(log2(maxx/(double)minx));
//       // cout<<expn<<endl;
//       expn--;
//       count+=expn;
//     }
//   }
//   cout<<count<<endl;
 
// }

// void solve1(){
//   int n;cin>>n;
//   int count=0;
//   while(count!=10){
//     n--;
//     if(n%3==0){
//       cout<<"First"<<endl;
//       break;
//     }
//     n+=2;
//     if(n%3==0){
//       cout<<"First"<<endl;
//       break;
//     }
//     else{
//       n--; //vova
//       count+=2;
//     }
//   }
//   if(count==10) cout<<"Second"<<endl;
// }








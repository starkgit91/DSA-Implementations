// CF Round 918 Q1

// void solve(){
//   // string a,b,c;cin>>a>>b>>c;
//   // if(a.find('?')!=string::npos==true){
//   //   bool c1 = a.find('A')!=string::npos;
//   //   bool c2 = a.find('B')!=string::npos;
//   //   bool c3 = a.find('C')!=string::npos;
//   //   if(c1==false){
//   //     cout<<'A'<<endl;
//   //   }
//   //   else if(c2==false){
//   //     cout<<'B'<<endl;
//   //   }
//   //   else if(c3==false){
//   //     cout<<'C'<<endl;
//   //   }
//   // }
//   // else if(b.find('?')!=string::npos==true){
//   //   bool c1 = b.find('A')!=string::npos;
//   //   bool c2 = b.find('B')!=string::npos;
//   //   bool c3 = b.find('C')!=string::npos;
//   //   if(c1==false){
//   //     cout<<'A'<<endl;
//   //   }
//   //   else if(c2==false){
//   //     cout<<'B'<<endl;
//   //   }
//   //   else if(c3==false){
//   //     cout<<'C'<<endl;
//   //   }
//   // }
//   // else if(c.find('?')!=string::npos==true){
//   //   bool c1 = c.find('A')!=string::npos;
//   //   bool c2 = c.find('B')!=string::npos;
//   //   bool c3 = c.find('C')!=string::npos;
//   //   if(c1==false){
//   //     cout<<'A'<<endl;
//   //   }
//   //   else if(c2==false){
//   //     cout<<'B'<<endl;
//   //   }
//   //   else if(c3==false){
//   //     cout<<'C'<<endl;
//   //   }
//   // }
//   int n;
//   cin>>n;
//   double x = sqrt(n);
//   if(floor(x)==x){
//     cout<<1;
//   }
//   else{
//     cout<<0;
//   }
// // vector<int> vec = {a,b,c};
  
// //   string s;cin>>s;
// //   vector<pair<int,int>> query(n,make_pair(0,0));
// //   priority_queue<pair<int,int>> pqueue;
// //   unordered_map<int,int> hashmap(n);
// //   for(int i=0;i<n;i++) cin>>vec[i];
// //   int count=0;
// }

// CF Round 918 Q2

// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
  
// //   string s;cin>>s;
// //   vector<pair<int,int>> query(n,make_pair(0,0));
// //   priority_queue<pair<int,int>> pqueue;
// //   unordered_map<int,int> hashmap(n);
//   for(int i=0;i<n;i++) cin>>vec[i];
//   int summ = accumulate(vec.begin(),vec.end(),0);
//   long double x = sqrt(summ);
//   if(floor(x)==x){
//     cout<<"YES"<<endl;
//   }
//   else{
//     cout<<"NO"<<endl;
//   }
// }

// CF Round 918 Q4

// void solve(){
//   int n;cin>>n;
// //   vector<int> vec(n);
//   string s;cin>>s;
//   string cons = "bcd";
//   string vow = "ae";
//   string out;
//   for(int it=1;it<n;it++){
//     if((s[it]=='a' || s[it]=='e') && (s[it+1]=='d' || s[it+1]=='b' || s[it+1]=='c') && (s[it+2]=='a' || s[it+2]=='e') ){
//       out.append(s.substr(it-1,2)+".");
//       it++;
//     }
//     else if((s[it]=='a' || s[it]=='e') && (s[it+1]=='d' || s[it+1]=='b' || s[it+1]=='c') && (s[it+2]=='d' || s[it+2]=='b' || s[it+2]=='c')){
//       out.append(s.substr(it-1,3)+".");
//       it+=2;
//     }
//     else if((s[it]=='a' || s[it]=='e') && (s[it+1]=='d' || s[it+1]=='b' || s[it+1]=='c') && it+2==n){
//       out.append(s.substr(it-1,3));
//       break;
//     }
//     else if((s[it]=='a' || s[it]=='e') && it+1==n){
//       out.append(s.substr(it-1,2));
//       break;
//     }

//   }
//   int sz = out.size();
//   // cout<<sz;
//   if(out[sz-1]=='.'){
//     out = out.substr(0,sz-1);
//   }
//   cout<<out<<endl;
// }

// CF Round 918 Q3

// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
  
// //   string s;cin>>s;
// //   vector<pair<int,int>> query(n,make_pair(0,0));
// //   priority_queue<pair<int,int>> pqueue;
// //   unordered_map<int,int> hashmap(n);
//   for(int i=0;i<n;i++) cin>>vec[i];
//   int summ = accumulate(vec.begin(),vec.end(),0);
//   int x = sqrtl(summ);
//   if(x*x==summ){
//     cout<<"YES"<<endl;
//   }
//   else{
//     cout<<"NO"<<endl;
//   }
// }

// void solve(){
//   int n;cin>>n;
//   vector<int> vec(2*n);
  
// //   string s;cin>>s;
// //   vector<pair<int,int>> query(n,make_pair(0,0));
// //   priority_queue<pair<int,int>> pqueue;
// //   unordered_map<int,int> hashmap(n);
//   for(int i=0;i<2*n;i++) cin>>vec[i];
// //   int summ = accumulate(vec.begin(),vec.end(),0);
//   sort(vec.begin(),vec.end());
//   int oct=0;
//   int ect =0;
//   for(auto it:vec){
//     if(it%2!=0) oct++;
//     else ect++;
//   }
//   if(oct==ect) cout<<"Yes"<<endl;
//   else cout<<"No"<<endl;
// }

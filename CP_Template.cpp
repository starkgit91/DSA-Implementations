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
#define allr(x) x.rbegin(),x.rend()
#define loop(it,b,c) for(int it=b;it<c;++it)
#define loope(it,b,c) for(int it=b;it<=c;++it)
#define loopl(a,b,c) for(long long a=b;a<c;a++)
#define fsort(v) sort(v.begin(),v.end())
#define rsort(v) sort(v.rbegin(),v.rend())
#define True(b) cout<<(b?"YES\n":"NO\n")
#define maxx(v) *max_element(v.begin(),v.end())
#define minx(v) *min_element(v.begin(),v.end())
#define search_fpair(query,num) find_if(query.begin()+i+1, query.end(), [&](const auto& pair)  { return pair.second == num; })!=query.end()
#define search_spair(query,num) find_if(query.begin()+i+1, query.end(), [&](const auto& pair)  { return pair.second == num; })!=query.end()
#define index_fpair(v,num) distance(v.begin(),find_if(v.begin(), v.end(), [&](const auto& pair)  { return pair.first == num; }))
#define index_spair(v,num) distance(v.begin(),find_if(v.begin(), v.end(), [&](const auto& pair)  { return pair.second == num; }))
#define vindex(vec,num) distance(vec.begin(),find(vec.begin(),vec.end(),num))
#define gsum(a) accumulate(a.begin(), a.end(), 0LL)
#define fastio
using i64=long long;

struct trei
{
    int s,k,ind;
};

// typedef pair<ll, ll> pi;



typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
// find_by_order, order_of_key
// To erase an element from ordered_set with less_equal I used lower_bound on
//  (element to be erased — 1) and then erased the iterator I got from lower_bound and it
//  works only if the element to be erased is present in the set.
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}
// void _print(set t){cerr<<t;}


template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
int MOD = 1e9 + 7;
int N1 = 1e9 + 7;
int inf = 1e18;

/******************************************/
int reverseBits(int z) {int rev = 0; int n = z; while (n > 0) {rev <<= 1; if (n & 1 == 1)rev ^= 1; n >>= 1;} return rev;}
int strtoint(const string &s) {int n = s.length(); int num = 0; for (int i = 0; i < n; i += 1) num = num * 10 + (s[i] - '0'); return num;}
string inttostr(int n) {string s; if (n < 10) {s.pb('0' + n); return s;} s = inttostr(n / 10); s.pb('0' + n % 10); return s;}
int gcd(int a, int b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
int expo(int a, int b, int mod) {int res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extendgcd(int a, int b, int*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); int x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
int lcm(int a, int b) {return (a * b) / gcd(a, b);}
int countDivisors(int n) {int cnt = 0; for (int i = 1; i <= sqrt(n); i++) {if (n % i == 0) {if (n / i == i)cnt++; else cnt = cnt + 2;}} return cnt;}

int mminv(int a, int b) {int arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
int mminvprime(int a, int b) {return expo(a, b - 2, b);}
bool revsort(int a, int b) {return a > b;}
int combination(int n, int r, int m, int *fact, int *ifact) {int val1 = fact[n]; int val2 = ifact[n - r]; int val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
void google(int t) {cout << "Case #" << t << ": ";}
vector<int> primeFactors(int n) {vector<int>ret; while (n % 2 == 0) {ret.pb(2); n = n / 2;} for (int i = 3; i <= sqrt(n); i = i + 2) {while (n % i == 0) {ret.pb(i); n = n / i;}} if (n > 2) {ret.pb(n);} return ret;}
// vector<int> prime(int n) {int*arr = new int[n + 1](); vector<int> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = ((int)(i) * (int)(i)); j <= n; j += i)arr[j] = 1;} return vect;}
vector<int>divisor(int n) {vector<int>res; for (int i = 1; i <= sqrt(n); i++) {if (n % i == 0) {if (n / i == i)res.pb(i); else {res.pb(i); res.pb(n / i);} }} return res;}
vector<int>sieve() {int MAXN = 1e7; vector<int>spf(MAXN); spf[1] = 1; for (int i = 2; i < MAXN; i++)spf[i] = i; for (int i = 4; i < MAXN; i += 2)spf[i] = 2; for (int i = 3; i * i < MAXN; i++) {if (spf[i] == i) {for (int j = i * i; j < MAXN; j += i)if (spf[j] == j)spf[j] = i;}} return spf;}
int countnumber(int n) {int cnt = 0; while (n > 0) {cnt++; n /= 10;} return cnt;}
// vector<int>countSmainterRight(vector<int>arr){pbds s;int n = arr.size();vector<int> ans;for (int i = n - 1; i >= 0; i--) {if (i == n - 1) { ans.push_back(0);}else {ans.push_back(s.order_of_key({ arr[i], i }));}s.insert({ arr[i], i });}reverse(ans.begin(), ans.end());return ans;}
int mod_add(int a, int b, int m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
int getupper(int k) {int x = 8 * k + 1; int sqr = sqrt(x); if ((sqr * sqr) == x) {sqr--; return (sqr / 2);} sqr--; return (sqr / 2) + 1;}
int get2upper(int n, int rem) {int a = (2 * n) + 1; int s = ((4 * n * n) + (4 * n) + 1) - (8 * rem); int sqr = sqrt(s); if ((sqr * sqr) == s) {return ((a - sqr) / 2) - 1;} sqr++; return ((a - sqr) / 2);}
int mod_mul(int a, int b, int m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
int mod_sub(int a, int b, int m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
int mod_div(int a, int b, int m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
int modPower(int x, int y) {int res = 1; x = x % MOD; if (x == 0)return 0; while (y > 0) {if (y & 1)res = (res * x) % MOD; y = y / 2; x = (x * x) % MOD;} return res;}
int phin(int n) {int number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (int i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))
int modFact(int n) {if (n >= MOD)return 0; int result = 1; for (int i = 1; i <= n; i++)result = (result * i) % MOD; return result;}
int power(int x, int y) {int res = 1; while (y > 0) {if (y & 1)res = res * x; y = y >> 1; x = x * x;} return res;}
int negMOD(int x) {x = -x; int s = x / MOD; if (x % MOD)s++; return (MOD * s) - x;}
void precision(int a) {cout << setprecision(a) << fixed;}
/*prime-O(n*log(log(n)));
 smaintest prime factor-O(log(n));
 a%(b+c)=0 <=> a%c = b%c */
// string bin=bitset<32>(x).to_string();
// struct Cmp{
//   bool operator()(pair<int,int> &v1,pair<int,int> &v2)
//    {
//     if(v1.ff<v2.ff) return true;
//     else if(v1.ff==v2.ff && v1.ss>v2.ss) return true;
//     else return false;
// }
// };
// to find index in Vec Pair--  auto idx = distance(query.begin(),find_if(query.begin(), query.end(), [&](const auto& pair)  { return pair.first == vec[i]; }));
// to find Index-- distance(vec.begin(),find(vec.begin(),vec.end(),num));
// to check no.present -- find(vec.begin(),vec.end(),0)!=vec.end() [unsorted]
// to check no. -- binary_search(vec.begin(),vec.end(),0)   [sorted]
// Merge two vectors: ->> 
// vector<int> dp(nums1.size()+nums2.size());
// merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),dp.begin());
// nums1.insert(nums1.end(),nums2.begin(),nums2.end());
// to create hashmap- unordered_map<int,int> hashmap(n);
// for mapping of hashmap- hashmap[vec[i]]=i;
// to insert in hashmap- hashmap.insert(vec[i],i);
// to cout hashmap- for(auto it:hashmap) cout<<it.first<<" "<<hashmap.second;
// to sort hashmap-
// vector<pair<int,int>> map(n);
// unordered_map<int,int>::iterator it;
// for(auto it=hashmap.begin();it!=hashmap.end();i++){
//   map.push_back(make_pair(it->first,it->second));
// }
// sort(map.begin(),map.end());
// unordered_map<int,int> hashmap(n);
// map<int,int> hshmap(pair<int,int>);
// vector<int> temp = vec1;
// vector<int> flip(n);
// for (int i = 0; i < n; i++)
// {
//   // int idx = distance(vec1.begin(),find(vec1.begin(),vec1.end(),temp[i]));
//   hashmap[vec1[i]]=i; //mapping
//   // hashmap.insert(vec2[i],i);
// }
// for(auto it:hashmap){
//   cout<<it.first<<" "<<it.second<<endl;
// }
// vector<pair<int,int>> map;
// unordered_map<int,int>::iterator it;
// for(auto it=hashmap.begin();it!=hashmap.end();it++){
//   map.push_back(make_pair(it->first,it->second));
// }
// sort(map.begin(),map.end());
// for(auto it=0;it<n;it++){
//   cout<<map[it].first<<" "<<map[it].second<<endl;
// }
// for (int i = 0; i < n; i++)
// {
//   int idx = map[i].second;
//   flip[idx] = vec2[i];
// }

//To Reverse hashmap-->
// auto it1=hmap.begin();
  // it1--;
  // auto it2=hmap.end();
  // it2--;
  // for(auto it=it2;it!=it1;it--){
  //   cout<<it->first<<"-"<<endl;
  // }
  // for(auto it:hmap) cout<<it.first<<"-"<<it.second<<endl;
// set<int> map;
  // int count=0;
  // for(int i=0;i<n;i++){
  //   map.insert(s[i]-'a');
  //   count+=map.size();
  // }
  // cout<<count<<endl;
// int y = (int)(log2(rem));
// cout<<bitset<64>(rem).to_string().substr(64-y-1)<<endl; // dec to binary
// int x = floor(log10(n)+1); //no of digits in integer;

/*--------------------------------------LETSSSS GRINDDDD------------------------------------------------------------------------------------*/

// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   for(int i=0;i<n;i++) cin>>vec[i];
//   // string s;cin>>s;
//   // int x = 100000;
//   // vector<pair<int, int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_map<int,int>hmap;
//   unordered_set<int> sett;
//   vector<int> dp;
//   queue<int> que;
//   // sort(vec.begin(),vec.end());
//   int count=0;
//   int cnt=0;
//   bool flag=false;
//   bool flg = false;
//   int res=0;
//   int ans;
//   // vector<vector<int>> mat(n,vector<int>(n));
//   for(auto i=n-1;i>=0;i--){
//     if(vec[i]==1){
//       cnt=i;
//       break;
//     }
//   }
//   for(auto i=0;i<n;i++){
//     if(vec[i]==1){
//       res=i;
//       break;
//     }
//   }
//   int idx =cnt;
//   cout<<idx<<" "<<res<<endl;
//   for(int i=res+1;i<idx;i++){
//     if(vec[i]==0){
//       count++;
//       cnt=i;
//     }  
//   }
//   cout<<count<<endl;
  
// }

// void solve(){
//   int n,m;cin>>n>>m;
//   // vector<int> vec(n);
//   // for(int i=0;i<n;i++) cin>>vec[i];
//   // string s;cin>>s;
//   // int x = 100000;
//   // vector<pair<int, int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_map<int,int>hmap;
//   unordered_set<int> sett;
//   vector<int> dp;
//   queue<int> que;
//   // sort(vec.begin(),vec.end());
//   int count=0;
//   int cnt=0;
//   bool flag=false;
//   bool flg = false;
//   int res=0;
//   int ans;
//   vector<vector<int>> mat(n,vector<int>(2*m));
//   loop(i,0,n){
//     loop(j,0,2*m){
//       cin>>mat[i][j];
//       if(j%2==0){
//         flag=false;
//       }
//       if(mat[i][j]==1 && flag==false){
//         count++;
//         flag=true;
//       }
//     }
//     flag=false;
//   }
//   cout<<count<<endl;
// }

// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   for(int i=0;i<n;i++) cin>>vec[i];
//   // string s;cin>>s;
//   // int x = 100000;
//   int m;cin>>m;
//   vector<pair<int, int>> query(m,make_pair(0,0));
//   loop(i,0,m){
//     cin>>query[i].first>>query[i].second;
//   }
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_map<int,int>hmap;
//   unordered_set<int> sett;
//   vector<int> dp;
//   queue<int> que;
//   // sort(vec.begin(),vec.end());
//   int count=0;
//   int cnt=0;
//   bool flag=false;
//   bool flg = false;
//   int res=0;
//   int ans;
//   // vector<vector<int>> mat(n,vector<int>(2*m));
//   for(int i=0;i<m;i++){
//     int x = query[i].first;
//     int y = query[i].second;
//     cnt = vec[x-1];
//     vec[x-1]=0;
//     if(x-1>0){
//       vec[x-2]+=(y-1);
//     }
//     if(x<n){
//       vec[x]+=(cnt-y);
//     }
//   }
//   for(auto it:vec){
//     cout<<it<<endl;
//   }
// }

// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   for(int i=0;i<n;i++) cin>>vec[i];
//   // string s;cin>>s;
//   // int x = 100000;
//   // vector<pair<int, int>> query(m,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_map<int,int>hmap;
//   unordered_set<int> sett;
//   vector<int> dp;
//   queue<int> que;
//   // sort(vec.begin(),vec.end());
//   int count=0;
//   int cnt=1e9;
//   bool flag=false;
//   bool flg = false;
//   int res=0;
//   int ans;
//   // vector<vector<int>> mat(n,vector<int>(2*m));
//   loop(i,0,n){
//     loop(j,0,vec[i]){
//       int x;cin>>x;
//       count+=x;
//     }
//     res = vec[i]*15;
//     count*=5;
//     cnt = min(cnt,(count+res));
//     count=0;
//   }
//   cout<<cnt<<endl;
// }

// void solve(){
//   int n,p,q;cin>>n>>p>>q;
//   vector<int> vec(n);
//   // for(int i=0;i<n;i++) cin>>vec[i];

//   //using kinematics
//   long double l_norm = (p*n)/(double)(p+q);
//   cout<<setprecision(4)<<fixed;
//   cout<<l_norm<<endl;
// }

// void solve(){
//   int n,m;cin>>n>>m;
//   vector<int> vec;
//   // for(int i=0;i<n;i++) cin>>vec[i];
//   // string s;cin>>s;
//   // int x = 100000;
//   // vector<pair<int, int>> query(m,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_map<int,int>hmap;
//   unordered_set<int> sett;
//   vector<int> dp;
//   queue<int> que;
//   // sort(vec.begin(),vec.end());
//   int count=0;
//   int cnt=1;
//   bool flag=false;
//   bool flg = false;
//   int res=0;
//   int ans;
//   // vector<vector<int>> mat(n,vector<int>(2*m));
//   while(n>0){
//     int x = n%3;
//     n/=3;
//     vec.push_back(x);
//   }
//   while(m>0){
//     int y = m%3;
//     m/=3;
//     dp.push_back(y);
//   }
//   if(vec.size()<dp.size()){
//     while(vec.size()<dp.size()){
//       vec.push_back(0);
//     }
//   }
//   else{
//     while(vec.size()>dp.size()){
//       dp.push_back(0);
//     }
//   }
//   vector<int> ternarylogic;
//   for(auto i=0;i<vec.size();i++){
//     int rem = (dp[i]-vec[i]+3)%3;
//     ternarylogic.push_back(rem);
//   }
  
//   for(auto it:ternarylogic){
//     cout<<it<<" ";
//     count += it*cnt;
//     cnt*=3;
//   }
//   cout<<count<<endl;

// }


 
// void solve(){
//   int n,k;cin>>n>>k;
//   vector<int> vec(n); // hitpoint
//   for(int i=0;i<n;i++) cin>>vec[i];
//   vector<int> location(n);
//   for(int i=0;i<n;i++) cin>>location[i];
//   // string s;cin>>s;
//   // int x = 100000;
//   vector<pair<int, int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_map<int,int>hmap;
//   unordered_set<int> sett;
//   vector<int> dp(n+1,0);
//   queue<int> que;
//   // sort(vec.begin(),vec.end());
//   int count=0;
//   int cnt=0;
//   bool flag=false;
//   bool flag2 = false;
//   int res=0;
//   int extra=0;
//   // vector<vector<int>> mat(n,vector<int>(2*m));
//   for(int i=0;i<n;i++){
//     dp[abs(location[i])] += vec[i]; 
//     // count hp for same index on both side of axis;
//   }
//   for(int i=1;i<=n;i++){
//     if(dp[i]>k+extra){
//       flag=true;
//       break;
//     }
//     extra = k+extra - dp[i];
//   }
//   True(!flag);
 
// }





// void solve(){
//   int n,a;cin>>n>>a;
//   vector<int> vec(n); // hitpoint
//   for(int i=0;i<n;i++) cin>>vec[i];
//   // string s;cin>>s;
//   // int x = 100000;
//   vector<pair<int, int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_map<int,int>hmap;
//   unordered_set<int> sett;
//   vector<int> dp(n+1,0);
//   queue<int> que;
//   // sort(vec.begin(),vec.end());
//   int count=0;
//   int cnt=0;
//   bool flag=false;
//   bool flag2 = false;
//   int res=0;
//   int extra=0;
//   // vector<vector<int>> mat(n,vector<int>(2*m));
//   int limit = 2*(a-1);
//   int strt = 0;
//   if((a-1)>=n/2){
//     limit = n-1;
//     strt = (2*a)-n-1;
//   }
//   if(vec[a-1]==1){
//     count++;
//   }
//   for(auto i = strt; i<a-1; i++)
//   {
//     if(vec[i]==1 && vec[i]==vec[limit-cnt]){
//       count+=2;
//     }
//     cnt++;
//   }
//   if(strt==0){
//     for(int i=limit+1;i<n;i++){
//       if(vec[i]==1){
//         count++;
//       }
//     }
//   }
//   else if(strt!=0){
//     for(int i=0;i<strt;i++){
//       if(vec[i]==1){
//         count++;
//       }
//     }
//   }
//   cout<<count<<endl;

// }


// void solve(){
//   // int n,a;cin>>n>>a;
//   vector<int> vec(5); // hitpoint
//   for(int i=0;i<5;i++) cin>>vec[i];
//   // string s;cin>>s;
//   // int x = 100000;
//   // vector<pair<int, int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_map<int,int>hmap;
//   unordered_set<int> sett;
//   vector<int> dp(120,0);
//   queue<int> que;
//   // sort(vec.begin(),vec.end());
//   int count=0;
//   int cnt=0;
//   bool flag=false;
//   bool flag2 = false;
//   int res=0;
//   int ans=0;
//   // vector<vector<int>> mat(n,vector<int>(2*m));
//   // fsort(vec);
//   for(int i=0;i<5;i++){
//     //freq count
//     cnt+=vec[i];
//     dp[vec[i]]++;
//   }
//   count=cnt;
//   for(int i=0;i<5;i++){
//     if(dp[vec[i]]==2){
//       count = min(count,cnt-vec[i]*2);
//     }
//     else if(dp[vec[i]]>2){
//       count = min(count,cnt-vec[i]*3);
//     }
//   }
//   cout<<count<<endl;
// }


// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n); // hitpoint
//   for(int i=0;i<n;i++) cin>>vec[i];
//   // string s;cin>>s;
//   // int x = 100000;
//   // vector<pair<int, int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_map<int,int>hmap;
//   unordered_set<int> sett;
//   vector<int> dp;
//   queue<int> que;
//   // sort(vec.begin(),vec.end());
//   int count=0;
//   int cnt=0;
//   bool flag=false;
//   bool flag2 = false;
//   int res=0;
//   int ans=0;
//   // vector<vector<int>> mat(n,vector<int>(2*m));
//   cnt = minx(vec);
//   count = maxx(vec);
//   res = vindex(vec,cnt);
//   ans = vindex(vec,count);
//   if(ans>=n/2 && res>=n/2){
//     cout<<max(ans,res);
//   }
//   else if(ans>=n/2 && res<n/2){
//     cout<<max(ans,n-1-res)<<endl;
//   }
//   else if(ans<n/2 && res>=n/2){
//     cout<<max(res,n-1-ans)<<endl;
//   }
//   else if(ans<n/2 && res<n/2){
//     cout<<(n-1-min(ans,res))<<endl;
//   }
// }
// void solve(){
//   // int n;cin>>n;
//   vector<int> vec(5); // hitpoint
//   for(int i=0;i<5;i++) cin>>vec[i];
//   vector<int> vec1(5);
//   for(int i=0;i<5;i++) cin>>vec1[i];
//   int h,k;cin>>h>>k;
//   // string s;cin>>s;
//   // int x = 100000;
//   // vector<pair<int, int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_map<int,int>hmap;
//   unordered_set<int> sett;
//   vector<int> dp;
//   queue<int> que;
//   // sort(vec.begin(),vec.end());
//   double count=0;
//   double cnt=0;
//   bool flag=false;
//   bool flag2 = false;
//   int res=0;
//   int ans=0;
//   // vector<vector<int>> mat(n,vector<int>(2*m));
//   for(int i=0;i<5;i++){
//     int max_bt = (i+1)*500;
//     cnt = max(0.3*max_bt,(1-(vec[i]/(double)250))*max_bt - 50*vec1[i]);
//     count += cnt;
//   }
//   count += (h*100 - k*50);
//   cout<<count<<endl;
// }

// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n); // hitpoint
//   // for(int i=0;i<n;i++) cin>>vec[i];
//   // string s;cin>>s;
//   // int x = 100000;
//   // vector<pair<int, int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_map<int,int>hmap;
//   unordered_set<int> sett;
//   vector<int> dp;
//   queue<int> que;
//   // sort(vec.begin(),vec.end());
//   int count=0;
//   int cnt=0;
//   bool flag=false;
//   bool flag2 = false;
//   int res=0;
//   int ans=0;
//   vector<vector<int>> mat(n,vector<int>(4,0));
//   loop(i,0,n){
//     loop(j,0,4){
//       cin>>mat[i][j];
//     }
//   }
//   loop(i,0,n){
//     int speed=mat[i][0];
//     int ram = mat[i][1];
//     int hdd= mat[i][2];
//     loop(j,0,n){
//       if(i!=j && speed<mat[j][0] && ram<mat[j][1] && hdd<mat[j][2]){
//         dp.push_back(i);
//         break;
//       }
//     }
//   }
//   vector<int> conclus;
//   loop(i,0,n){
//     if(binary_search(all(dp),i)==false){
//       conclus.push_back(mat[i][3]);
//     }
//   }
//   int minn = minx(conclus);
//   loop(i,0,n){
//     if(minn==mat[i][3]){
//       cout<<i+1<<endl;
//       return;
//     }
//   }

// }

// void solve(){
//   // int n;cin>>n;
//   // vector<int> vec(n); // hitpoint
//   // for(int i=0;i<n;i++) cin>>vec[i];
//   string s;cin>>s;
//   // int x = 100000;
//   // vector<pair<int, int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_map<int,int>hmap;
//   unordered_set<int> sett;
//   vector<int> dp;
//   queue<int> que;
//   // sort(vec.begin(),vec.end());
//   int count=0;
//   int cnt=0;
//   bool flag=false;
//   bool flag2 = false;
//   int res=0;
//   int ans=0;
//   // vector<vector<int>> mat(n,vector<int>(n,0));
//   int n = s.size();
//   int pivot = s.find("^");
//   for(int i=pivot;i>=0;i--){
//     if(s[i]!='='){
//       int force = (s[i]-48)*(pivot-i);
//       count+=force;
//     }
//   }
//   for(int i=pivot;i<n;i++){
//     if(s[i]!='='){
//       int force = (s[i]-48)*(i-pivot);
//       cnt+=force;
//     }
//   }
//   if(cnt>count){
//     cout<<"right"<<endl;
//     return;
//   }
//   if(cnt<count){
//     cout<<"left"<<endl;
//     return;
//   }
//   if(cnt==count){
//     cout<<"balance"<<endl;
//     return;
//   }
// }

//Div 2 CF Round 930
// void solve(){
//   int n;cin>>n;
//   // vector<int> vec(n); // hitpoint
//   // for(int i=0;i<n;i++) cin>>vec[i];
//   // string s;cin>>s;
//   // int x = 100000;
//   // vector<pair<int, int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_map<int,int>hmap;
//   unordered_set<int> sett;
//   vector<int> dp;
//   queue<int> que;
//   // sort(vec.begin(),vec.end());
//   int count=0;
//   int cnt=0;
//   bool flag=false;
//   bool flag2 = false;
//   int res=0;
//   int ans=0;
//   // vector<vector<int>> mat(n,vector<int>(n,0));
//   if(n<2){
//     cout<<1<<endl;
//     return;
//   }
//   int len = (log2(n));
//   count = power(2,len);
//   cout<<count<<endl;
// }

// void solve(){
//   int n;cin>>n;
//   // vector<int> vec(n); // hitpoint
//   // for(int i=0;i<n;i++) cin>>vec[i];
//   string s,f;cin>>s>>f;
//   // int x = 100000;
//   // vector<pair<int, int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_map<int,int>hmap;
//   unordered_set<int> sett;
//   vector<int> dp;
//   queue<int> que;
//   // sort(vec.begin(),vec.end());
//   int count=1;
//   int cnt=0;
//   bool flag=false;
//   bool flag2 = false;
//   // int res=0;
//   int ans=0;
//   // vector<vector<int>> mat(n,vector<int>(n,0));
//   // bool d = lexicographical_compare(f.begin(),f.end(),s.begin(),s.end());
  
//   // cout<<d<<endl;
//   string s1 = s[0] + f;
//   string res;
//   for(int i=1;i<n;i++){
//     // lexicographical_compare(s1.begin(),s1.end(),s2.begin(),s2.end())==false
//     if(s[i] > f[i-1]){
//       break;
//     }
//     cnt = i;
//     s1[i] = s[i];
//   }
//   res = s1;
//   for(int i=cnt;i>0;i--){
//     if(s[i] == f[i-1]){
//       count++;
//     }
//     else{
//       break;
//     }
//   }
//   // cout<<cnt<<endl;
//   // string res1 = s.substr(0,dp[0]+1) + f.substr(dp[0],n-dp[0]);
//   cout<<res<<endl;
//   cout<<count<<endl;
//   debug(count);

// }

vector<int> dp(30);
void fill(){
  for(int i=1;i<30;i++){
    dp[i]=dp[i-1]+1;
    if(i>=15){
      dp[i] = min(dp[i],dp[i-15]+1);
    }
    if(i>=10){
      dp[i] = min(dp[i],dp[i-10]+1);
    }
    if(i>=6){
      dp[i] = min(dp[i],dp[i-6]+1);
    }
    if(i>=3){
      dp[i] = min(dp[i],dp[i-3]+1);
    }
  }
}
void solve(){
  int n;cin>>n;
  // // string s,f;cin>>s>>f;
  // int t1,m1,t2,m2;
  // scanf("%d:%d",&t1,&m1);
  // vector<int> vec(n); // hitpoint
  // for(int i=0;i<n;i++) cin>>vec[i];
  // int x = 100000;
  // vector<pair<int, int>> query(3,make_pair(0,0));
  priority_queue<pair<int,int>> pqueue;
  unordered_map<int,int> hashmap;
  unordered_map<int,int>hmap;
  unordered_set<int> sett;
  vector<int> dp;

  queue<int> que;
  // sort(vec.begin(),vec.end());
  int count=0;
  int cnt=0;
  bool flag=false;
  bool flag2 = false;
  int res=0;
  int cnt2=0;
  // int res;
  // // vector<vector<int>> mat(n,vector<int>(n,0));
  if(n<30){
    cout<<dp[n]<<endl;
    return;
  }
  cnt = n/15; // no of coins of 15;
  count= cnt-1; // one less
  res = n%15; // remaining coins
  cnt+=dp[res]; //#15+rem coins
  res+=15;      // rem coins with one extra(+15)
  count+=dp[res]; //#15+rem coins with one extra
  debug(cnt)
  debug(count)
  cout<<min(cnt,count)<<endl;

}
signed main()
{
#ifndef ONLINE_JUDGE
  freopen("Error.txt", "w", stderr);
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  fastio;
  // se();
  // solve();
  // Solution stark;
  // vector<int> nums = {2,0,3,8,1,4,5,9,8,7};
  // int res = stark.findDuplicate(nums);
  // cout<<res;
  fill();
  int t1;
  cin >> t1;
  for (int k11 = 1; k11 <= t1; k11++)
  {
    solve();
    // auto end = chrono::steady_clock::now();
    // auto diff = end-start;
    // cout<<chrono::duration<double,milli>(diff).count()<<endl;
    // solve1();
  }

  return 0;
}

// #include<bits/stdc++.h>

// using namespace std;

// signed main(){
//     int n,m;
//     cin>>n>>m;
//     int y = 6;
//     int  v = __gcd(m,n);
//     cout<<v<<endl;
//     if(m==n){
//         if(6-m==0 || 6-n==0){
//             cout<<1<<"/"<<6;
//         }
//         else if(6-m==5 || 6-n==5){
//             cout<<1<<"/"<<1;
//         }
//         else{
//             int x = 6-m+1;
//             int y = 6;
//             for(int i=2;i<=3;i++){
//                 if(x%i==0 && y%i==0){
//                     x = x/i;
//                     y = y/i;
//                 }
//             }
//             cout<<x<<"/"<<y;
//         }
//     }
//     else{
//         if(m>n){
//             int x = 6-m+1;
//             for(int i=2;i<=3;i++){
//                 if(x%i==0 && y%i==0){
//                     x = x/i;
//                     y = y/i;
//                 }
//             }
//             cout<<x<<"/"<<y;
//         }
//         else{
//             int x = 6-n+1;
//             for(int i=2;i<=3;i++){
//                 if(x%i==0 && y%i==0){
//                     x = x/i;
//                     y = y/i;
//                 }
//             }
//             cout<<x<<"/"<<y;
//         }
        
//     }
//     return  0;
// }

// #include<bits/stdc++.h>

// using namespace std;

// signed main(){
//     int t;
//     cin>>t;
//     vector<int> result;
//     while(t--){
//         int n;
//         cin>>n;
//         if(n<=3){
//             result.push_back(1);
//         }
//         else{
//             if(n%2==0){
//                 int hcf = __gcd(n,n/2);
//                 result.push_back(hcf);
//             }
//             else{
//                 int hcf = __gcd(n-1,(n-1)/2);
//                 result.push_back(hcf);
//             }
//         }
//     }
//     for (int i = 0; i < result.size(); i++)
//     {
//         cout<<result[i];
//     }

//     return  0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//   vector<int> maxSlidingWindow(vector<int>& nums, int k){
//     vector<int> slidevector;
//     priority_queue<pair<int,int>> pq;
//     if(nums.size()==k) return {*max_element(nums.begin(),nums.end())};
//     if(k==1) return nums;
//     for(int i=0;i<nums.size();i++){
//         while(!pq.empty() && pq.top().second<i-k+1){
//             pq.pop();
//         }
//         pq.push({nums[i],i});
//         if(i>=k-1){
//             slidevector.push_back(pq.top().first);
//         }
//     }
//     // else{
//     //     for(int i=0;i<nums.size()-k+1;i++){
//     //         int x = *max_element(nums.begin()+i,nums.begin()+i+k);
//     //         slidevector.push_back(x);
//     //     } 
//     // }
//     return slidevector;  
    
//     // vector<int> slidevector;
//     // if(nums.size()==k) return {*max_element(nums.begin(),nums.end())};
//     // if(k==1) return nums;
//     // else{
//     //     for(int i=0;i<nums.size()-k+1;i++){
//     //         int x = *max_element(nums.begin()+i,nums.begin()+i+k);
//     //         slidevector.push_back(x);
//     //     }
        
//     // }
//     // return slidevector;
//   }
// };
// int main(){
//     vector<int> nums = {1,3,-1,-3,5,3,6,7};
//     int k = 3;
//     // cout<<*max_element(arr.begin(),arr.begin()+2);
//     Solution stark;
//     vector<int> res = stark.maxSlidingWindow(nums,k);
//     for (size_t i = 0; i < nums.size()-k+1; i++)
//     {
//         cout<<res[i]<<" ";
//     }
    
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//     int maxsum(vector<int> &a,vector<int> &b, int n, int k){
//         int initial_sum = 0;
//         if(k==0) return accumulate(a.begin(),a.end(),initial_sum);
//         sort(a.begin(),a.end());
//         sort(b.begin(),b.end());
//         int swapcounter = 0;
//         for(int i=0;i<n;i++){
//             if(swapcounter<k){
//                 if(a[i]<b[n-i-1]){
//                     int x = a[i];
//                     a[i] = b[n-i-1];
//                     b[n-i-1] = x;
//                 }
//             }
//             swapcounter++;
//         }
//         return accumulate(a.begin(),a.end(),initial_sum);
//     }
// };
// signed main(){
//     int t;
//     cin>>t;
//     vector<int> result;
//     while(t--){
//         int n,k;
//         cin>>n;
//         cin>>k;
//         vector<int> a(n);
//         vector<int> b(n);
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//         }
//         for(int j=0;j<n;j++){
//             cin>>b[j];
//         }
//         Solution stark;
//         int res = stark.maxsum(a,b,n,k);
//         result.push_back(res);
//     }
//     for (int i = 0; i < result.size(); i++)
//     {
//         cout<<result[i]<<endl;
//     }
    
//     return 0;
// }


// #include<bits/stdc++.h>
// // using namespace std;

// // class Solution{
// //     public:
// //     string isSquareString(string s){
// //         string str1 = s.substr(0,floor(s.size()/2));
// //         string str2 = s.substr(floor(s.size()/2),floor(s.size()/2)+1);
// //         if(str1==str2) return "YES";
// //         else return "NO";
// //     }
        
// // };
// // signed main(){
// //     int t;
// //     cin>>t;
// //     vector<string> result;
// //     while(t--){
// //         string s;
// //         cin>>s;
// //         Solution stark;
// //         string res = stark.isSquareString(s);
// //         result.push_back(res);
// //     }
// //     for (int i = 0; i < result.size(); i++)
// //     {
// //         cout<<result[i]<<endl;
// //     }
// //     return 0;
// // }


// #include<bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//     string isPrime(int n, int m){
//         if(m<10){
//             if(m==7 || m== 5 || m==3){
//                 if(m-n==1 || m-n==2) return "YES";
//                 else return "NO";
//             }
//             else return "NO";
//         } 
//         else{
//             if(10<m<20 && n<20){
//                 if(m%9!=0 && m%8!=0 && m%7!=0 && m%6!=0 && m%5!=0){
//                     if(m-n==2 || m-n==4) return "YES";
//                     else return "NO";
//                 }
//                 else return "NO";
//             }
//             if(20<=m<30 && n<30){
//                 if(m%9!=0 && m%8!=0 && m%7!=0 && m%6!=0 && m%5!=0){
//                     if((m-n==2) || (m-n==4) || (m-n==6)) return "YES";
//                     else return "NO";
//                 }
//                 else return "NO";
//             }
//             if(30<=m<40 && n<40){
//                 if(m%9!=0 && m%8!=0 && m%7!=0 && m%6!=0 && m%5!=0 && m%3!=0){
//                     if(m-n==2 || m-n==4 || m-n==6) return "YES";
//                     else return "NO";
//                 }
//                 else return "NO";
//             }
//             if(40<=m<50 && n<50){
//                 if(m%9!=0 && m%8!=0 && m%7!=0 && m%6!=0 && m%5!=0 && m%3!=0){
//                     if(m-n==2 || m-n==4 || m-n==6) return "YES";
//                     else return "NO";
//                 }
//                 else return "NO";
//             }
//             else return "NO";
//         }        
//     }
        
// };
// signed main(){
//     int n,m;
//     cin>>n;
//     cin>>m;
//     Solution stark;
//     string res = stark.isPrime(n,m);
//     cout<<res;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// auto start = chrono::steady_clock::now();
// int main(){
    
//     auto end = chrono::steady_clock::now();
//     auto diff = end-start;
//     cout<<chrono::duration<double,milli>(diff).count()<<endl;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// void solve() {
// int n,m;cin>>n>>m;
// int count = 0;
// while(true){
//     if(n%m==0){
//     cout<<count<<endl;
//     break;}
//     else{
//         n++;
//     count++;}
// }
// }

// signed main(){
//     int t;
//     cin>>t;
//     for(int i=1;i<=t;i++){
//         solve();
//     }
//     return 0;
// }




// #include<bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// using namespace std;
// using namespace __gnu_pbds;


// #define int long long
// #define ll long longSSSS
// #define endl "\n"
// #define pb push_back
// #define ppb pop_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define PI 3.141592653589793238462
// #define set_bits __builtin_popcountint
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()


// // typedef pair<ll, ll> pi;



// typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
// // find_by_order, order_of_key
// // To erase an element from ordered_set with less_equal I used lower_bound on
// //  (element to be erased — 1) and then erased the iterator I got from lower_bound and it
// //  works only if the element to be erased is present in the set.
// #ifndef ONLINE_JUDGE
// #define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
// #else
// #define debug(x)
// #endif

// void _print(int t) {cerr << t;}
// void _print(string t) {cerr << t;}
// void _print(char t) {cerr << t;}
// void _print(double t) {cerr << t;}
// // void _print(set t){cerr<<t;}


// template <class T, class V> void _print(pair <T, V> p);
// template <class T> void _print(vector <T> v);
// template <class T> void _print(set <T> v);
// template <class T, class V> void _print(map <T, V> v);
// template <class T> void _print(multiset <T> v);
// template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
// template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
// int MOD = 1e9 + 7;
// int N1 = 1e9 + 7;
// int inf = 1e18;

// /******************************************/
// int reverseBits(int z) {int rev = 0; int n = z; while (n > 0) {rev <<= 1; if (n & 1 == 1)rev ^= 1; n >>= 1;} return rev;}
// int strtoint(const string &s) {int n = s.length(); int num = 0; for (int i = 0; i < n; i += 1) num = num * 10 + (s[i] - '0'); return num;}
// string inttostr(int n) {string s; if (n < 10) {s.pb('0' + n); return s;} s = inttostr(n / 10); s.pb('0' + n % 10); return s;}
// int gcd(int a, int b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
// int expo(int a, int b, int mod) {int res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
// void extendgcd(int a, int b, int*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); int x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
// int lcm(int a, int b) {return (a * b) / gcd(a, b);}
// int countDivisors(int n) {int cnt = 0; for (int i = 1; i <= sqrt(n); i++) {if (n % i == 0) {if (n / i == i)cnt++; else cnt = cnt + 2;}} return cnt;}

// int mminv(int a, int b) {int arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
// int mminvprime(int a, int b) {return expo(a, b - 2, b);}
// bool revsort(int a, int b) {return a > b;}
// int combination(int n, int r, int m, int *fact, int *ifact) {int val1 = fact[n]; int val2 = ifact[n - r]; int val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
// void google(int t) {cout << "Case #" << t << ": ";}
// vector<int> primeFactors(int n) {vector<int>ret; while (n % 2 == 0) {ret.pb(2); n = n / 2;} for (int i = 3; i <= sqrt(n); i = i + 2) {while (n % i == 0) {ret.pb(i); n = n / i;}} if (n > 2) {ret.pb(n);} return ret;}
// // vector<int> prime(int n) {int*arr = new int[n + 1](); vector<int> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = ((int)(i) * (int)(i)); j <= n; j += i)arr[j] = 1;} return vect;}
// vector<int>divisor(int n) {vector<int>res; for (int i = 1; i <= sqrt(n); i++) {if (n % i == 0) {if (n / i == i)res.pb(i); else {res.pb(i); res.pb(n / i);} }} return res;}
// vector<int>sieve() {int MAXN = 1e7; vector<int>spf(MAXN); spf[1] = 1; for (int i = 2; i < MAXN; i++)spf[i] = i; for (int i = 4; i < MAXN; i += 2)spf[i] = 2; for (int i = 3; i * i < MAXN; i++) {if (spf[i] == i) {for (int j = i * i; j < MAXN; j += i)if (spf[j] == j)spf[j] = i;}} return spf;}
// int countnumber(int n) {int cnt = 0; while (n > 0) {cnt++; n /= 10;} return cnt;}
// // vector<int>countSmainterRight(vector<int>arr){pbds s;int n = arr.size();vector<int> ans;for (int i = n - 1; i >= 0; i--) {if (i == n - 1) { ans.push_back(0);}else {ans.push_back(s.order_of_key({ arr[i], i }));}s.insert({ arr[i], i });}reverse(ans.begin(), ans.end());return ans;}
// int mod_add(int a, int b, int m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
// int getupper(int k) {int x = 8 * k + 1; int sqr = sqrt(x); if ((sqr * sqr) == x) {sqr--; return (sqr / 2);} sqr--; return (sqr / 2) + 1;}
// int get2upper(int n, int rem) {int a = (2 * n) + 1; int s = ((4 * n * n) + (4 * n) + 1) - (8 * rem); int sqr = sqrt(s); if ((sqr * sqr) == s) {return ((a - sqr) / 2) - 1;} sqr++; return ((a - sqr) / 2);}
// int mod_mul(int a, int b, int m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
// int mod_sub(int a, int b, int m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
// int mod_div(int a, int b, int m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
// int modPower(int x, int y) {int res = 1; x = x % MOD; if (x == 0)return 0; while (y > 0) {if (y & 1)res = (res * x) % MOD; y = y / 2; x = (x * x) % MOD;} return res;}
// int phin(int n) {int number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (int i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))
// int modFact(int n) {if (n >= MOD)return 0; int result = 1; for (int i = 1; i <= n; i++)result = (result * i) % MOD; return result;}
// int power(int x, int y) {int res = 1; while (y > 0) {if (y & 1)res = res * x; y = y >> 1; x = x * x;} return res;}
// int negMOD(int x) {x = -x; int s = x / MOD; if (x % MOD)s++; return (MOD * s) - x;}
// void precision(int a) {cout << setprecision(a) << fixed;}
// /*prime-O(n*log(log(n)));
//  smaintest prime factor-O(log(n));
//  a%(b+c)=0 <=> a%c = b%c */
// // string bin=bitset<32>(x).to_string();
// /*--------------------------------------------------------------------------------------------------------------------------*/
// // struct Cmp{
// //   bool operator()(pair<int,int> &v1,pair<int,int> &v2)
// //    {
// //     if(v1.ff<v2.ff) return true;
// //     else if(v1.ff==v2.ff && v1.ss>v2.ss) return true;
// //     else return false;


// // }
// // };


// void solve() {
// int n,m;cin>>n>>m;
// int count = 0;
// while(true){
//     int move = m - (n%m);
//     if(n%m==0){
//     cout<<count;
//     break;}
//     else{
//         n+=move;
//     count+=move;}
// }
// }






// signed main()
// {
    
//   int t1;
//   cin >> t1;



//   for (int k11 = 1; k11 <= t1; k11++) {

//     solve();

//   }
// #ifndef ONLINE_JUDGE
//   freopen("Error.txt", "w", stderr);
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
// #endif


//   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//   // se();





//   return 0;
// }
















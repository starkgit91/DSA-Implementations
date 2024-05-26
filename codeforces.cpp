// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// vector<int> M(500005);
// void solve()
// {
//     int n, x;
//     cout<<"enter no";
//     cin >>n;
//     cout<<"enter repetition";
//     cin>>x;
//     vector<int> V(n);
//     cout<<"enter vector  elements";
//     for (int i = 0; i < n; i++)
//         cin >> V[i];

//     for (int i = 0; i < n; i++)
//         M[V[i]]++;
//     int a = 1;
//     // debug(M)
//     while (a < x)
//     {
//         if (M[a] == 0)
//         {
//             a++;
//             continue;
//         }
//         else
//         {
//             int b = M[a];
//             int c = b % (a + 1);
//             if (c != 0)
//             {
//                 cout << "No\n";
//                 return;
//             }
//             M[a + 1] += b / (a + 1);
//             a++;
//         }
//     }
//     cout << "Yes\n";
// }
// signed main()
// {
//     int t1 = 1;
//     // cin>>t1;

//     for (int i = 1; i <= t1; i++)
//     {
//         // cout<<"Scenario #"<<i<<":"<<endl;
//         solve();
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     string s;
//     string arr[n];
//     for(int i=0;i<n;i++){
//         cin>>s;
//         arr[i] = s;
//     }
//     // for (size_t i = 0; i < n; i++)
//     // {
//     //     cout<<arr[i]<<endl;
//     // }

//     for(int i=0;i<n;i++){
//         if (arr[i].size()<10){
//             cout<<arr[i]<<endl;
//         }
//         else{
//             int size;
//             size = (arr[i].size())-2;
//             cout<<(arr[i].substr(0,1))+to_string(size)+(arr[i].substr(arr[i].size()-1,1))<<endl;
//             }
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n][3];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
//         cout<<endl;
//     }
//     int count =0;
//     for(int i=0; i<n; i++){
//         int j = 0;
//         if((arr[i][j]==1 and arr[i][j+1]==1) or (arr[i][j+1]==1 and arr[i][j+2]==1) or (arr[i][j]==1 and arr[i][j+2]==1)){
//             count++;
//         }

//     }
//     cout<<count;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,k;
//     cin>>n;
//     cin>>k;
//     vector<int> v(n);
//     for(int i =0; i<n;i++){
//         cin>>v[i];
//     }
//     cout<<endl;
//     int search = v[k-1];
//     int count = 0;
//     for(int i=0;i<n;i++){
//         if(v[i]>=search and v[i]!=0){
//             count++;
//         }
//     }
//     if(v[0]==0){
//         cout<<v[0];
//     }
//     else{
//         cout<<(count);
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     while (true)
//     {
//         int m, n;
//         cin >> m >> n;
//         int res = floor((m * n) / 2);
//         cout << res;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[5][5];
//     int x;
//     int y;
//     int count1 = 0;
//     int count2 = 0;
//     int count3 = 0;
//     int count4 = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             if (arr[i][j] == 1)
//             {
//                 x = i;
//                 y = j;
//             }
//         }
//     }

//         int row = 2 - x;
//     int col = 2 - y;
//     count1 = count1 + row + col;
//     count2 = count2 - row - col;
//     count3 = count3 + row - col;
//     count4 = count4 - row + col;
//     if (x < 2 and y <= 2)
//     {
//         cout << count1;
//     }
//     else if (x > 2 and y >= 2)
//     {
//         cout << count2;
//     }
//     else if (x <= 2 and y > 2)
//     {
//         cout << count3;
//     }
//     else if (x >= 2 and y < 2)
//     {
//         cout << count4;
//     }
//     else
//     {
//         cout << 0;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// signed main()
// {
//     string s;
//     cin >> s;
//     int len = s.size();
//     int m = floor(len/2)+1;
//     int arr_1[m];
//     int b;
//     int n;
//     string a;
//     if (s.substr(1,1)!="+")
//     {
//         cout << s;
//     }
//     else
//     {
//         for (size_t i = 0; i < len; i = i + 2) //2+1+2+2+2+3+1+3+1+2
//         {
//             a = s.substr(i, 1);
//             b = stoi(a);
//             arr_1[i / 2] = b;
//             // cout<<b;
//         }
//         n = sizeof(arr_1) / sizeof(arr_1[0]);
//         sort(arr_1,arr_1 + n);

//         string str_void = to_string(arr_1[0])+"+";
//         for(int i=1;i<floor(len/2)+1;i++){
//             string str_add = to_string(arr_1[i]);
//             str_void = str_void + str_add + "+";
//         }
//         str_void.pop_back();
//         cout<<str_void;
//     }
//     // for (size_t i = 0; i < len; i++)
//     // {
//     //     cout<<arr_1[i]<<" ";
//     // }
//     // // sort(begin(arr), end(arr));
//     // for (size_t i = 0; i < floor(len / 2) + 1; i++)
//     // {
//     //     cout << arr_1[i] << " ";
//     // }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// signed main()
// {
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         int n;
//         cin >> n;
//         string arr[2];
//         int k = 0;
//         for (int j = 1; j <= ((2 * n) - 2); j++)
//         {

//             string s;
//             cin >> s;

//             int siz = s.size();

//             if (siz == n - 1)
//             {
//                 arr[k] = s;
//                 k++;
//             }

//         }
//         string s1 = arr[0];
//         string s2 = arr[1];
//         reverse(s2.begin(), s2.end());
//         if (s1 == s2)
//         {
//             cout << "Yes";
//         }
//         else
//         {
//             cout << "No";
//         }
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     n = 5;
//     int arr[n][n];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             arr[i][j];
//         }
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             cout << arr[i][j];
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// public:
//     char ExchangeCards(string arr, int n)
//     {
//         if (arr == string(n, arr[0]))
//         {
//             cout << arr[0];
//         }
//         for (auto c : {'B', 'G', 'R'})
//         {
//             if (count(arr.begin(), arr.end(), c) != n - 1)
//             {
//                 cout << c;
//             }
//         }
//     }
// };
// signed main()
// {
//     Solution stark;
//     int n;
//     cin >> n;
//     string arr;
//     cin >> arr;
//     stark.ExchangeCards(arr, n);

//     return 0;
// }

// #include <iostream>
// #include <vector>

// using namespace std;

// vector<int> processQueries(const vector<int>& queries) {
//     vector<int> result;
//     vector<int> arr;

//     for (int i = 0; i < queries.size(); i++) {
//         int x = queries[i];

//         // Check if appending x maintains the array beautiful
//         if (arr.empty() || x >= arr.front()) {
//             arr.insert(arr.begin(), x);
//             result.push_back(1);
//         } else {
//             result.push_back(0);
//         }
//     }

//     return result;
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int q;
//         cin >> q;

//         vector<int> queries(q);
//         for (int i = 0; i < q; i++) {
//             cin >> queries[i];
//         }

//         vector<int> result = processQueries(queries);

//         for (int i = 0; i < result.size(); i++) {
//             cout << result[i];
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// signed main(){
//     int n;
//     cin>>n;
//     string s;

//     int count = 0;
//     for(int i=0;i<n;i++){
//         cin>>s;
//         if(s=="X++" or s=="++X"){
//             count++;
//         }
//         else{
//             count--;
//         }
//     }
//     cout<<count;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     // int n=2;
//     int n;
//     cin>>n;
//     int fn = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         fn += (pow(-1,i))*i;
//     }
//     cout<<fn;
//     string s;

//     vector<string> str_arr;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>s;
//         str_arr.push_back(s);
//     }
//     string s1 = (str_arr[0]);
//     string s2 =(str_arr[1]);
//     transform(s1.begin(),s1.end(),s1.begin(), ::tolower);
//     transform(s2.begin(),s2.end(),s2.begin(), ::tolower);
//     if (s1==s2)
//     {
//         cout<<0;
//     }
//     else if(s1<s2){
//         cout<<1;

//     }
//     else{
//         cout<<-1;
//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int long long n;
//     cin>>n;
//     int long long fn = 0;
//     int i = 1;
//     if (n%2==0)
//     {
//         cout<<(n/2);
//     }
//     else{
//         cout<<-(n+1)/2;
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     int a;
//     cin>>a;
//     cin>>n;
//     // int pow = 1;
//     // for (int i = 0; i < n; i++)
//     // {
//     //     pow *= a;
//     // }
//     cout<<pow(a,n);
//     return 0;
// }

// pr1
// #include <bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:

//     int minstone(int n, string s){
//         int contour = 0;
//         if(n==1){
//             return 0;
//         }
//         else{
//             for(int i=0; i<n-1; i++){
//                 if(s[i]==s[i+1]){
//                     contour++;
//                 }
//             }
//         }
//         return contour;
//     }
// };
// int main(){
//     int n; // no of stones
//     cin>>n;
//     string s;  // color of stones
//     cin>>s;
//     Solution stark;

//     int res = stark.minstone(n,s);
//     cout<<res;
//     return 0;
// }

// pr2

// #include <bits/stdc++.h>
// using  namespace std;

// class Solution{
//     public:
//     int yearcount(int a, int b){
//         int target_year = 0;
//         while(a<=b){
//             a *= 3;
//             b *= 2;
//             target_year++;
//         }
//         return target_year;
//     }
// };
// signed main(){

//     int a;
//     int b;
//     cin>>a>>b;
//     Solution stark;
//     int res = stark.yearcount(a,b);
//     cout<<res;
//     return 0;
// }

// pr3

// #include <bits/stdc++.h>
// using  namespace std;

// class Solution{
//     public:
//     int checkparity(vector<int> vec, int n){
//         for (int i = 0; i < n; i++)
//         {
//             /* code */
//         }

//     }
//     int paritycost(vector<int> vec, int n){
//         int target_year = 0;
//         // while(a<=b){
//         //     a *= 3;
//         //     b *= 2;
//         //     target_year++;
//         // }
//         return target_year;
//     }
// };
// signed main(){

//     int t;
//     int n;
//     cin>>t;

//     Solution stark;
//     vector<int> res(t);
//     for(int i=0;i<t;i++){
//         cin>>n;
//         vector<int> vec(n);
//         for(i=0;i<n;i++){
//             int x;
//             cin>>x;
//             vec.push_back(x);
//         }
//         int result = stark.paritycost(vec,n);
//         res.push_back(result);

//     }
//     for (int i = 0; i < t; i++)
//     {
//        cout<<res[i];
//     }

//     return 0;
// }

// pr4

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
//         vector<int> y(n - 1);
//         vector<int> x(m - 1);
//         for (int i = 0; i < m - 1; i++)
//         {
//             cin >> x[i];
//         }
//         for (int i = 0; i < n - 1; i++)
//         {
//             cin >> y[i];
//         }
//         sort(x.rbegin(),x.rend());
//         sort(y.rbegin(),y.rend());

//         Solution stark;
//         int res = stark.mincostfunction(x, y,m ,n);
//         cout << res;
//     }

//     return 0;
// }

// pr5

// #include <bits/stdc++.h>

// using namespace std;

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

// pr6

/**
 * Definition for singly-linked list.*/
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };

// class Solution {
// public:
//     ListNode* removeElements(ListNode* head, int val) {
//         if(head == nullptr){
//             return head;
//         }
//         ListNode* temp = head;
//         while(temp->next!=nullptr){

//             if(temp->next->val == val){
//                 temp->next = temp->next->next; // removal
//             }
//             else{
//                 temp = temp->next;
//             }
//         }
//         return head;
//     }
// };


// pr7
// #include<bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//     void balencearr(int n){
//         int check = n/2;
//         if(n%2!=check%2){
//             cout<<"NO"<<endl;
//         }
//         else{
//             cout<<"YES"<<endl;
//             vector<int> vec;
//             for(int i=0;i<check;i++){
//                 vec.push_back(2*(i+1));
//             }
//             for(int j=0;j<check-1;j++){
//                 vec.push_back((2*j)+1);
//             }
//             int lastodd = 2*((check-1)+(check/2))+1;
//             vec.push_back(lastodd);
//             for (int i = 0; i < vec.size(); i++)
//             {
//                 cout<<vec[i]<<" ";
//             }
//             cout<<endl;
            
//         }
//     } 
// };

// signed main(){
//     int t;
//     cin>>t;
//     vector<int> arr;
//     while(t--){
//         int n;
//         cin>>n;
//         arr.push_back(n);    
//     }
//     for(int i=0;i<arr.size();i++){
//         Solution stark;
//         stark.balencearr(arr[i]);
//     }
        
    
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//     int help(int m, int c){
//         if(m>c) return 1;
//         else if(m==c) return -1;
//         else return 0;
//     }
// };

// signed main(){
//     int t;
//     cin>>t;
//     int mscore = 0, cscore = 0;
//     while(t--){
//         int m,c;
//         cin>>m>>c;
//         Solution stark;
//         if (stark.help(m,c)==1)
//         {
//             mscore++;
//         }
//         else if (stark.help(m,c) ==-1)
//         {
//             cscore;
//         }
//         else{
//             cscore++;
//         }    
//     }
//     if(mscore>cscore){
//         cout<<"Mishika"<<endl;
//     }
//     else if (mscore==cscore)
//     {
//         cout<<"Friendship is Magic!"<<endl;
//     }
    
//     else{
//         cout<<"Chris"<<endl;
//     }
    
//     return 0;
// }



// #include <bits/stdc++.h>
 
// using namespace std;
 
// class Solution
// {
// public:
//     int cal_count(vector<int> cal, vector<int> square)
//     {
//         int count=0;
//         for (int i = 0; i < square.size(); i++)
//         {
//             if(square[i] == 1){ count+= cal[0]; 
//             }
//             else if(square[i] == 2) count+= cal[1];
//             else if(square[i] == 3) count+= cal[2];
//             else count+= cal[3];
//         }
//         return count;
//     }
// };
 
// signed main()
// {
    
//     vector<int> cal;
//     Solution stark;
//     for (int i = 0; i < 4; i++)
//     {
//         int n;
//         cin >> n;
//         cal.push_back(n);
//     }
//     string s;
//     cin>>s;
//     vector<int> square;
//     for (int j = 0; j < s.size();j++)
//     {
//         square.push_back(stoi(s.substr(j,1)));
//     }
   
//     int res = stark.cal_count(cal, square);
//     cout<<res;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// auto start = chrono::steady_clock::now();
// int main(){
//     int n;
//     cin>>n;
//     for(int i=4;i<n-3;i++){
//         if(i<10 && n-i<10){
//             if((i==4 || i==6 || i==8 || i==9) && ((n-i)==4 || (n-i)==6 || (n-i)==8 || (n-i)==9 )){
//                 cout<<i<<" "<<n-i;
//                 break;
//             }
//         }
//         else if(i<10 && n-i>=10){
//             if((i==4 || i==6 || i==8 || i==9) && ((n-i)%9==0 || (n-i)%8==0 || (n-i)%7==0 || (n-i)%6==0 || (n-i)%5==0 || (n-i)%4==0 || (n-i)%3==0 || (n-i)%2==0)){
//                 cout<<i<<" "<<n-i;
//                 break;
//             }

//         }
//         else if(i>=10 && n-i>=10){
//             if((i%9==0 || i%8==0 || i%7==0 || i%6==0 || i%5==0 || i%4==0 || i%3==0 || i%2==0) && ((n-i)%9==0 || (n-i)%8==0 || (n-i)%7==0 || (n-i)%6==0 || (n-i)%5==0 || (n-i)%4==0 || (n-i)%3==0 || (n-i)%2==0)){
//                 if(n-i==(n/2)){
//                     cout<<i<<" "<<n-i;
//                     break;
//                 }
//                 else{
//                     cout<<i<<" "<<n-i;
//                     break;
//                 }
//             }       
//         }
//     }

//     cout<<max(n,100);
//     cout<<endl;
//     auto end = chrono::steady_clock::now();
//     auto diff = end-start;
//     cout<<chrono::duration<double,milli>(diff).count()<<endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//     int func(){
//         //
//         return;
//     }
// };
// auto start = chrono::steady_clock::now();
// signed main(){
    
//     auto end = chrono::steady_clock::now();
//     auto diff = end-start;
//     cout<<chrono::duration<double,milli>(diff).count()<<endl;
//     int t;
//     cin>>t;
//     vector<signed> result;
//     while (t--)
//     {
//         int n,m;
//         cin>>n>>m;
//         vector<signed> arr(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin>>arr[i];
//         }
//         Solution stark;
//         signed res = stark.func();
//         result.push_back(res);
//     }
//     for (size_t i = 0; i < result.size(); i++)
//     {
//         cout<<result[i]<<" ";
//     }
    
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//     int floornum(int n, int x){
//         if(n<=2) return 1;
//         long double first = n-2;
          
//         long long int rest = ceil(first/x);
//         cout<<rest<<endl;
//         return 1+rest;
//     }
// };
// // auto start = chrono::steady_clock::now();
// signed main(){
    
//     // auto end = chrono::steady_clock::now();
//     // auto diff = end-start;
//     // cout<<chrono::duration<double,milli>(diff).count()<<endl;
//     int t;
//     cin>>t;
//     vector<signed> result;
//     while (t--)
//     {
//         int n,x;
//         cin>>n>>x;
//         // vector<signed> arr(n);
//         // for (int i = 0; i < n; i++)
//         // {
//         //     cin>>arr[i];
//         // }
//         Solution stark;
//         signed res = stark.floornum(n,x);
//         result.push_back(res);
//     }
//     for (size_t i = 0; i < result.size(); i++)
//     {
//         cout<<result[i]<<endl;
//     }
//     return 0;
// }\



// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//     string candie(vector<int> weight, int n){
//         if(n%2==0){
//             if(accumulate(weight.begin(),weight.end(),0)%2==0) return "YES";
//             else return "NO";
//         }
//         else if(accumulate(weight.begin(),weight.end(),0)%2==0 && accumulate(weight.begin(),weight.end(),0)%n!=0) return "YES";
//              else return "NO";
//     }
// };
// // auto start = chrono::steady_clock::now();
// signed main(){
    
//     // auto end = chrono::steady_clock::now();
//     // auto diff = end-start;
//     // cout<<chrono::duration<double,milli>(diff).count()<<endl;
//     int t;
//     cin>>t;
//     vector<string> result;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         vector<signed> weight(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin>>weight[i];
//         }
//         Solution stark;
//         string res = stark.candie(weight,n);
//         result.push_back(res);
//     }
//     for (size_t i = 0; i < result.size(); i++)
//     {
//         cout<<result[i]<<endl;
//     }
    
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//     bool findDuplicate(vector<int>& arr, int n){
//         for(int i = 0; i < arr.size() - 1; i++){
//             if (arr[i] == arr[i + 1]) {
//                 arr.erase(arr.begin() + i);
//                 i--;
//             }
//             if(arr.size()==n-i-1) return true;
//         }
//         return false;      
//     }
//     int func(vector<int> arr, int n){
//         sort(arr.begin(),arr.end());
//         if(n==2) return abs(arr[0]-arr[1]);
//         else{
//             if(findDuplicate(arr,n)==true) return 0;
//             else{
//                 int x = arr[n-3];
//                 int y = arr[n-2];
//                 int z = arr[n-1];
//                 if(x==y || y==z) return 0;
//                 else{
//                     if(abs(y-z)<=abs(x-y)) return abs(y-z);
//                     else return abs(x-y);
//                 }
//             }          
//         }
//     }
// };
// // auto start = chrono::steady_clock::now();
// signed main(){
    
//     // auto end = chrono::steady_clock::now();
//     // auto diff = end-start;
//     // cout<<chrono::duration<double,milli>(diff).count()<<endl;
//     int t;
//     cin>>t;
//     vector<signed> result;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         vector<signed> arr(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin>>arr[i];
//         }
//         Solution stark;
//         signed res = stark.func(arr,n);
//         result.push_back(res);
//     }
//     for (size_t i = 0; i < result.size(); i++)
//     {
//         cout<<result[i]<<endl;
//     }
    
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:

// bool findDuplicate(vector<int>& nums, int n) {

//         for(int i = 0; i < nums.size() - 1; i++) {
//             if (nums[i] == nums[i + 1]) {
//                 nums.erase(nums.begin() + i);
//                 i--;
//             }
//             // cout<<nums.size();
//             if(nums.size()==n-i-1) return true;
//         }
//         return false;      
//     }
// };
// int main(){
    
//     vector<int> nums = {1,3,5,12,2,34,4,6,7,8,9,10,11};
//     Solution stark;
//     cout<<stark.findDuplicate(nums,13);
//     return 0;
// }

 

// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//     bool findDuplicate(vector<int>& arr, int n){
//         for(int i = 0; i < arr.size() - 1; i++){
//             if (arr[i] == arr[i + 1]) {
//                 arr.erase(arr.begin() + i);
//                 i--;
//             }
//             if(arr.size()==n-i-1) return true;
//         }
//         return false;      
//     }
//     int func(vector<int> arr, int n){
//         sort(arr.begin(),arr.end());
//         if(n==2) return abs(arr[0]-arr[1]);
//         else{
//             if(findDuplicate(arr,n)==true) return 0;
//             else{
//                 int diff = INT_MAX;
//                 for(int i=0;i<n;i++){
//                     diff = min(diff,abs(arr[i]-arr[i+1]));
//                 }
//                 return diff;
//             }          
//         }
//     }
// };
// // auto start = chrono::steady_clock::now();
// signed main(){
    
//     // auto end = chrono::steady_clock::now();
//     // auto diff = end-start;
//     // cout<<chrono::duration<double,milli>(diff).count()<<endl;
//     int t;
//     cin>>t;
//     vector<signed> result;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         vector<signed> arr(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin>>arr[i];
//         }
//         Solution stark;
//         signed res = stark.func(arr,n);
//         result.push_back(res);
//     }
//     for (size_t i = 0; i < result.size(); i++)
//     {
//         cout<<result[i]<<endl;
//     }
    
//     return 0;
// }





// #include <bits/stdc++.h>
// using namespace std;

// // auto start = chrono::steady_clock::now();
// signed main(){
    
//     // auto end = chrono::steady_clock::now();
//     // auto diff = end-start;
//     // cout<<chrono::duration<double,milli>(diff).count()<<endl;
    
//     int k,r;
//     cin>>k>>r;
//     // vector<signed> ar();
//     int count_shovel = 0;
//     if((floor(k/10)+r)==k){
//         cout<<1;
//     }
//     else{
//         for (int i = 1; i < 10; i++)
//         {   
//             int n = k*i;
//             if(n%10==0){
//                 cout<<i;
//                 break;
//             }
//             else if (n==(floor(n/10)*10)+r)
//             {
//                 cout<<i;
//                 break;
//             }
            
//         }
//     }
    
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// // class Solution{
// //     public:
// //     int func(){
// //         //
// //         return;
// //     }
// // };
// // auto start = chrono::steady_clock::now();
// signed main(){
    
//     // auto end = chrono::steady_clock::now();
//     // auto diff = end-start;
//     // cout<<chrono::duration<double,milli>(diff).count()<<endl;
//     int t;
//     cin>>t;
//     vector<string> result;
//     while (t--)
//     {
//         vector<signed> arr(4);
//         for (int i = 0; i < 4; i++)
//         {
//             cin>>arr[i];
//         }
//         // Solution stark;
//         // signed res = stark.func();
//         int min1 = min(arr[0],arr[1]);
//         int max1 = max(arr[0],arr[1]);
//         int min2 = min(arr[2],arr[3]);
//         int max2 = max(arr[2],arr[3]);
//         if(min2<max1 && max2>min1){
//             result.push_back("YES");
//         }
//         else{
//             result.push_back("NO");
//         }
        
//     }
//     for (size_t i = 0; i < result.size(); i++)
//     {
//         cout<<result[i]<<endl; 
//     }
//     return 0;
// }





// #include<bits/stdc++.h>

// using namespace std;

// signed main(){
//     int t;
//     cin>>t;
//     vector<int> result;
//     vector<int> result2;
//     while(t--){
//         int n;
//         cin>>n;
//         if(n==1){
//             result.push_back(1);
//             result2.push_back(0);
//         }
//         else{
//             int x = floor(n/3);
//             int y = n%3;
//             if(y==0){
//                 result.push_back(x);
//                 result2.push_back(x);
//             }
//             else if(y==1){
//                 result.push_back(x+1);
//                 result2.push_back(x);
//             }
//             else{
//                 result.push_back(x);
//                 result2.push_back(x+1);
//             }
//         }
//     }
//     for(int i=0;i<result.size();i++){
//         cout<<result[i]<<" "<<result2[i]<<endl;
//     }
//     return 0;
// }



// #include<bits/stdc++.h>

// using namespace std;

// signed main(){
//     int t;
//     cin>>t;
//     vector<int> result;
//     while(t--){
//         int n,m;
//         cin>>n>>m;
//         if(n==m){
//             result.push_back(4*n*n);
//         }
//         else{
//             int x = 2*n*m;
//             int min_ = min(m,n); 
//             int max_ = max(m,n);
//             int y = max_*max_; 
//             int z = y-x; 
//             if(z>=0 && max_>2*min_) result.push_back(y);
//             else{
//                 while(y<x || 2*min_>max_){
//                     if(z==0){
//                         break;
//                     }else{
//                         max_++;
//                         y=max_*max_;
//                     }
//                 }
//                 result.push_back(y);
//             }
//         }
        
//     }
//     for(int i=0;i<result.size();i++){
//         cout<<result[i]<<endl;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// #include<bits/stdc++.h>
// using  namespace std;

// int main(){
//     int x;
//     cin>>x;
//     if(x==1 || x==2 || x==3 || x==4 || x==5){
//         cout<<1;
//     }
//     else{
//         int z = x%5;
//         int y = floor(x/5);
//         if(z==0){
//             cout<<y;
//         }
        
//         else{
//             cout<<y+1;
//         }
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,t;
//     cin>>n>>t;
//     string s; //BGGBG
//     cin>>s;
//     string temp_str = s; //GBGBG
//     while(t--){
//         for(int i=0;i<n-1;i++){
//             if(s[i]=='B' && s[i+1]=='G'){
//                 char temp = s[i];
//                 temp_str[i] = s[i+1];
//                 temp_str[i+1] = temp;
//             }
//         }
//         s = temp_str;
//     }
//     cout<<temp_str;
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// // auto start = chrono::steady_clock::now();
// // signed main(){
    
// //     int t;
// //     cin>>t;
// //     vector<signed> result;
// //     while (t--)
// //     {
// //         int long long n;
// //         cin>>n;
// //         if(n==1 || n==2) result.push_back(1);
// //         else{
// //             long long int sum = (n*(n+1))/2;
// //             result.push_back(floor(sum/n));
// //         }
// //     }
// //     for (size_t i = 0; i < result.size(); i++)
// //     {
// //         cout<<result[i]<<endl;
// //     }
    
// //     return 0;
// // }


// // '''to find substring in string'''


// // #include <bits/stdc++.h>
// // #include <string>
// // // #include <boost/algorithm/string.hpp>
// // using namespace std;

// // // class Solution{
// // //     public:
// // //     int func(){
// // //         //
// // //         return;
// // //     }
// // // };
// // // auto start = chrono::steady_clock::now();
// // signed main(){
    
// //     // auto end = chrono::steady_clock::now();
// //     // auto diff = end-start;
// //     // cout<<chrono::duration<double,milli>(diff).count()<<endl;
// //     int t;
// //     cin>>t;
// //     vector<string> result;
// //     while (t--)
// //     {
// //         string s;
// //         cin>>s;
// //         string my_Str = "codeforces";
// //         bool isFind = my_Str.find(s) != string::npos;
        
// //         // bool isFind1 = my_Str.basic_string::contains(s);
// //         // bool isFind2 = boost::algorithm::contains(my_Str,s);
// //         if(isFind) result.push_back("YES");
// //         else result.push_back("NO");
// //     }
// //     for (size_t i = 0; i < result.size(); i++)
// //     {
// //         cout<<result[i]<<endl;
// //     }
    
// //     return 0;
// // }



// #include<bits/stdc++.h>
// using namespace std;

// signed main() {
//     vector<pair<vector<int>, int>> result;
//     int n;
//     cin >> n;
//     if(n == 2 || n == 3) {
//         vector<int> res;
//         res.push_back(n);
//         result.push_back(make_pair(res, 1));
//     } 
//     else {
//         if(n % 2 == 0) {
//             vector<int> res2;
//             for(int i = 0; i < n / 2; i++) {
//                 res2.push_back(2);
//             }
//             result.push_back(make_pair(res2, n / 2));
//         } 
//         else {
//             vector<int> res3;
//             for(int i = 0; i < floor(n / 2)-1; i++) {
//                 res3.push_back(2);
//             }
//             res3.push_back(3);
//             result.push_back(make_pair(res3, floor(n / 2)));
//         }
//     }
//     cout << result[0].second<< endl;
//     for (int j = 0; j < result[0].first.size(); j++) {
//         cout << result[0].first[j] <<" ";
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
// class Solution{
//     public:
//     int func(){
//         //
//         return;
//     }
// };
// auto start = chrono::steady_clock::now();
// signed main(){
    
//     // auto end = chrono::steady_clock::now();
//     // auto diff = end-start;
//     // cout<<chrono::duration<double,milli>(diff).count()<<endl;
//     int t;
//     cin>>t;
//     vector<signed> result;
//     while (t--)
//     {
//         int n,m;
//         cin>>n>>m;
//         vector<signed> arr(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin>>arr[i];
//         }
//         vector<int> copy = arr;
//         copy[0] = 1000;
//         // Solution stark;
//         // signed res = stark.func();
//         // result.push_back(res);
//         for (size_t i = 0; i < copy.size(); i++)
//         {
//             cout<<arr[i]<<" ";
//             cout<<copy[i]<<endl;
//         }
        
//     }
//     // for (size_t i = 0; i < result.size(); i++)
//     // {
//     //     cout<<result[i]; 
//     // }
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//     vector<vector<int>> team_select(vector<int> arr,int n){
//         vector<int> copy = arr;
//         sort(copy.begin(),copy.end());
//         int count1=0;
//         int count2=0;
//         int count3=0;
//         for(int i:copy){
//             if(i==1) count1++;
//             if(i==2) count2++;
//             if(i==3) count3++;
//         }
//         int max_team = min(count1,count2);
//         int max_select = min(max_team,count3);
//         vector<int> ele = {max_select};
//         vector<vector<int>> matrix;
//         matrix.push_back(ele);
//         vector<int> v1;
//         vector<int> v2;
//         vector<int> v3;
//         int push_count1 = 0;
//         int push_count2 = 0;
//         int push_count3 = 0;
//         for(int i=0;i<arr.size();i++){
//             if(arr[i]==1 && push_count1<max_select){
//                 v1.push_back(i+1);
//                 push_count1++;
//             }
//             if(arr[i]==2 && push_count2<max_select){
//                 v2.push_back(i+1);
//                 push_count2++;
//             }
//             if(arr[i]==3 && push_count3<max_select){
//                 v3.push_back(i+1);
//                 push_count3++;
//             }
//         }
        
//         matrix.push_back(v1);
//         matrix.push_back(v2);
//         matrix.push_back(v3);
        
//         return matrix;
     
//     }
// };
// // auto start = chrono::steady_clock::now();
// signed main(){
    
//     // auto end = chrono::steady_clock::now();
//     // auto diff = end-start;
//     // cout<<chrono::duration<double,milli>(diff).count()<<endl;
//     int n;
//     cin>>n;
//     vector<signed> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     Solution stark;
//     vector<vector<int>> res = stark.team_select(arr,n);
    
//     if(res[0][0]==0){
//         cout<<res[0][0]<<endl;
//     }
//     else{
//         cout<<res[0][0]<<endl;
//         for (size_t i = 0; i < res[0][0]; i++)
//         {
//             cout<<res[1][i]<<" "<<res[2][i]<<" "<<res[3][i]<<endl;
//         }
//     }
    
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// // class Solution{
// //     public:
// //     int func(){
// //         //
// //         return;
// //     }
// // };
// // auto start = chrono::steady_clock::now();
// signed main(){
    
//     // auto end = chrono::steady_clock::now();
//     // auto diff = end-start;
//     // cout<<chrono::duration<double,milli>(diff).count()<<endl;
//     // int t;
//     // cin>>t;
//     // vector<signed> result;
    
//     int k,l,m,n,d;
//     cin>>k>>l>>m>>n>>d;
//     int long long count = 0;
//     if(k==1 || l ==1 || m==1 || n==1){
//         cout<<d;
//     }
//     else{
//         for (int i = 1; i <= d; i++)
//         {
//             if(i%k==0 || i%l==0 || i%m==0 || i%n==0) count++;
//         }
//         cout<<count;
//     }   
//     return 0;
// }


// #include<bits/stdc++.h>

// using namespace std;
// int main(){
//     int n,p;
//     cin>>n;
//     vector<int> arr;
//     while(n--){
//         cin>>p;
//         arr.push_back(p);
//     }
//     double long total_vol = accumulate(arr.begin(),arr.end(),0);
//     // cout<<total_vol;
//     double long percent_orange = total_vol/arr.size();
//     cout<<percent_orange;
//     return 0;
// }

// #include<bits/stdc++.h>

// using namespace std;

// signed main(){
//     int long long n;
//     cin>>n;
//     if(n%100==0){
//         int long long grand_bill = n/100;
//         cout<<grand_bill;
//     }
//     else{
//         int long long grand_bill = floor(n/100);
//         int rem = n%100;
//         int bill20 = floor(rem/20);
//         int rem2 = rem%20;
//         int bill10 = floor(rem2/10);
//         int rem3 = rem2%10;
//         int bill5 = floor(rem3/5);
//         int rem4 = rem3%5;
//         int bill1 = floor(rem4/1);
//         int long long grandtotal_bill = grand_bill + bill20 + bill10 + bill5 + bill1;
//         cout<<grandtotal_bill;
//     }
    
// }




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
/*--------------------------------------------------------------------------------------------------------------------------*/
// struct Cmp{
//   bool operator()(pair<int,int> &v1,pair<int,int> &v2)
//    {
//     if(v1.ff<v2.ff) return true;
//     else if(v1.ff==v2.ff && v1.ss>v2.ss) return true;
//     else return false;


// }
// };



// void solve() {
// int n;cin>>n;
// vector<int> V(n);
// for(int i=0;i<n;i++) cin>>V[i];
// int ans =0;
// cout<<ans<<endl;

// }
// void solve(){
// int n,k;cin>>n>>k;
// int x,y;
// vector<int> V(n);
// for(int i=0;i<n;i++) V[i] = (i+1);
// n=floor(n/2); 
// while(1){
//     int x = 5*V[n]*(V[n]+1)/2; 
//     if(k>=235){
//       cout<<0;
//       break;
//     }
//     if(x+k==240){
//         cout<<V[n];
//         break;
//     }
//     if(x+k<240){           
//         V = {V.begin()+n,V.end()};
//         // for(int i:V) cout<<i;
//         n = floor(V.size()/2);
//         if(V.size()==1){
//           cout<<V[n];
//           break;
//         }
//     }
//     if(x+k>240){
//         V = {V.begin()+0,V.begin()+n};
//         n = floor(V.size()/2);
//     }
// }
// }

// void solve() {
// int n,k;cin>>n>>k;
// int i = 1;
// int x = 5*i*(i+1)/2;
// int ret;
// while(x+k<=240 && i<=n){
//     i++;
//     x = 5*i*(i+1)/2;
//     ret = i-1;
// }
// cout<<ret;
// }


// void solve() {
// int a,b;cin>>a>>b;
// int count = 0;
// if(a==b){
//     cout<<0<<endl;
// }
// else if(a<b){
//     count += floor((b-a)/10);
//     int rem = (b-a)%10;
//     if(rem==0) cout<<count;
//     else cout<<count+1;  
// }
// else{
//     count += floor((a-b)/10);
//     int rem = (b-a)%10;
//     if(rem==0) cout<<count;
//     else cout<<count+1;  
// }
// vector<int> V(n);
// for(int i=0;i<n;i++) cin>>V[i];


// }
// void solve() {
// int n,k;cin>>n>>k;
 
// vector<int> V(n);
// for(int i=0;i<n;i++) cin>>V[i];
// int count = 0;
// sort(V.begin(),V.end());
// int x = 5-k;
// for(int i:V){
//     if(i>x) count++;
// }
// int res = floor((n-count)/3);
// cout<<res<<endl;
 
// }


// #include<bits/stdc++.h>
// using namespace std;

// void solve(){
//     int n;cin>>n;
//     int p;cin>>p;
//     vector<int> vec1(p);
//     for(int i=0;i<p;i++) cin>>vec1[i];
//     int q;cin>>q;
//     vector<int> vec2(q);
//     for(int i=0;i<q;i++) cin>>vec2[i];
//     int count = 0;
//     sort(vec1.begin(),vec1.end());
//     sort(vec2.begin(),vec2.end());

//     if(n==1 && (p==1||q==1)) cout<<"I become the guy."<<endl;
//     else{
//         int a,b;
//         if(p>q) a=p,b=q;
//         else{
//           a = q;
//           b=p;
//           vector<int> temp;
//           temp = vec1;
//           vec1 = vec2;
//           vec2 = temp;
//         }
//         int x =1;
//         for(int i=0;i<a;i++){
//           if(x==vec1[i]) count++,x++;
//           if(count==n) break;
//           else for (int j = 0; j < b;j++)
//           {
//             if(x==vec2[j]) count++,x++;
//             if(count==n) break;
//           }         
//         }
//         // for(int i=0;i<q;i++){
//         //   if(x==vec1[i]) count++,x++;
//         //   if(count==n) break;
//         //   if(x==vec2[i])count++,x++;
//         //   if(count==n) break;
//         // }
//         if(count==n) cout<<"I become the guy."<<endl;
//         else cout<<"Oh, my keyboard!"<<endl;
//     }
//     // Oh, my keyboard!
    
// }

// signed main(){
//     solve();
//     return 0;
// }


// #include<bits/stdc++.h>

// using namespace std;
// void solve(){
//     int n;cin>>n;
//     string s;cin>>s;
//     int index;
//     vector<bool> check(26,false);
//     for(int i=0;i<n;i++){
        
//         if('A'<=s[i] && s[i]<='Z'){
//             index = s[i] - 'A';
//         }
//         else if('a'<=s[i] && s[i]<='z'){
//             index = s[i] - 'a';
//         }
//         else continue;
//         check[index] = true;
//     }
//     for(int i=0;i<26;i++){
//         if(check[i]==false){
//             cout<<"NO"<<endl;
//             break;
//         }
//         if(i==25) cout<<"YES"<<endl;
//     }
    
    
// }
// signed main(){
//     solve();
//     return 0;
// }






// string s1,s2,s3;cin>>s1;cin>>s2;cin>>s3;
// string phew;
// string sush;
// string gtr;
// string corola;
// int n = s3.size();
// if(n!=s1.size()+s2.size()){
//   cout<<"NO"<<endl;
// }
// else{
//   for (int i = 0; i < n; i++)
//   {
//     if(s3.find(s1[i])!=string::npos==true || s3.find(s2[i])!=string::npos==true){
//       int idx1,idx2;
//       if(phew!=s1){
//       idx1 = s3.find(s1[i]);
//       if(idx1<10000){
//       cout<<idx1<<endl;
//       phew = phew + s1[i];
//       cout<<phew<<endl;
//       s3.erase(idx1,1);
//       cout<<s3<<endl;
//       }
//       else{
//         cout<<"NO"<<endl;  
//       }  
//       }
//       if(sush!=s2){
//       idx2 = s3.find(s2[i]);
//       if(idx2<10000){
//       cout<<idx2<<endl;

//       sush = sush + s2[i];
//       cout<<sush<<endl;
//       // if(idx2==0) s3.erase(idx2,1);
//       s3.erase(idx2,1);
//       cout<<s3<<endl;
//       }
//       else{
//         cout<<"NO"<<endl;
//       }
//       }
      
//       // cout<<phew<<"/ ";
      
//       // cout<<sush<<"/ ";
      
//       if(phew==s1 && sush==s2){
//         break;
//       }
//       // if(phew==s1) gtr = phew;
//       // if(sush==s2) corola = sush;
      
//     }
    
//   }
//   if(phew==s1 && sush==s2)
//     cout<<"YES"<<endl;
//   else cout<<"NO"<<endl;

// }


// }
// int n;cin>>n;

// vector<pair<int,int>> V(n);
// for(int i=0;i<n;i++)cin>>V[i].first,cin>>V[i].second;
// int count = 0;
// for (int i = 0; i < n-1; i++){
//   for (int j = i; j < n-1; j++)
//   {
//     if(V[i].first == V[j+1].second) count++;
//     if(V[j+1].first == V[i].second) count++;
//   }
  
  
// }
// cout<<count<<endl;



// void solve() {
//   int x;cin>>x;
//   if(x==1) cout<<1<<endl;
//   else{
//     int y = x%10; 
//     int count = 0;
//     for(int i=1;i<=y;i++){
//       if(i!=y) count += 10;
//       else{
//         if(x<10){
//           count +=1;
//         }
//         if(11<=x && x<100){
//           count += 3;
//         }
//         if(101<=x && x<1000){
//           count += 6;

//         }
//         if(1001<=x && x<10000){
//           count +=10;
//         }
//       }
//     }
//     cout<<count<<endl;
//   }
// }



void solve() {
string n;cin>>n;
bool s1 = n.find(".") != string::npos;
bool s2 = n.find("-.")!= string::npos;
bool s3 = n.find("--")!= string::npos; 
int start = 0;
int dynamic = 2;
vector<int> V;
while(start<=n.size()-1){
  string morse = n.substr(start,dynamic);
  if(morse.find(".")!=string::npos == true){
    if(morse.find("-.")!=string::npos == true){
      V.push_back(1);start+=2;
    }
    else{
      V.push_back(0);start++;
    }   
  }
  // if(morse.find("-.")!=string::npos == true){
  //   V.push_back(1);
  //   start+=2;
  // }
  if(morse.find("--")!=string::npos == true){
    V.push_back(2);
    start+=2;
  }
}
for(int i:V) cout<<i;

// for(int i=0;i<x;i++) cin>>V[i];

 
}


// void solve() {
//   int n;cin>>n;
//   vector<int> vec(n);
//   for(int i=0;i<n;i++) cin>>vec[i];
//   vector<int> mcqueen;
//   vector<int> seize;
//   if(n==1){
//     cout<<1<<endl;
//   }
//   else{
//   for(int i=0;i<n-1;i++){
//     vector<int> bot;
//     if(vec[i]<=vec[i+1]){
//       mcqueen.push_back(vec[i]);
//     }    
//     else{
//       bot = mcqueen;
//       seize.push_back(bot.size()+1);
//       mcqueen.clear();
//     }
//     if(i==n-2){
//       bot = mcqueen;
//       seize.push_back(bot.size()+1);
//       mcqueen.clear();
//     }
    
//   }
//   int res = *max_element(seize.begin(),seize.end());
//   cout<<res<<endl;
//   }
// }

// "Ques"
// if(n<4040){
//     cout<<"NO"<<endl;
//   }
//   else{
//     int rem = n%2020;
//     int fac = floor(n/2020);
//     if(rem<=fac){
//         cout<<"YES"<<endl;
//     }
//     else{
//       cout<<"NO"<<endl;
//     }
//   }


/* ICPC-> 1st Que 800*/

// void solve() {
//   int n;cin>>n;
//   string s;cin>>s;
//   int l_count = 0;
//   int o_count = 0;
//   for(char i:s){
//     if(i=='L') l_count++;
//     else o_count++;
//   }
//   int first_l = 0;
//   int first_o = 0;
//   for(char i:s){
//     if(s[0]=='L'){
//       if(i=='L'){
//         first_l++;
//       }
//       else{
//         break;
//       }
//     }
//     else{
//       if(i=='O'){
//         first_o++;
//       }
//       else{
//         break;
//       }
//     }
//   }
  
//   if(first_l == l_count || (o_count>l_count && l_count>=2 && s[n-1]!='L') ){
//     if(first_l == l_count) cout<<first_l<<endl;
//     else cout<<s.find('L',1)+1<<endl;
//   }
//   else if( first_o==o_count || (l_count>o_count && o_count>=2 && s[n-1]!='O')){
//     if(first_o==o_count) cout<<first_o<<endl;
//     else cout<<s.find('O',1)+1<<endl;
//   }
//   else{
//     if(((first_l==(l_count-first_l) && l_count>=2) || (s[0]=='L' && l_count==2))||((s[0]=='O' && o_count==2) || (first_o==(o_count-first_o) && o_count>=2))){
//       cout<<-1<<endl;
//     }
//     else{
//       cout<<1<<endl;
//     }
    
//   }
  
  
//   // vector<int> vec(n);
//   // for(int i=0;i<n;i++) cin>>vec[i];
 
// }

// ""Ques 900 rt- tree,dfs""
// void solve() {
//   int n;cin>>n;
//   vector<int> dannys_cont(n+1);
//   for(int i=1;i<=n;i++){
//     cin>>dannys_cont[i];
//   }
//   int ans = 1;
//   for(int i =1; i<=n;i++){
//     int k = dannys_cont[i];
//     int trace_bot = 1;
//     while(k!=-1){
//       k = dannys_cont[k];
//       trace_bot++;
//     }
//     ans = max(ans,trace_bot);
//     // ans = (trace_bot>ans) ? trace_bot : ans; 
//     //the above statement is equal to
//     //if(trace>ans) ans=trace_bot; else ans=ans
//     //= ans = max(ans,trace_bot)
//   }
//   cout<<ans<<endl;
// }



 
// void solve() {
//   int n;cin>>n;
//   vector<int> V(12);
//   for(int i=0;i<12;i++) cin>>V[i];
//   if(n==0){
//     cout<<0<<endl;
//   }
//   else{
//     if(accumulate(V.begin(),V.end(),0)<n){
//       cout<<-1<<endl;
//     }
//     else{
//       int buckscounty = 0;
//       int zelensky = 0;
//       sort(V.rbegin(),V.rend()); 
//       for(int i:V){
//         zelensky += i;
//         buckscounty++;
//         if(zelensky>=n){
//             cout<<buckscounty<<endl;
//             break;
//         }
//       }
//     }
    
//   }
  

// }

// void solve() {
//   int n;cin>>n;
//   if(n>0){
//     cout<<n<<endl;
//   }
//   else{
//     int rem = abs(n%10);
//     int x = floor(n/10);
//     int sem = abs(x%10);
//     if(rem>sem){
//         n = floor(n/10);
//         cout<<n<<endl;
//     }
//     else{
//         n = floor(n/100)*10 - rem;
//         cout<<n<<endl;
//     }
//   }
// }


// void solve() {
//   int n,m;cin>>n>>m;
//   vector<int> V(m);
//   for(int i=0;i<m;i++) cin>>V[i];
//   sort(V.begin(),V.end());
//   int minx = 100000;

//   vector<int> mcqueen;
//   for(int i=0;i<m-n+1;i++){
//     for(int j=n-1+i;j<m;j++){
//       int dif = V[j]-V[i];
//       minx = min(minx,dif);
//     }
//     mcqueen.push_back(minx);
//   }
//   // cout<<1%2<<"fuckyeah";
//   int res = *min_element(mcqueen.begin(),mcqueen.end());
//   cout<<res<<endl;
  
// }



// void solve() {
//   // BINARY TREE & BIT MANIPULATION
//   int n;cin>>n;
//   int level = 0;
//   for (int i = 0; i < 64; i++)
//   {
//     if(pow(2,i)>n){
//       level = i-1;
//       break;
//     }
//   }
//   // cout<<level;
//   // int pos = n - (pow(2,level)-1);
//   int pos = n - (1LL << level) + 1;
//   // cout<<pos<<endl;
//   // int sum = n;
//   int sum1 = n;
//   pos = (pos + 1) / 2;
//   level = level-1;
//   while((level)>=0){
    
//     // sum+= pow(2,level) - 1 + pos;
//     sum1 += (1LL << level) - 1 + pos;
//     level--;
//     pos = (pos + 1) / 2;
//   }

//   cout<<sum1<<endl;
  
// } 
// void solve1() {
//     long long n;
//     cin >> n;

//     // Finding the highest bit set in n
//     int level = 63 - __builtin_clzll(n);
//     // cout<<level<<endl;
//     long long pos = n - (1LL << level) + 1;
//     // cout<<pos<<endl;
//     long long sum = n;

//     pos = (pos + 1) / 2;
//     level--;

//     while (level >= 0) {
//         sum += (1LL << level) - 1 + pos;
//         pos = (pos + 1) / 2;
//         level--;
//     }

//     cout << sum << endl;
// }


// void solve(){
//   int n;cin>>n;
//   string s;cin>>s;
//   if(s.find('0')!=string::npos==false || s.find('1')!=string::npos==false){
//     cout<<n<<endl;
//   }
//   else{
//     for (int i = 0; i < s.size(); i++)
//     {
//       if(s[i]!=s[i+1]){
//         // cout<<i<<endl;
//         s.erase(i,2);
//         if((s.find('0')!=string::npos==false || s.find('1')!=string::npos==false)){
//           cout<<s.size()<<endl;
//           break;
//         }
//         i-=i+1;
//       }
//     }

    // while(s.size()){
    //   int idx = s.find('0');
    //   // cout<<idx;
    //   if(idx==s.size()-1 && s[idx-1]=='1'){
    //     s.erase(idx-1,2);
    //     count++;
    //     if(count%2!=0 && s.find('0')!=string::npos==false || s.find('1')!=string::npos==false){
    //       cout<<"DA"<<endl;
    //       break;
    //     }
    //     else if(count%2==0 && s.find('0')!=string::npos==false || s.find('1')!=string::npos==false){
    //       cout<<"NET"<<endl;
    //       break;
    //     }
    //     // cout<<s<<endl;
    //   }
    //   else if(s[idx+1]=='1'){
    //     s.erase(idx,2);
    //     count++;
    //     if(count%2!=0 && s.find('0')!=string::npos==false || s.find('1')!=string::npos==false){
    //       cout<<"DA"<<endl;
    //       break;
    //     }
    //     else if(count%2==0 && s.find('0')!=string::npos==false || s.find('1')!=string::npos==false){
    //       cout<<"NET"<<endl;
    //       break;
    //     }
    //     // cout<<s<<endl;3
    //   }
    //   else if(s[idx-1]=='1'){
    //     s.erase(idx-1,2);
    //     count++;
    //     if(count%2!=0 && s.find('0')!=string::npos==false || s.find('1')!=string::npos==false){
    //       cout<<"DA"<<endl;
    //       break;
    //     }
    //     else if(count%2==0 && s.find('0')!=string::npos==false || s.find('1')!=string::npos==false){
    //       cout<<"NET"<<endl;
    //       break;
    //     }
    //   }
    // }
  // }
// }


//  GAME
// void solve() {
// int x,n,m;cin>>x>>n>>m;
// // vector<int> V(n);
// // for(int i=0;i<n;i++) cin>>V[i];
// // int maxx = max(m,n);
// while (n!=0 || m!=0)
// {
//   if(n!=0 && (m*10)<x){
//     x = floor(x/2)+10;
//     if(x<=0){
//       cout<<"YES"<<endl;
//       break;
//     }
//     n--;
//   }
//   else{
//     if(m!=0){
//     x -= 10;
//     if(x<=0){
//       cout<<"YES"<<endl;
//       break;
//     }
//     m--;
//   }
//   }
// }
// if(n==0 && m==0){
//   if(x<=0) cout<<"YES"<<endl;
//   else cout<<"NO"<<endl;
// }

// }

// void solve(){
//   int n;cin>>n;
//   string s;cin>>s;
//   if(s.find('0')!=string::npos==false || s.find('1')!=string::npos==false){
//     cout<<n<<endl;
//   }
//   else{
//     // int count = 0;
//     // for (int i = 0; i < s.size(); i++)
//     // {
//     //   if(s[i]!=s[i+1]){
//     //     // cout<<i<<endl;
//     //     s.erase(i,2);
//     //     // cout<<s<<endl;
//     //     count++;
//     //     if((count%2!=0 && s.size()==0) || (count%2!=0 && (s.find('0')!=string::npos==false || s.find('1')!=string::npos==false))){
//     //       cout<<"DA"<<endl;
//     //       break;
//     //     }
//     //     else if((s.size()==0 && count%2==0 ) || (count%2==0 && (s.find('0')!=string::npos==false || s.find('1')!=string::npos==false))){
//     //       cout<<"NET"<<endl;
//     //       break;
//     //     }
//     //     i-=i+1;
//     //   }
//     // }
//     int idx;
//     while(s.size()){
//       if(s[0]!='0'){
//         idx = s.find('0');
//       }
//       else{
//         idx = s.find('1');
//         idx--;
//       }
//       if(idx==s.size()-1 && s[idx-1]=='1'){
//         s.erase(idx-1,2);
//         if(s.find('0')!=string::npos==false || s.find('1')!=string::npos==false){
//           cout<<s.size()<<endl;
//           break;
//         }
//       }
//       else if(s[idx+1]=='1'){
//         s.erase(idx,2);
//         if(s.find('0')!=string::npos==false || s.find('1')!=string::npos==false){
//           cout<<s.size()<<endl;
//           break;
//         }
//       }
//       else if(s[idx-1]=='1'){
//         s.erase(idx-1,2);
//         if(s.find('0')!=string::npos==false || s.find('1')!=string::npos==false){
//           cout<<s.size()<<endl;
//           break;
//         }
//       }
//     }
//   }
// }

// void solve(){
//   int n,a,b;cin>>n>>a>>b;
//   vector<pair<int,int>> soccer_score;
//   if(n<=a+b){
//     int draw = 0;
//     for(int i=0;i<n;i++){
//       int minx = min(a,b);
//       int score_diff = abs(a-b);
//       if(score_diff!=0 && minx>=n-1)
//       soccer_score.push_back(make_pair(a,b));
//     }
//   }
// }

// void solve(){
//   string s;cin>>s;
//   bool Digit=false, Small=false, Upper=false;
//   for(char c:s){
//     if(isdigit(c)){
//       Digit = true;
//     }
//     if(islower(c)){
//       Small = true;
//     }
//     if(isupper(c)){
//       Upper = true;
//     }
//     if(((Digit && Small && Upper)==true) && s.size()>=5){
//       cout<<"Correct"<<endl;
//       break;
//     }
//   }
//   if(!(Digit && Small && Upper) || s.size()<5){
//     cout<<"Too weak"<<endl;
//   }

// }

// void solve(){
//   int n;cin>>n;
//   if(n<10){
//     cout<<n<<endl;
//   }
//   else{
//     int count = n;
//     int k = 9;
//     int least_bot = 0;
//     int shifter = 1;
//     while(count!=0){
//       count -= k;
//       least_bot += shifter*k;
//       shifter *= 10;
//       if(count<k){
//         k = count;
//       }
//       else{
//         k--;
//       }
//     }
//     cout<<least_bot<<endl;
//   }
// }
// bool is_integer(float k)
// {
//   return std::floor(k) == k;
// }
// void solve(){
//   int a,b,c,d;cin>>a>>b>>c>>d;

//   bool hss = is_integer(sqrt(a));
//   cout<<hss;
//   vector<int> bot;
//   bot.push_back(a);
//   bot.push_back(b);
//   bot.push_back(c);
//   bot.push_back(d);
//   sort(bot.begin(),bot.end());
//   if(bot[0]==bot[1]==bot[2]==bot[3]){
//     cout<<a*b<<endl;
//   }

//   else if(bot[0]!=bot[1]!=bot[2]!=bot[3]){
//     cout<<bot[0]*bot[2]<<endl;
//   }
//   else{
//     for(int i=0;i<4;i++){
//       if(bot[i]==bot[i+1]){
//         int hold = bot[i];
//         bot.erase(bot.begin()+i,bot.begin()+i+1);
//         int minxx = min(bot[0],bot[1]);
//         cout<<hold*minxx<<endl;
//         break;
//       }
//     }
//   }

// }

// bool is_integer(float k)
// {
//   return std::floor(k) == k;
// }
// void solve(){
//   int n;cin>>n;
//   if(is_integer(sqrt(n))){
//     cout<<4*sqrt(n)<<endl;
//   }

//   else{
//     int minx = INT_MAX;
//     for(int i=1;i<=n/2;i++){
//       if(n%i==0){
//         int x = n/i;
//         int sum = x + i;
//         minx = min(minx,sum);
//       }
//     }
//     cout<<2*minx<<endl;
//   }
// }







// void solve(){
//   string bot;cin>>bot;
//   string one = "1111111";
//   string zero = "0000000";
//   if(bot.find(one)!=string::npos || bot.find(zero)!=string::npos){
//     cout<<"YES"<<endl;
//   }
//   else{
//     cout<<"NO"<<endl;
//   }
// }

// void solve(){
//   int n,m;cin>>n>>m;
//   int count = 0;
//   while(n>=m){
//       n -= m;
//       n++;
//       count+=m;
//   }
//   cout<<count+n<<endl;
// }

// void solve(){
//   int n;cin>>n;
//   if(n<10){
//     cout<<n<<endl;
//   }
  
//   else{
//     int k =9;
//     int count = 0;
//     int shifter = 1;
//     while(n!=0){
//       n -= k;
//       count += shifter*k;
//       shifter *= 10;
//       if(n>=k){
//         k--;
//       }
//       else{
//         k=n;
//       }
//     }
//     cout<<count<<endl;
//     int v = (9999999999999999/6)*9;
//     cout<<v<<endl;
//   }
// }

void solve(){
  int n;cin>>n;
  int t1 = 15;
  int t2 = 20;
  int t3 = 25;
  int s1 = 6;
  int s2 = 8;
  int s3 =10;
  if(n<=s1){
    cout<<t1<<endl;
  }
  else if(n%6==0){
    cout<<(n/6)*t1<<endl;
  }
  else{
    int bot = n%6;
    if(bot==1 || bot==2){
      int x = ceil((n-s2)/6.0);
      cout<<(x*15)+20<<endl;
    }
    else if(bot==3 || bot==4){
      int x = ceil((n-s3)/6.0);
      cout<<(x*15)+25<<endl;
    }
    else{
      int x = ceil((n+(6-bot))/6.0);
      cout<<(x*15)<<endl;
    }
  }
}


void solve(){
  int n,m;cin>>n>>m;
  // vector<int> vec(n);
  vector<string> s(n);
  string s1="vika";
  for (int i = 0; i < n; i++) cin>>s[i];
  if(m<4){
    cout<<"NO"<<endl;
    int x = __gcd(n,m);
  }
  
  else{
    int vika_count = 0;
    int k = 0;
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if(s[j][i]==s1[k]){
          vika_count++;
          k++;
          break;
        }
      }
      if(vika_count==4){
        cout<<"YES"<<endl;
        break;
      }
    }
    if(vika_count!=4){
      cout<<"NO"<<endl;
    }
    
  }
  
  
}
void solve(){
  int n;cin>>n;
  vector<int> vec(n);
  for(int i=0;i<n;i++) cin>>vec[i];
  vector<int> even,odd;
  for(int i:vec){
    if(i%2==0){
      even.push_back(i);
    }
    else{
      odd.push_back(i);
    }
  }
  sort(even.rbegin(),even.rend());
  sort(odd.rbegin(),odd.rend());
  vec.clear();
  // Concatenate/ Merge Two vectors!
  vec.insert(vec.end(),even.begin(),even.end());
  vec.insert(vec.end(),odd.begin(),odd.end());
  // for(int i:vec) cout<<i<<" ";
  int good = 0;
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      if(gcd(vec[i],2*vec[j])>1){
        good++;
      }
    }
  }
  cout<<good<<endl;
}


// void solve(){
//   int n,k;cin>>n>>k;
//   vector<int> vec(n);
//   for(int i=0;i<n;i++) cin>>vec[i];
//   sort(vec.begin(),vec.end());
//   int maxx = 0;
//   int count = 0;
//   for(int i=0;i<vec.size()-1;i++){
//     if((vec[i+1]-vec[i])<=k){
//       // vec.erase(vec.begin()+i);
//       // i--;
//       count++;
//     }
//     else{
//       maxx = max(maxx,count);
//       count=0;
//     }
//   }
//   maxx = max(maxx,count);
//   cout<<(n-(maxx+1))<<endl;
  
// }

void solve(){
  int n;cin>>n;
  vector<int> bot = {2,3,4,5,6,7,8,9};
  
  if(n<10){
    int itr=0,maxx=0,store = 0;
    for(int i=0;i<n-2;i++){
      if(n%bot[i]==0){
        store = bot[i];
        itr = n/bot[i];
        maxx = max(maxx,store);
      }
    }
    if(maxx!=0){
      cout<<itr<<endl;
      for (int i = 0; i < itr; i++)
      {
        cout<<maxx<<" ";
      }
    }
    else{
      cout<<n<<endl;
      for(int i=0;i<n;i++){
        cout<<1<<" ";
      }
    }
    
  }
  else{
    int itr=0,maxx=0,store = 0;
    for(int i:bot){
      if(n%i==0){
        store = i;
        itr = n/i;
        maxx = max(maxx,store);
      }
    }
    if(maxx!=0){
      cout<<itr<<endl;
      for (int i = 0; i < itr; i++)
      {
        cout<<maxx<<" ";
      }
    }
    else if(maxx==0){
      cout<<n<<endl;
      for(int i=0;i<n;i++){
        cout<<1<<" ";
      }
      // int rem = n%9;
      // n -=rem;
      // int itr=0,maxx=0,store = 0;
      // for(int i:bot){
      //   if(n%i==0){
      //     store = i;
      //     itr = n/i;
      //     maxx = max(maxx,store);
      //   }
      // }
      // if(maxx!=0){
      //   cout<<itr+1<<endl;
      //   for (int i = 0; i < itr; i++)
      //   {
      //     cout<<maxx<<" ";
      //   }
      //   cout<<rem<<endl;
      // }
      }

  }
}


void solve() {

string s1,s2,s3;cin>>s1;cin>>s2;cin>>s3;
string phew,sush;
int n = s3.size();
if(n!=s1.size()+s2.size()){
  cout<<"NO"<<endl;
}
else{
  for (int i = 0; i < n; i++)
  {
    if(s3.find(s1[i])!=string::npos==true || s3.find(s2[i])!=string::npos==true){
      int idx1,idx2;
      if(phew!=s1){
        idx1 = s3.find(s1[i]);
        if(idx1<10000){
            phew = phew + s1[i];
            s3.erase(idx1,1);
        }
        else{
            break;
        }   
      }
      if(sush!=s2){
        idx2 = s3.find(s2[i]);
        if(idx2<10000){
            sush = sush + s2[i];
            s3.erase(idx2,1);
        }
        else{
            break;
        }
      }  
    } 
    if(phew==s1 && sush==s2){
        break;
    }    
  }
  if(phew==s1 && sush==s2){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
}
}

// int rem = n%10;
//   int x = n - rem;
//   int count = x;
//   while (floor(n/10)!=0)
//   {
    
//     n = floor(n/10) + rem;
//     rem = n%10;
//     x = n - rem;
//     count += x;
//   }
//   cout<<count+n<<endl;

// void solve(){
//   int n,k;cin>>n>>k;
//   vector<int> vec(n);
//   for(int i=0;i<n;i++) cin>>vec[i];
//   cout<<distance(vec.begin(),find(vec.begin(),vec.end(),1));
//   int O = 0; // origin
//   int b;
//   int a = n;
//   if(k==0){
//     if(a%2==0){
//       cout<<0<<endl;
//     }
//     else{
//       cout<<1<<endl;
//     }
//   }
//   else if(k>a){
//     cout<<abs(k-a)<<endl;
//   }
//   else if((a%2==0 && k%2==0) || (a%2!=0 && k%2!=0)){
//     cout<<0<<endl;
//   }
//   else if((a%2==0 && k%2!=0) || (a%2!=0 && k%2==0)){
//     cout<<1<<endl;
//   }
//   else{
//     cout<<0<<endl;
//   }
  
// }

// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   for(int i=0;i<n;i++) cin>>vec[i];
//   int muxx = 1;
//   for(int i:vec){
//     muxx *=i;
//   }
//   if(muxx==1){
//     cout<<0<<endl;
//   }
//   else{
//     int yash = 0;
//     int min_cost = 0;
//     sort(vec.begin(),vec.end());
//     for(int i:vec){
//       if(i<0){
//         min_cost += abs(i+1);
//       }
//       else{
//         min_cost += abs(i-1);
//       }
//     }
//     for(int i:vec){
//       if(i<0){
//         yash++;
//       }
//     }
//     if(yash%2==0){
//       cout<<min_cost<<endl;
//     }
//     else if(yash%2!=0 && binary_search(vec.begin(),vec.end(),0)==true){
//       cout<<min_cost<<endl;
//     }
//     else{
//       cout<<min_cost+2<<endl;
//     }
//   }
  
// }

//BITMASKING
// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   for(int i=0;i<n;i++) cin>>vec[i];
//   int maxx = *max_element(vec.begin(),vec.end());
//   int minx = vec[0];
//   for (int i = 0; i < n; i++)
//   {
//     minx = vec[i] & minx;
//     // approach second
//     // maxx = vec[i] & maxx;
//   }
//   cout<<minx<<endl;
// }

//Greedy Sorting-promo
void solve(){
  int n,q;cin>>n>>q;
  vector<int> vec(n);
  vector<pair<int,int>> query(q);
  for(int i=0;i<n;i++) cin>>vec[i];
  for(int i=0;i<q;i++){
    cin>>query[i].first;
    cin>>query[i].second;
  }
  sort(vec.begin(),vec.end());
  vector<int> temp(n);
  int sum = 0;
  // first make a sum of each element of vector, then extract wrt query
  for(int i = 0; i < n; i++)
  {
    sum += vec[i];
    temp[i] = sum; 
  }
  for(int i=0;i<q;i++){
    // temp = vec;
    int x = query[i].first;
    int y = query[i].second;
    // temp.erase(temp.begin()+x,temp.end());
    // cout<<accumulate(temp.begin()+x-y,temp.end(),0)<<endl;
    if(n-1-x<0) cout<<temp[n-1-x+y]<<endl;
    else cout<<temp[n-1-x+y]-temp[n-1-x]<<endl;
  }
}

// int count = 0;
//   vector<int> query = {2,3,4,5,6,7,8,9};
//   if(n<10){
//     int itr = 0;
//     for(int i=0;i<n-2;i++){
//       if(n%query[i]==0){
//         itr = n/query[i];
//         count = max(count,query[i]);
//       }
//     }
//     if(count!=0){
//       cout<<itr<<endl;
//       for(int i=0;i<itr;i++){
//         cout<<count<<" ";
//       }
//     }
//     else{
//       cout<<n<<endl;
//       for(int i=0;i<n;i++){
//         cout<<1<<" ";
//       }
//     }
    
//   }
//   else{
//     int itr = 0;
//     for(int i:query){
//       if(n%i==0){
//         itr = n/i;
//         count = max(count,i);
//       }
//     }
//     if(count!=0){
//       cout<<itr<<endl;
//       for(int i=0;i<itr;i++){
//         cout<<count<<" ";
//       }
//     }
//     else{
//       cout<<n<<endl;
//       for(int i=0;i<n;i++){
//         cout<<1<<" ";
//       }
//     }
//   }


// void solve(){
//   int x,y,z;cin>>x>>y>>z;
//   int a = max(x,y);
//   int b = min(x,y);
//   int c = min(a,z);
//   int meet = max(b,c);
//   // cout<<meet;
//   int minx_dist = abs(meet-x) + abs(meet-y) + abs(meet-z);
//   cout<<minx_dist<<endl;
  
// }

// void solve(){
//   int n,m,i,j;cin>>n>>m>>i>>j;
//   if(floor(n/2)>=i || floor(m/2)>=j){
//     cout<<n<<" "<<1<<" "<<1<<" "<<m<<endl;
//   }
//   else{
//     cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl;
//   }


// }

// void solve(){
//   int n;cin>>n;
//   if(n<25){
//     cout<<0<<endl;
//   }
//   else{
//     // string s = to_string(n);
//     int count=0;
//     int store = 0;
//     while(n!=0){
//       int x = n%100;
//       // cout<<x<<endl;
//       if(x==0 || x==25 || x==50 || x==75){
//         cout<<count<<endl;
//         break;
//       }
//       else if(n<100 && (x!=0 && x!=25 && x!=50 && x!=75)){
//         cout<<0<<endl;
//         break;
//       }
//       else{
//         if(n%10==5 || n%10==0){
//           store = n%10;
//           n/=10;
//           count++;
//           if(n%25==0){
//             n = n;
//           }
//           else{
//             n /= 10;
//             n = n*(pow(10,1)) + store;
//             if(n%100==55){
//               n/=10;
//               count++;
//             }
//           }
//         }
//         else{
//           count++;
//           n /= 10;
//         }
//       }
//     }
//   }
// }

// void solve(){
//   int n;cin>>n;
//   if(n%25==0 || n<25){
//     cout<<0<<endl;

//   }
//   else{
//     int count0 = 0;
//     int count5 = 0;
//     int store5 = n%10;
//     int store0 = n%10;
//     int it = n;
//     if(store5!=5) count5=1;
//     while (it!=0)
//     {
//       // it/=10;
//       if(store5!=5 && (it/10)%10!=5){
//         count5++;
//         it/=10;
//         continue;
        
//       }
//       if(store5==5){
//         if((it/10)%10==2 || (it/10)%10==7){
//           break;
//         }
//         else{
//           count5++;
//           // it/=10;
//         }
//       }
//       if((it/10)%10==5){
//         store5=5;
//         // it/=10;
//       }
//       it/=10;
//     }
//     // n/=10;
//     if(store0!=0) count0=1;
//     while(n!=0){
//       // n/=10;
//       if(store5!=0 && (n/10)%10!=0){
//         count0++;
//         n/=10;
//         continue;
//       }
//       if(store0==0){
//         if((n/10)%10==5 || (n/10)%10==0){
//           break;
//         }
//         else{
//           count0++;
//           // n/=10;
//         }
//       }
//       if((n/10)%10==0){
//         store5=0;
//         // n/=10;
//       }
//       n/=10;
//     }
//     cout<<min(count0,count5)<<endl;
//   }
// }


// void solve(){
//  int n,k;cin>>n>>k;
//  vector<int> vec1(n);
//  vector<int> vec2(n);
//  for(int i=0;i<n;i++) cin>>vec1[i];
//  for(int i=0;i<n;i++) cin>>vec2[i];
//  vector<int> flip(n);
//  int w=0;
//  for(int i=0;i<vec1.size();i++){
//   for(int j=0;j<vec2.size();j++){
//    if(abs(vec1[i]-vec2[j])<=k){
//      flip[w]=vec2[j];
//      w++;
//     //  vec1.erase(vec1.begin()+i,vec1.begin()+i+1);
//      vec2.erase(vec2.begin()+j);
//      for(auto it:vec2) cout<<it<<" ";
//      break;
//    }
//   }
//  }
//  for(auto it=flip.begin();it<flip.end();it++){
//   cout<<*it<<" ";
//  }
// }

//QUERY PROCESSING

// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   for(int i=0;i<n;i++) cin>>vec[i];
//    vector<pair<int,int>> query(n,make_pair(0,0));
//   // priority_queue<pair<int,int>> pqueue;
//   // int count=0;
//   // cout<<count<<endl;
//   int minx=0;
//   int maxx=0;
//   for(int i=0;i<n;i++){
//     if(i==0){
//       maxx = abs(vec[0]-vec[n-1]);
//       minx = abs(vec[0]-vec[1]);
//       query[i].first=minx;
//       query[i].second=maxx;
//     }
//     else if(i==n-1){
//       maxx = abs(vec[0]-vec[n-1]);
//       minx = abs(vec[n-2]-vec[n-1]);
//       query[i].first=minx;
//       query[i].second=maxx;
//     }
//     else{
//       int minx1 = abs(vec[i]-vec[i-1]);
//       int minx2 = abs(vec[i]-vec[i+1]);
//       minx = min(minx1,minx2);
//       int maxx1 = abs(vec[i]-vec[n-1]);
//       int maxx2 = abs(vec[i]-vec[0]);
//       maxx = max(maxx1,maxx2);
//       query[i].first=minx;
//       query[i].second=maxx;
//     }
//   }
//   for(int i=0;i<n;i++){
//     cout<<query[i].first<<" "<<query[i].second<<endl;
//   }
  
// }

void solve(){
  int n;cin>>n;
  vector<int> vec(n);
  for(int i=0;i<n;i++) cin>>vec[i];
  
  int muxx = 0;
  sort(vec.begin(),vec.end());
  for(int i:vec){
    if(i<0){
      muxx *= i;
    }
  }
  if(muxx==1){
    cout<<0<<endl;
  }
  else{
    int yas=0;
    int count = 0;
    for(int i:vec){
      if(i<0){
        count += abs(i+1);
        yas++;
      }
      else{
        count += abs(i-1);
      }
    }
    if(yas%2==0){
      cout<<count<<endl;
    }
    else if(yas%2==0 && binary_search(vec.begin(),vec.end(),0)==true){
      cout<<count<<endl;
    }
    else{
      cout<<count+2<<endl;
    }
  }
  
}

// HEAP SORT 

// void heapify(vector<int> &vec,int n, int i,int count){
//   int maxx = i;
//   int left = 2*i +1;
//   int right = 2*i + 2;
//   if(left<n && vec[left]>vec[maxx]){
//     maxx=left;
//   }
//   if(right<n && vec[right]>vec[maxx]){
//     maxx=right;
//   }
//   if(maxx!=i){
//     swap(vec[i],vec[maxx]);
//     count++;
//     heapify(vec,n,maxx,count);
//   }
// }
// int heapsort(vector<int> &vec,int n){
//   int count = 0;
//   for (int i = n/2 -1; i>=0; i--)
//   {
//     heapify(vec,n,i,count);
//   }
//   for(int i=n-1;i>=0;i--){
//     swap(vec[0],vec[i]);
//     count++;
//     heapify(vec,i,0,count);
//   }
//   return count;
// }
// int linsort(vector<int> &vec, int n){
//   int count = 0;
//   vector<int> temp = vec;
//   sort(temp.begin(),temp.end());
//   while(vec!=temp){
//     for(int i=0;i<n-1;i++){
//       if(vec[i]>vec[i+1]){
//         swap(vec[i],vec[i+1]);
//         count++;
//       }
//     }
//   }
//   return count;
// }
// // 6 5 4 3 2 1 
// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   vector<pair<int,int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap(n);
//   for(int i=0;i<n;i++) cin>>vec[i];
//   vector<int> temp=vec;
//   vector<int> rtemp=vec;
//   sort(temp.begin(),temp.end());
//   sort(rtemp.rbegin(),rtemp.rend());
//   int count=0;
//   for (int i = 0; i < n-1; i++)
//   {
//     if(rtemp[i]==rtemp[i+1]){
//       count++;
//       break;
//     }
//   }
//   if(vec==temp){
//     cout<<"YES"<<endl;
//   }
//   else if (count==1)
//   {
//     cout<<"YES"<<endl;
//   }
//   else if(vec==rtemp){
//     cout<<"NO"<<endl;
//   }
//   else{
//     cout<<"YES"<<endl;
//   }
//   // int count=0;
//   // cout<<count<<endl; 
//   // int count = 0;
//   // heapsort(vec,n);
//   // linsort(vec,n);
//   // int res = linsort(vec,n);
//   // int cal = n*(n-1)/2 - 1;
//   // cout<<cal<<" "<<res<<endl;
//   // for(auto it:vec) cout<<it<<" ";

// }
// void solve(){
//   int a,b,c,n;cin>>a>>b>>c>>n;
//   vector<int> vec = {a,b,c};
//   sort(vec.begin(),vec.end());
  
//   int x = vec[2]-vec[1];
//   int y = vec[2]-vec[0];
//   int A = vec[1] + x;
//   int B = vec[0] + y;
//   n-=(x+y);
//   if(n>=0){
//     if((A+B+vec[2]+n)%3==0){
//       cout<<"YES"<<endl;
//     }
//     else{
//       cout<<"NO"<<endl;
//     }
//   }
//   else{
//     cout<<"NO"<<endl;
//   }  
  
// }

// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   for(int i=0;i<n;i++) cin>>vec[i];
//   sort(vec.begin(),vec.end());
//   int start = n*vec[0];
//   int sum = accumulate(vec.begin(),vec.end(),0);
//   int min_eat = sum-start;
//   cout<<min_eat<<endl;
  
  
// }

// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   for(int i=0;i<n;i++) cin>>vec[i];
//   sort(vec.begin(),vec.end());
//   int even=0;
//   int odd=0;
//   for(auto it:vec){
//     if(it%2!=0) odd++;
//     else even++;
//   }
//   if(even>=0 && odd%2==0){
//     cout<<"YES"<<endl;
//   }
//   else{
//     cout<<"NO"<<endl;
//   }
  
// }

// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   vector<pair<int,int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap(n);
//   for(int i=0;i<n;i++) cin>>vec[i];
// //   vector<int> temp=vec;
// //   vector<int> rtemp=vec;
// //   sort(temp.begin(),temp.end());
// //   sort(rtemp.rbegin(),rtemp.rend());
//   int count=0;
//   sort(vec.begin(),vec.end());
//   int k;
//   if(binary_search(vec.begin(),vec.end(),0)==true){
//     k=0;
//     cout<<k<<endl;
//   }
//   else{
//     int neg = 0;
//     for(auto it:vec){
//       if(it<0){
//         neg++;
//       }
//     }
//     if(neg%2!=0){
//       k =0;
//       cout<<k<<endl;
//     }
//     else if(neg==0){
//       int k =1;
//       cout<<k<<endl;
//       cout<<1<<" "<<0<<endl;
//     }
//     else if(neg%2==0){
//       int k =1;
//       cout<<k<<endl;
//       cout<<1<<" "<<0<<endl;
//     }
//   }
// }
// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   string s;cin>>s;
//   vector<pair<int,int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap(n);
//   // for(int i=0;i<n;i++) cin>>vec[i];
// //   vector<int> temp=vec;
// //   vector<int> rtemp=vec;
// //   sort(temp.begin(),temp.end());
// //   sort(rtemp.rbegin(),rtemp.rend());
//   int count=0;
//   // sort(vec.begin(),vec.end());
//   string s1 = "abcdefghijklmnopqrstuvwxyz";
//   for (int i = 0; i < 26; i++)
//   {
//     if(s.find(s1[i])!=string::npos==true){
//       count++;
//     }
//   }
//   count = n - count;
//   int x = count*(count+1)/2;
//   int y = n*(n+1)/2;
//   cout<<(y-x)<<endl;
  
  
// }
// void solve1(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   string s;cin>>s;
//   int count= 0;
//   set<int> arr; //for unique insert
//   for(int i=0;i<n;i++){
//     arr.insert(s[i]-'a');
//     count+=arr.size();
//   }
//   cout<<count<<endl;
// }
// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
// //   string s;cin>>s;
//   vector<pair<int,int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap(n);
//   for(int i=0;i<n;i++) cin>>vec[i];
//   int count=0;
//   sort(vec.begin(),vec.end());
//   if(n<=2){
//     cout<<0<<endl;
//   }
//   else{
//     int count = 0;
//     for(int i=1;i<n-1;i++){
//       if(vec[i]<vec[n-1] && vec[i]>vec[0]){
//         count++;
//       }
//     }
//     cout<<count<<endl;
//   }
// }
//Function Greedy- f(x) = max(f(xi)*f(yi))
void solve(){
  int n;cin>>n;
  vector<int> vec(n);
//   string s;cin>>s;
  vector<pair<int,int>> query(n,make_pair(0,0));
  priority_queue<pair<int,int>> pqueue;
  unordered_map<int,int> hashmap(n);
  for(int i=0;i<n;i++) cin>>vec[i];
//   int count=0;
//   sort(vec.rbegin(),vec.rend());
  vector<int> minx;
  vector<int> maxx;
  vector<int> muxx;
  for(int i=0;i<n-1;i++){
    minx.push_back(min(vec[i],vec[i+1]));
    maxx.push_back(max(vec[i],vec[i+1]));
  }
  for(int i=0;i<n-1;i++){
    muxx.push_back(maxx[i]*minx[i]);
  }
  int count = *max_element(muxx.begin(),muxx.end());
  cout<<count<<endl;
}

void solve(){
  int n;cin>>n;
  int k;cin>>k;
  vector<int> vec(n);
//   string s;cin>>s;
//   vector<pair<int,int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap(n);
  for(int i=0;i<n;i++) cin>>vec[i];
//   int summ = accumulate(vec.begin(),vec.end(),0);
//   sort(vec.begin(),vec.end());
  int maxx = 0;
  int minx = 0;
  int rem_count =0;
  for(auto it:vec){
    maxx += ceil(it/(double)k);
    minx += floor(it/k);
    rem_count += it%k;
  }
  minx += ceil(rem_count/(double)k);
  cout<<minx<<" "<<maxx<<endl;
  
}

//Permutation sort!

void solve(){
  int n;cin>>n;
  vector<int> vec(n);
  // string s;cin>>s;
  vector<pair<int,int>> query(n,make_pair(0,0));
  priority_queue<pair<int,int>> pqueue;
  unordered_map<int,int> hashmap;
  for(int i=0;i<n;i++) cin>>vec[i];
  vector<int> temp = vec;
  sort(temp.begin(),temp.end());
  int count=0;
  // int maxx=*max_element(vec.begin(),vec.end());
  // int minx=*min_element(vec.begin(),vec.end());
  int idx1 = distance(vec.begin(),find(vec.begin(),vec.end(),n));
  int idx2 = distance(vec.begin(),find(vec.begin(),vec.end(),1));

  if(temp==vec){
    cout<<count<<endl;
  }
  else if(idx2==0 || idx1==n-1){
    count++;
    cout<<count<<endl;
  }
  else if(idx2==n-1 && idx1==0){
    count+=3;
    cout<<count<<endl;
  }
  else if(idx2!=0 && idx1!=n-1){
    count+=2;
    cout<<count<<endl;
  }
}

// NY

// void solve(){
//   int n,q;cin>>n>>q;
//   vector<int> vec(n);
//   // string s;cin>>s;
//   vector<pair<vector<int>,int>> query(q,make_pair(vector<int>(2),0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   for(int i=0;i<n;i++) cin>>vec[i];
//   // int count=0;
//   // sort(vec.rbegin(),vec.rend());
//   vector<int> sum(n);
//   int sum1=0;
//   for (int i = 0; i < n; i++)
//   { 
//     sum1 += vec[i];
//     sum[i] = sum1; 
//   }
//   int init_sum=0;
//   for (int i = 0; i < q; i++)
//   {
//     cin>>query[i].first[0];
//     cin>>query[i].first[1];
//     cin>>query[i].second;
//   }
//   for (int i = 0; i < q; i++)
//   {
//     int x = query[i].first[0];
//     int y =query[i].first[1];
//     int ch = query[i].second;
//     // int sum2 = accumulate(vec.begin()+x-1,vec.begin()+y,init_sum);
//     // cout<<sum2<<endl;
//     int fptr = sum[y-1];
//     int sptr = sum[x-2];
//     int sum2=0;
//     if(x>=2){
//       sum2 = fptr-sptr;
//     }
//     else{
//       sum2=fptr;
//     }
//     int res=sum[n-1]-sum2;
//     int var = ch*(y-x+1);
//     if((res+var)%2!=0){
//       cout<<"YES"<<endl;
//     }
//     else cout<<"NO"<<endl;
//     // cout<<sum+var<<endl;
//   }

// }

// Grouping Increases DP

// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   // string s;cin>>s;
// //   vector<pair<vector<int>,int>> query(q,make_pair(vector<int>(2),0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   for(int i=0;i<n;i++) cin>>vec[i];
//   int count=0;
//   // sort(vec.rbegin(),vec.rend());
//   vector<int> temp;
//   int headptr=vec[0];
//   int fptr=1e9;
//   // headptr<fptr always- if not swap it!
//   for (int i = 1; i < n; i++)
//   {
//     if(vec[i]<=headptr){
//       headptr = vec[i];
//     }
//     else if(vec[i]<=fptr){
//       fptr = vec[i];
//     }
//     else if(vec[i]>fptr && vec[i]>headptr){
//       count++;
//       headptr = vec[i]; // swap of headptr>fptr!
//     }
//     if(headptr>fptr){
//       swap(headptr,fptr);
//     }
//   }
//   cout<<count<<endl;
//   // this code is contributed by prashant mishra under the contest!


// }

// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   // string s;cin>>s;
// //   vector<pair<vector<int>,int>> query(q,make_pair(vector<int>(2),0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   for(int i=0;i<n;i++) cin>>vec[i];
//   // int count=0;
//   // sort(vec.rbegin(),vec.rend());
//   int maxx = *max_element(vec.begin(),vec.end()); 
//   int minx = *min_element(vec.begin(),vec.end());
//   int idx1 = distance(vec.begin(),find(vec.begin(),vec.end(),maxx));
//   int idx2 = distance(vec.begin(),find(vec.begin(),vec.end(),minx));
//   int x = max(idx1,idx2);
//   int y = min(idx1,idx2);
//   int z = y+1+n-x;
//   int w = min(x+1,n-y);
//   int res = min(w,z);
//   cout<<res<<endl;
//     // if(n-x<=y+1){
//     //   int cnt = n-x;
//     //   if(y+1<=ceil(x/(double)2)){
//     //     cout<<y+1+cnt<<endl;
//     //   }
//     //   else{
//     //     cout<<n-y<<endl;
//     //   }
      
//     // }


//     // else{
//     //   int cnt=y+1;
//     //   if(x-y<=ceil((n-cnt)/(double)2)){
//     //     cout<<x-y+cnt<<endl;
//     //   }
//     //   else{
//     //     cout<<n-x+1<<endl;
//     //   }
//     // }


// }


// void solve(){
//   int a,b;cin>>a>>b;
//   // vector<int> vec(n);
//   // string s;cin>>s;
// //   vector<pair<vector<int>,int>> query(q,make_pair(vector<int>(2),0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   // for(int i=0;i<n;i++) cin>>vec[i];
//   // int count=1;
//   // int i=0;
//   // sort(vec.begin(),vec.end());
//   // while(a>0 && b>0){
//   //   int x = max(a,b);
//   //   swap(a,x);
//   //   a--;
//   //   int y = max(a,b);
//   //   swap(b,x);
//   //   b--;
//   //   if(a==0){
//   //     cout<<"Bob"<<endl;
//   //     break;
//   //   }
//   //   else if(b==0){
//   //     cout<<"Alice"<<endl;
//   //     break;
//   //   }

//   // }
//   int x = abs(a-b);
//   if(x%2!=0){
//     cout<<"Alice"<<endl;

//   }
//   else{
//     cout<<"Bob"<<endl;
//   }
// }


// void solve(){
//   int n;cin>>n;
//   // vector<int> vec(n);
//   string s;cin>>s;
// //   vector<pair<vector<int>,int>> query(q,make_pair(vector<int>(2),0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   // for(int i=0;i<n;i++) cin>>vec[i];
//   int mcount=0, pcount=0;
//   for (int i = 0; i < n; i++)
//   {
//     if(s[i]=='-'){
//       mcount++;
//     }
//     else{
//       pcount++;
//     }
//   }
//   int x = abs(mcount-pcount);
//   cout<<x<<endl;
  

// }
// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   // string s;cin>>s;
// //   vector<pair<vector<int>,int>> query(q,make_pair(vector<int>(2),0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   for(int i=0;i<n;i++) cin>>vec[i];
//   int count=1;
//   int i=0;
//   sort(vec.begin(),vec.end());
//   for(auto it:vec){
//     if(hashmap.find(it)!=hashmap.end()){
//       count++;
//       // hashmap.clear();
//       i=0;
//       // erase(hashmap.begin(),hashmap.end())
//       // hashmap.erase(it);
//       if(count==3){
//         cout<<it<<endl;
//         break;
//       }
//     }
//     else{
//       count=1;
//       hashmap.insert({it,i});
//       i++;
//     }
//   }
//   if(count!=3){
//     cout<<-1<<endl;
//   }

// }

// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   // string s;cin>>s;
//   vector<pair<int,int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   // for(int i=0;i<n;i++) cin>>vec[i];
//   // int count=0;
//   // sort(vec.rbegin(),vec.rend());
//   // string decode = s;
//   int tre_sum=0;
//   if(n%2==0){
//     tre_sum = (n/2)*(n+1);
//   }
//   else{
//     tre_sum = n*((n+1)/2);
//   }
  
//   // cout<<tre_sum;
//   int binary_bit = log2(n);
//   // cout<<binary_bit;
//   int exprem = pow(2,binary_bit+1) - 1;
//   // cout<<exprem;
//   int res = tre_sum - 2*exprem;
//   cout<<res<<endl;

// }



// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   // string s;cin>>s;
//   vector<pair<int,int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//    for(int i=0;i<n;i++) cin>>vec[i];
//   // int count=0;
//   // sort(vec.rbegin(),vec.rend());
//   // string decode = s;
//   int slow=0;
//   int fast=0;
//   vector<int> sequence(n);
//   if(n%2==0){
//     fast=n-1;
//     //two pointers
//     for(int i=0;i<n-1;i+=2){
//       sequence[i]=vec[slow];
//       slow++;
//     }
//     for(int i=1;i<n;i+=2){
//       sequence[i]=vec[fast];
//       fast--;
//     }
//   }
//   else{
//     fast = n-1;
//     for(int i=0;i<n;i+=2){
//       sequence[i]=vec[slow];
//       slow++;
//     }
//     for(int i=1;i<n-1;i+=2){
//       sequence[i]=vec[fast];
//       fast--;
//     }
  
//   }
//   for(auto it:sequence) cout<<it<<" ";
//   //ptr
//   cout<<endl;
// }

//HOME Last success hit -> mod+division

// void solve(){
//   int l,r,a;cin>>l>>r>>a;
//   // vector<int> vec(n);
//   // string s;cin>>s;
//   // vector<pair<int,int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   // for(int i=0;i<n;i++) cin>>vec[i];
//   // int count=0;
//   // sort(vec.rbegin(),vec.rend());
//   // string decode = s;
//   int fn=0;
//   if(r%a==0){
//     if((((r-1)/a)+(r-1)%a)>(r/a) && (r-1)>=l){
//       fn = floor((r-1)/a)+(r-1)%a;
//     }
//     else{
//       fn=floor(r/a);
//     }
//   }
//   else{
//     int rem = r%a;
//     if(rem!=a-1 && r-rem-1>=a-1 && r-rem-1>=l){
//       fn = floor((r-rem-1)/a) + (r-rem-1)%a;
//     }
//     else if((((r-1)/a)+(r-1)%a)>((r/a)+(r%a)) && (r-1)>=l){
//       fn = floor((r-1)/a)+(r-1)%a;
//     }
//     else{
//       fn = floor(r/a)+(r%a);
//     }
//   }
//   cout<<fn<<endl;

//Decoding

// }
// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   string s;cin>>s;
//   vector<pair<int,int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   // for(int i=0;i<n;i++) cin>>vec[i];
//   // int count=0;
//   // sort(vec.rbegin(),vec.rend());
//   string decode = s;
//   if(n%2!=0){
//     decode[n/2]=s[0];
//     s.erase(s.begin()+0);
//     int i=1;
//     while(s.size()!=0){
//       decode[(n/2)-i] = s[0];
//       s.erase(s.begin()+0);
//       decode[(n/2)+i] = s[0];
//       s.erase(s.begin()+0);
//       i++;
//     }
//   }
//   else{
//     decode[(n/2)-1]=s[0];
//     s.erase(s.begin()+0);
//     int i=1;
//     while(s.size()!=0){
//       decode[(n/2)-1+i] = s[0];
//       s.erase(s.begin()+0);
//       if(s.size()==0){
//         break;
//       }
//       decode[(n/2)-1-i] = s[0];
//       s.erase(s.begin()+0);
//       i++;
//     }
//   }
//   cout<<decode;
  

// }
//XOR avg
// if(n%2!=0){
//     for(int i=0;i<n;i++)
//     cout<<1<<" ";
//   }
//   else{
//     int x = n+1;
//     cout<<1<<" ";
//     for(int i=0;i<n-1;i++){
//       cout<<x<<" ";
//     }
//   }
// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   for(int i=0;i<n;i++) cin>>vec[i];
//   int count=1;
//   int maxx=1;
//   for(int i=0;i<n-1;i++){
//     if(vec[i+1]>vec[i]){
//       count++;
//       maxx=max(maxx,count);
//     }
//     else{
//       count=1;
//     }
//   }
//   cout<<maxx<<endl;
// }




// void solve(){
//   int a,b;cin>>a>>b;
// //   vector<int> vec(n);
//   // string s;cin>>s;
//   // vector<pair<int,int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   // for(int i=0;i<n;i++) cin>>vec[i];
//   // int count=0;
//   // sort(vec.rbegin(),vec.rend());
//   // string decode = s;
//   int tre_sum=0;
//   if(a==b){
//     cout<<0<<" "<<0<<endl;
//   }
//   else if(abs(a-b)==1){
//     cout<<__gcd(a,b)<<" "<<0<<endl;
//   }
//   else{
//     int x = abs(a-b);
//     int maxx = max(a,b);
//     int y = min(a,b);
//     int res = min(maxx%x,x-maxx%x);
//     cout<<x<<" "<<res<<endl;
    
//   }
// }

// int partition(vector<int> &arr, int start, int end, int cnt)
// {
 
//     int pivot = arr[start];
 
//     int count = 0;
//     for (int i = start + 1; i <= end; i++) {
//         if (arr[i] <= pivot)
//             count++;
//     }
 
//     // Giving pivot element its correct position
//     int pivotIndex = start + count;
//     swap(arr[pivotIndex], arr[start]);
//     cnt++;
 
//     // Sorting left and right parts of the pivot element
//     int i = start, j = end;
 
//     while (i < pivotIndex && j > pivotIndex) {
 
//         while (arr[i] <= pivot) {
//             i++;
//         }
 
//         while (arr[j] > pivot) {
//             j--;
//         }
 
//         if (i < pivotIndex && j > pivotIndex) {
//             swap(arr[i++], arr[j--]);
//             cnt++;
//         }
//     }
 
//     return pivotIndex,cnt;
// }
 
// int quickSort(vector<int> &arr, int start, int end, int cnt)
// {
 
//     // base case
//     if (start >= end)
//         return cnt;
 
//     // partitioning the array
//     int p = partition(arr, start, end,cnt);
//     cnt+=2;
 
//     // Sorting the left part
//     quickSort(arr, start, p - 1, cnt);
 
//     // Sorting the right part
//     quickSort(arr, p + 1, end, cnt);
//     return cnt;
// }

// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   // string s;cin>>s;
//   // vector<pair<int,int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   for(int i=0;i<n;i++) cin>>vec[i];
//   // int count=0;
//   // sort(vec.rbegin(),vec.rend());
//   // string decode = s;
//   int tre_sum=0;
//   int cnt=0;
//   int res = quickSort(vec,0,n-1,cnt);
//   cout<<res;
//   // bool flag = false;
//   // for(int i=1;i<n-1;i++){
//   //   if(vec[i]>vec[i-1] && vec[i]>vec[i+1]){
//   //     int j=i;
//   //     int k=i+1;
//   //     int l=i+2;
//   //     flag = true;
//   //     cout<<"YES"<<endl;
//   //     cout<<j<<" "<<k<<" "<<l<<endl;
//   //     break;
//   //   }
//   // }
//   // if(flag==false) cout<<"NO"<<endl;

// }


// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   // string s;cin>>s;
//   // vector<pair<int,int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   for(int i=0;i<n;i++) cin>>vec[i];
//   // int count=0;
//   sort(vec.rbegin(),vec.rend());
//   // string decode = s;
//   int hcount=1;
//   int sptr = vec[0];
//   int fptr = vec[n-1];
//   int lcount=1;
//   for(int i=1;i<n;i++){
//     if(vec[i]==sptr){
//       hcount++;
//     }
//     else{
//       break;
//     }
//   }
//   for (int i = 1; i < n; i++)
//   {
//     if(vec[n-1-i]==fptr){
//       lcount++;
//     }
//     else{
//       break;
//     }
//   }
//   if(lcount+hcount>n){
//     cout<<(lcount*(n-1))<<endl;
//   }
//   else{
//     cout<<(lcount*hcount)*2<<endl;
//   }
  
  
  

// }

// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   // string s;cin>>s;
//   // vector<pair<int,int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   for(int i=0;i<n;i++) cin>>vec[i];
//   // int count=0;
//   sort(vec.begin(),vec.end());
//   // string decode = s;
//   bool flag=false;
//   if(vec[0]!=0){
//     cout<<0<<endl;
//   }
  
//   else if(vec[0]==0 && vec[1]!=0){
//     for(int i=1;i<n;i++){
//       if(vec[i]-vec[i-1]>1){
//         flag = true;
//         cout<<vec[i-1]+1<<endl;
//         break;
//       }
//     }
//     if(flag==false) cout<<vec[n-1]+1<<endl;
//   }
//   else{
//     bool flag2=false;
//     set<int> map;
//     set<int> map2;
//     for(int i=0;i<n;i++){
//       if(map.find(vec[i])!=map.end()==false){
//         map.insert(vec[i]);
//       }
//       else{
//         map2.insert(vec[i]);
//       }
//     }
//     // for(auto it:map){
//     //   cout<<it<<" ";
//     // }
//     // for(auto it:map2){
//     //   cout<<it<<" ";
//     // }
//     // cout<<map.size()<<" "<<map2.size()<<endl;
//     int store=0;
//     for (int i = 1; i < map.size(); i++)
//     {
//       int f=*next(map.begin(),i-1);
//       int s=*next(map.begin(),i);
//       if(s-f>1){
//         flag=true;
//         store+=f+1;
//         break;
//       }
//     }
//     if(flag==false) store += *next(map.begin(),map.size()-1)+1;
//     for (int i = 1; i < map2.size(); i++)
//     {
//       int f=*next(map2.begin(),i-1);
//       int s=*next(map2.begin(),i);
//       if(s-f>1){
//         store+=f+1;
//         flag2 = true;
//         break;
//       }
//     }
//     if(flag2==false) store += *next(map2.begin(),map2.size()-1)+1;
//     cout<<store<<endl;
    
//   }
  

// }





// void solve(){
//   long long n,m,a;cin>>n>>m>>a;
//   // vector<int> vec(n);
//   // string s;cin>>s;
//   // vector<pair<int,int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   // for(int i=0;i<n;i++) cin>>vec[i];
//   // int count=0;
//   // sort(vec.begin(),vec.end());
//   // vector<int> temp = vec;
//   // sort(temp.begin(),temp.end());
//   // for (int i = n-2; i>=0; i--)
//   // {
//   //   if(vec[i]>vec[i+1]){
//   //     while(vec[i]>vec[i+1]){
//   //       vec[i] = vec[i]/2;
//   //       count++;
//   //     }
//   //   }
//   //   if(vec[i]==vec[i+1]){
//   //     vec[i]=vec[i]/2;
//   //     count++;
//   //   }
//   // }
//   // int check=1;
//   // for (int i = 0; i < n-1; i++)
//   // {
//   //   if(vec[i]<vec[i+1]){
//   //     check++;
//   //   }
//   // }
//   // for(auto it=0;it<n;it++){
//   //   sett.insert(vec[it]);
//   // }
//   // if(sett.size()==n) cout<<count<<endl;
//   // else cout<<-1<<endl;
//   // // if(check==n) cout<<count<<endl;
//   // // else cout<<-1<<endl;
//   long long x = ceil(n/(double)a);
//   long long y = ceil(m/(double)a);
//   // cout<<x*y<<endl;
//   if(n==m && a==1){
//     cout<<n*m<<endl;
//   }
//   else if(n==m){
//     cout<<x*y<<endl;
//   }
//   else{
//     // long long x = ceil(n/(double)a);
//     // long long y = ceil(m/(double)a);
//     if(x==1 && y==1){
//       cout<<1<<endl;
//     }
//     else if(x==1){
//       cout<<y<<endl;
//     }
//     else if(y==1){
//       cout<<x<<endl;
//     }
//     else{
//       cout<<x*y<<endl;
//     }
//   }
// }
// void solve(){
//   long long k,n;cin>>k>>n;
//   // vector<long long> vec(n);
//   // string s;cin>>s;
//   vector<pair<long long,long long>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   // for(int i=0;i<n;i++) cin>>vec[i];
//   // int count=0;
//   // sort(vec.begin(),vec.end());
//   for (long long i = 0; i < n; i++)
//   {
//     cin>>query[i].first;
//     cin>>query[i].second;
//   }
//   sort(query.begin(),query.end());
//   // for(auto it:query) cout<<it.first<<" "<<it.second;
//   bool flag = false;
//   for (long long i = 0; i < n; i++)
//   {
//     if(k>query[i].first){
//       k += query[i].second;
//     }
//     else{
//       flag = true;
//       cout<<"NO"<<endl;
//       break;
//     }
//   }
//   if(flag==false){
//     cout<<"YES"<<endl;
//   }

// }

// void solve(){
//   // long long k,n;cin>>k>>n;
//   // vector<long long> vec(n);
//   string s;cin>>s;
//   // vector<pair<long long,long long>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   // for(int i=0;i<n;i++) cin>>vec[i];
//   // int count=0;
//   // sort(vec.begin(),vec.end());
//   string s1;
//   for (int i = 0; i < s.size(); i++)
//   {
//     s1 += tolower(s[i]);
//   }
//   // cout<<s1<<endl;
//   string check = "aeiouy";
//   for (int i = 0; i < 6; i++)
//   {
//     while(s1.find(check[i])!=string::npos==true){
//       int x = s1.find(check[i]);
//       s1.erase(s1.begin()+x);
//     }
//   }
//   // cout<<s1<<endl;
//   for (int i = 0; i < s1.size(); i++)
//   {
//     cout<<"."<<s1[i];
//   }
  
  
// }

// void solve(){
//   long long n;cin>>n;
//   // vector<long long> vec(n);
//   // string s;cin>>s;
//   vector<pair<vector<long long>,long long>> query(n,make_pair(vector<long long>(2),0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   // for(int i=0;i<n;i++) cin>>vec[i];
//   // int count=0;
//   // sort(vec.begin(),vec.end());
//   long long sum=0;
//   for (int i = 0; i < n; i++)
//   {
//     cin>>query[i].first[0];
//     cin>>query[i].first[1];
//     cin>>query[i].second;
//     sum += query[i].first[0] + query[i].first[1] + query[i].second;
//   }
//   if(sum==0) cout<<"YES"<<endl;
//   else cout<<"NO"<<endl;
// }

// void solve(){
//   long long n,t;cin>>n>>t;
//   vector<long long> vec(n);
//   // string s;cin>>s;
//   vector<pair<vector<long long>,long long>> query(n,make_pair(vector<long long>(2),0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   for(int i=1;i<n;i++) cin>>vec[i];
//   long long count=0;
//   // sort(vec.begin(),vec.end());
//   for (int i = 1; i < n; i++)
//   {
//     if(vec[i]+i==t){
//       cout<<"YES"<<endl;
//       break;
//     }
//     else if(vec[i]+i<t){
//       i = i+vec[i]-1;
//     }
//     else{
//       cout<<"NO"<<endl;
//       break;
//     }
//   }
  
// }
// void solve(){
//   long long a,b,c;cin>>a>>b>>c;
//   // vector<long long> vec = {a,b,c};
//   // string s;cin>>s;
//   // vector<pair<vector<long long>,long long>> query(n,make_pair(vector<long long>(2),0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   // for(int i=1;i<n;i++) cin>>vec[i];
//   long long count=0;
//   // sort(vec.begin(),vec.end());
//   int x = (a+b)*c;
//   int y = a+(b*c);
//   int z = a*(b+c);
//   int w = a*(b*c);
//   int m = (a*b)+c;
//   int n = a+b+c;
//   vector<long long> vec = {x,y,z,w,m,n};
//   sort(vec.begin(),vec.end());
//   int res = vec[5];
//   cout<<res<<endl;

// }

// void solve(){
//   long long n,m;cin>>n>>m;
//   vector<long long> vec(m+1);
//   // string s;cin>>s;
//   vector<pair<vector<long long>,long long>> query(n,make_pair(vector<long long>(2),0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   for(int i=1;i<m+1;i++) cin>>vec[i];
//   long long count=0;
//   // sort(vec.begin(),vec.end());
//   int ini_pos = 1;
//   for(int i=1;i<m+1;i++){
//     if(vec[i]>=ini_pos){
//       count += vec[i]-ini_pos;
//       ini_pos = vec[i];
//     }
//     else{
//       count += n-ini_pos+vec[i];
//       ini_pos = vec[i];
//     }
    
//   }
//   cout<<count<<endl;
  
// }


// void solve(){
//   // long long n;cin>>n;
//   // // vector<long long> vec(m+1);
//   // // string s;cin>>s;
//   // // vector<pair<vector<long long>,long long>> query(n,make_pair(vector<long long>(2),0));
//   // // priority_queue<pair<int,int>> pqueue;
//   // // unordered_map<int,int> hashmap;
//   // // unordered_set<int> sett;
//   // // for(int i=1;i<m+1;i++) cin>>vec[i];
//   // int count=0;
//   // while(n){
//   //   if(n%2!=0){
//   //   count++;
//   //   }
//   //   n/=2;
//   // }
//   // cout<<count<<endl;
//   long long n,k;cin>>n>>k;
//   // vector<long long> vec(m+1);
//   // string s;cin>>s;
//   // vector<pair<vector<long long>,long long>> query(n,make_pair(vector<long long>(2),0));
//   // priority_queue<pair<int,int>> pqueue;
//   // unordered_map<int,int> hashmap;
//   // unordered_set<int> sett;
//   // for(int i=1;i<m+1;i++) cin>>vec[i];
// //   int count=1;
//   if(n==1 && k==10){
//     cout<<-1<<endl;
//   }
//   else if(n>1 && k==10){
//     cout<<1;
//     for (int i = 0; i < n-1; i++)
//     {
//       cout<<0;
//     }
//   }
//   else{
//     for(int i=0;i<n;i++){
//       cout<<k;
//     }
//   }
  
//   cout<<endl;
// }


void solve(){
  long long n,m,a,b;cin>>n>>m>>a>>b;
//   vector<long long> vec(m+1);
//   // string s;cin>>s;
//   vector<pair<vector<long long>,long long>> query(n,make_pair(vector<long long>(2),0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   for(int i=1;i<m+1;i++) cin>>vec[i];
  long long count=0;
  // sort(vec.begin(),vec.end());
  long long minx =min(n,m);
  long long maxx= max(n,m);
  if(n==0 && m==0){
    count=0;
  }
  else if(n==m && 2*a>=b){
    count+=b*n;
  }
  else if(n==m && 2*a<b){
    count+=2*a*n;
  }
  else if(n!=m && 2*a>=b){
    count+=b*minx;
    maxx -= minx;
    count+= a*maxx;
  }
  else if(n!=m && 2*a<b){
    count+=a*(minx+maxx);
  }
  cout<<count<<endl;
}

// void solve(){
//   long long n,k;cin>>n>>k;
// //   vector<long long> vec(m+1);
// //   // string s;cin>>s;
// //   vector<pair<vector<long long>,long long>> query(n,make_pair(vector<long long>(2),0));
// //   priority_queue<pair<int,int>> pqueue;
// //   unordered_map<int,int> hashmap;
// //   unordered_set<int> sett;
// //   for(int i=1;i<m+1;i++) cin>>vec[i];
//   long long count=0;
//   // sort(vec.begin(),vec.end());
//   if(n<=k){
//     count += ceil(k/(double)n);
//   }
//   else{
//     if(n%k==0){
//       count++;
//     }
//     else{
//       count+=2;
//     }
//   }
//   cout<<count<<endl;
// }

//LETTER String

// void solve(){
//   long long n,m;cin>>n>>m;
//   vector<string> vec(n);
// //   // string s;cin>>s;
//   vector<pair<string,string>> query(m);
//   // priority_queue<pair<int,int>> pqueue;
//   // unordered_map<int,int> hashmap;
//   // unordered_set<int> sett;
//   for (int i = 0; i < m; i++)
//   {
//     cin>>query[i].first;
//     cin>>query[i].second;
//   }
  
//   for(int i=0;i<n;i++) cin>>vec[i];
//   long long count=0;
//   for (int i = 0; i < n; i++)
//   {
//     auto idx = distance(query.begin(),find_if(query.begin(), query.end(), [&](const auto& pair)  { return pair.first == vec[i]; }));
//     if(vec[i].size()<=query[idx].second.size()){
//       vec[i] = vec[i];
//     }
//     else{
//       vec[i]=query[idx].second;
//     }
//   }
//   for(int i=0;i<n;i++) cout<<vec[i]<<" ";
//   // sort(vec.begin(),vec.end());
//   cout<<endl;
// }

// God subarray DP- sigma(ai) = r-l+1;

// void solve() {
//     int n;cin >> n;
//     string s;cin>>s;
//     vector<int> vec(n);
//     for(int i=0;i<n;i++){
//       vec[i]=s[i]-'0';
//     }
//     vector<int> dp(11*n, 0);
//     int res = 0;
//     int count = n;
//     dp[count]++;
//     //sig(ai) = r-l+1;

//     for(auto it:vec) {
//         count += it-1;
//         // cout<<count<<endl;
//         res += dp[count];
//         dp[count]++;
//         // cout<<dp[count]<<endl;
//     }
//     cout<<res<<endl;
// }
// void solve() {
//     int n;cin >> n;
//     string s;
//     string teamA;
//     string teamB;
//     int score1=1,score2=0;
//     cin>>s;
//     teamA=s;
//     n--;
//     while(n--){
//       cin>>s;
//       if(s==teamA){
//         score1++;
//       }
//       else{
//         teamB=s;
//         score2++;
//       }
//     }
//     if(score1>score2) cout<<teamA<<endl;
//     else cout<<teamB<<endl;
// }

// void solve(){
//   long long n,x;cin>>n>>x;
//   vector<string> vec(n);
// //   // string s;cin>>s;
//   // vector<pair<string,string>> query(m);
//   // priority_queue<pair<int,int>> pqueue;
//   // unordered_map<int,int> hashmap;
//   // unordered_set<int> sett;
//   long long count=0;
//   int i =1;
//   if(n==1 && x==1){
//     cout<<1<<endl;
//     return;
//   }
//   else if(x<=n){
//     while(i<=x){
//       if(x%i==0){
//         count++;
//         i++;
//       }
//       else i++;
//     }
//   }
//   else{
//     while(i<=n){
//       if(x%i==0 && (x/i)<=n){
//         count++;
//         i++;
//       }
//       else{
//         i++;
//       }
//     }
//     // cout<<count;
//   }
//   cout<<count<<endl;
  
  
// }

void solve(){
  long long n,x;cin>>n>>x;
  // vector<string> vec(n);
  string s;cin>>s;
  // vector<pair<string,string>> query(m);
  priority_queue<pair<int,int>> pqueue;
  unordered_map<int,int> hashmap;
  unordered_set<int> sett;
  string bot = "hello";
  // long long count=0;
  int bot_trace=0;
  long long count=0;
  while(n){
    n--;
    count++;
    if(count%x==0){
      n++;
    }
  }
  cout<<count;
  bool flag = false;
  for(int i=0;i<s.size();i++){
    if(s[i]==bot[bot_trace] && bot_trace<5){
      count++;
      bot_trace++;
      if(count==bot.size()){
        flag = true;
        cout<<"YES"<<endl;
        break;
      }
    }
  }
  if(flag==false) cout<<"NO"<<endl;
  
}
void solve(){
  long long n,x;cin>>n>>x;
  // vector<string> vec(n);
  // string s;cin>>s;
  // vector<pair<string,string>> query(m);
  priority_queue<pair<int,int>> pqueue;
  unordered_map<int,int> hashmap;
  unordered_set<int> sett;
  string bot = "hello";
  // long long count=0;
  int bot_trace=0;
  long long count=0;
  while(n){
    n--;
    count++;
    if(count%x==0){
      n++;
    }
  }
  cout<<count;
}

// Adjecent Matrix--

// void solve(){
//   long long n;cin>>n;
//   // vector<string> vec(n);
//   // string s;cin>>s;
//   // vector<pair<string,string>> query(m);
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
 
//   vector<vector<int>> dp(n,vector<int>(n));
// //   int bot_trace=0;
// //   long long count=0;
//   if(n==1) cout<<1<<endl;
//   else if(n==2) cout<<-1<<endl;
//   else{
//     int j=0,k=0;
//     for (int i = 0; i < n*n; i+=2)
//     {
//       dp[j][k] = i+1;
//       k++;
//       if(k==n && j<ceil(n/(double)2)){
//         k=0;
//         j++;
//       }
//     }
//     for (int i = 1; i < n*n; i+=2)
//     {
//       dp[j][k] = i+1;
//       k++;
//       if(k==n && j<n){
//         k=0;
//         j++;
//       }
//     }
//     for (int i = 0; i < n; i++){
//       for (int j = 0; j < n; j++) cout<<dp[i][j]<<" ";
//       cout<<"\n";
//     }
//   }
  
// }
  
//dp8
// void solve(){
//   long long n;cin>>n;
//   // vector<int> vec(n);
//   // vector<string> vec(n);
//   // string s;cin>>s;
//   // for(int i=0;i<n;i++) cin>>vec[i];
//   // vector<pair<long long, long long>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   // vector<vector<int>> dp(n,vector<int>(n));
//   // int bot_trace=0;
//   // sort(vec.begin(),vec.end());
//   long long count=0;
//   if(n%2!=0){
//     cout<<0<<endl;
//   }
//   else{
//   int epx = n/2;
//   long long res = pow(2,epx);
//   cout<<res<<endl;
//   }
// }

//dp9 -- two ptr thrt square
// void solve(){
//   long long n,m,x,y;cin>>n>>m>>x>>y;
//   // vector<int> vec(n);
//   // vector<string> vec(n);
//   // string s;cin>>s;
//   // for(int i=0;i<n;i++) cin>>vec[i];
//   // vector<pair<long long, long long>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   vector<string> dp(n);
//   int bot_trace=0;
//   // sort(vec.begin(),vec.end());
//   for (int i = 0; i < n; i++){
//     string s;cin>>s;
//     dp[i]=s;
//   }
//   long long count=0;
//   long long ans = 0;
//   vector<vector<int>> DP(n,vector<int>(m));
//   for (int i = 0; i < n; i++){
//     for (int j = 0; j < m; j++){
//       if(dp[i][j]=='.'){
//         count++;
//         DP[i][j] = 1;
//       }
//       else{
//         DP[i][j] = 0;
//       }
//     }
//   }
//   // for (int i = 0; i < n; i++){
//   //   for (int j = 0; j < m; j++) cout<<DP[i][j];
//   //   cout<<"\n";
//   // }
//   if((2*x)<=y){
//     ans = x*count;
//   }
//   else{
//     for (int i = 0; i < n; i++)
//     {
//       for (int j = 0; j < m; j++)
//       {
//         if(DP[i][j]==1 && j==0){
//           if(DP[i][j+1]==1){
//             DP[i][j+1]=0;
//             DP[i][j]=0;
//             bot_trace++;
//           }
//         }
//         else if(DP[i][j]==1 && j==m-1){
//           if(DP[i][j-1]==1){
//             DP[i][j-1]=0;
//             DP[i][j]=0;
//             bot_trace++;
//           }
//         }
//         else if(DP[i][j]==1 && j<m-1 && j>0){
//           if(DP[i][j+1]==1){
//             DP[i][j+1]=0;
//             DP[i][j]=0;
//             bot_trace++;
//           }
//           else if( DP[i][j-1]==1){
//             DP[i][j-1]=0;
//             DP[i][j]=0;
//             bot_trace++;
//           }
//         }
//       }
      
//     }
//     count -= (2*bot_trace);
//     // cout<<count<<"\n";
//     // cout<<bot_trace<<"\n";
//     ans = (count*x) + (y*bot_trace);
    
//   }
//   cout<<ans<<endl;
  
// }
// void solve(){
//   string s,r;cin>>s>>r;
//   // vector<int> vec(n);
//   // vector<string> vec(n);
//   // string s;cin>>s;
//   // for(int i=0;i<n;i++) cin>>vec[i];
//   // vector<pair<long long, long long>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   // vector<int> dp(n);
//   // int bot_trace=0;
//   int x = s.size();
//   int rem = 0;
//   vector<int>dp;
  
//   for (int i = 0; i < x; i++)
//   {
//     int n = stoi(s.substr(i,1));
//     int m = stoi(r.substr(i,1));
//     int j = n%2;
//     int k = m%2;
//     bool fs = j^k;
//     dp.push_back(fs);
//   }
//   for(auto it:dp) cout<<it;

// }
// void solve(){
//   int n,m,k;cin>>n>>m>>k;
//   // vector<int> vec(n);
//   // vector<string> vec(n);
//   // string s;cin>>s;
//   // for(int i=0;i<n;i++) cin>>vec[i];
//   // vector<pair<long long, long long>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   // vector<int> dp(n);
//   // int bot_trace=0;
//   if((n/k)>=m){
//     cout<<m<<endl;
//   }
//   else{
//     int jokerftw = n/k;
//     int jokerfl = m-jokerftw;
//     k--;
//     int rem = ceil(jokerfl/(double)k);
//     int win = jokerftw - rem;
//     cout<<win<<endl;
//   }
// }

// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   // vector<string> vec(n);
//   // string s;cin>>s;
//   for(int i=0;i<n;i++) cin>>vec[i];
//   // vector<pair<long long, long long>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   set<int> map;
//   vector<int> dp;
//   // sort(vec.begin(),vec.end());
//   // int bot_trace=0;
//   int count =0;
//   for (int i = 0; i < n-1; i++)
//   {
//     for (int j = i+1; j < n; j++)
//     {
//       if((i-vec[i])!=(j-vec[j])){
//         count++;
//       }
//     }
//   }
//   int loopsum = (n*(n-1))/2;
//   // int ans = 0;
//   // cout<<count;
//   int cnt=0;
//   if(loopsum==count){
//     dp = vec;
//   }
//   else{
//     // sort(vec.begin(),vec.end());
//     while(true){
//       for (int i = 0; i < n-1; i++)
//       {
//         for (int j = i+1; j < n; j++)
//         {
//           if((i-vec[i])==(j-vec[j])){
//             swap(vec[i],vec[j]);
//           }
//           else{
//             cnt++;
//           }
//         }
//       }
//       // cout<<cnt<<endl;
//       if(cnt==loopsum){
//         break;
//       }
//       else{
//         cnt=0;
//       }
//     }
//     dp = vec;
//   }
//   for(auto it:dp) cout<<it<<" ";
// }


// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   // vector<string> vec(n);
//   // string s;cin>>s;
//   for(int i=0;i<n;i++) cin>>vec[i];
//   // vector<pair<long long, long long>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   set<int> map;
//   vector<int> dp;
  
//   // int bot_trace=0;
//   int count =0;
//   dp = vec;
//   sort(dp.begin(),dp.end());
//   int maxx = distance(vec.begin(),find(vec.begin(),vec.end(),dp[n-1]));
//   int minx = distance(vec.begin(),find(vec.begin(),vec.end(),dp[0]));
//   cout<<minx<<maxx;
//   if(vec==dp){
//     cout<<0<<endl;
//   }
//   else if(maxx==n-1 || minx==0){
//     cout<<1<<endl;
//   }
//   else if(maxx==0 && minx==n-1){
//     cout<<3<<endl;
//   }
//   else{
//     cout<<2<<endl;
//   }
// }

// int compxor(int n){
//   if(n%4==0) return n;
//   else if(n%4==1) return 1;
//   else if(n%4==2) return n+1;
//   else return 0;
// }
// void solve(){
//   int a,b;cin>>a>>b;
//   // vector<int> vec(n);
//   // vector<string> vec(n);
//   // string s;cin>>s;
//   // for(int i=0;i<n;i++) cin>>vec[i];
//   // vector<pair<long long, long long>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   set<int> map;
//   vector<int> dp;
//   // int bot_trace=0;
//   // int count =0;
//   // dp = vec;
//   // sort(dp.begin(),dp.end());
//   int xr = compxor(a-1);
  
//   if(xr==b){
//     cout<<a<<endl;
//   }
//   else{
//     long long rem = xr^b;
//     if(rem==a) cout<<a+2<<endl;
//     else cout<<a+1<<endl;
//   }
// for(int i=0;i<4;i++){
//     cin>>query[i].first;
//     cin>>query[i].second;
//   }
//   sort(query.begin(),query.end());
//   // for(auto it:query) cout<<it.first<<" "<<it.second;
//   int x = query[0].second;
//   int x1 = query[0].first;
//   int a = max(query[0].second,query[1].second);
//   int r = abs(x-a);
//   // cout<<r;
//   int y;
//   if(query[2].second==query[0].second){
//     y = query[2].first;
//   }
//   else{
//     y = query[3].first;
//   }
//   int s = abs(x1-y);
//   int area = s*r;
//   cout<<area<<endl;

// for(int i=0;i<s.size();i++){
//     if(s[i]=='1'){
//       cnts++;
//     }
//     if(f[i]=='1'){
//       cntf++;
//     }
//     if(f[i]=='1' && s[i]!='1'){
//       bot_trace++;
//     }
//   }
//   if(cnts<=cntf){
//     cout<<bot_trace<<endl;
//   }
//   else{
//     int rem = cnts-cntf;
//     cout<<rem+bot_trace<<endl;
//   }


// long long flag =0;
//   long long minit = 0;
//   // sort(dp.begin(),dp.end());
//   for (int i = 0; i < n; i++)
//   {
//     long long rem = (vec[i]-minit)*a;
//     if((rem<=b) && rem<f){
//       flag++;
//       minit = vec[i];
//       f -= rem;
//     }
//     else if(rem>b && b<f){
//       flag++;
//       minit = vec[i];
//       f -= b;
//     }
//     // cout<<f<<" ";
//   }
//   if(flag==n){
//     cout<<"YES"<<endl;
//   }
//   else{
//     cout<<"NO"<<endl;
//   }
  
  




// void solve(){
//   long long n,q;cin>>n>>q;
//   vector<long long> vec(n);
//   // vector<string> vec(n);
//   // string s,f;cin>>s>>f;
//   for(int i=0;i<n;i++) cin>>vec[i];
//   vector<pair<vector<int>, long long>> query(q,make_pair(vector<int>(2),0));
//   // priority_queue<pair<int,int>> pqueue;
//   // unordered_map<int,int> hashmap;
//   // unordered_set<int> sett;
//   // set<int> map;
//   vector<int> dp;
//   // int bot_trace=0;
//   long long cnts =0;
//   long long cntf = 0;
//   // dp = vec;
//   for (int i = 0; i < q; i++)
//   {
//     cin>>query[i].first[0];
//     cin>>query[i].first[1];
//     cin>>query[i].second;
//   }
//   // for (int i = 0; i < n; i++)
//   // {
//   //   cnts+=vec[i];
//   //   dp[i]=cnts;
//   // }
//   for (int i = 0; i < q; i++)
//   {
//     long long s = query[i].first[0];
//     long long d = query[i].first[1];
//     long long k = query[i].second;
//     long long l = 1;
//     long long j = s-1;
//     while(k){
//       cntf+=vec[j]*l;
//       l++;
//       k--;
//       j+=d;
//     }
//     dp.push_back(cntf);
//     cntf =0;
//   }
//   for(auto it:dp) cout<<it<<" ";
//   cout<<endl;

// }

// CF Q4 Very Different Array

// void solve(){
//   long long n,m;cin>>n>>m;
//   vector<long long> vec1(n);
//   vector<long long> vec2(m);
//   // string s,f;cin>>s>>f;
//   for(int i=0;i<n;i++) cin>>vec1[i];
//   //
//   for(int i=0;i<m;i++) cin>>vec2[i];
//   // vector<pair<vector<int>, long long>> query(q,make_pair(vector<int>(2),0));
//   // priority_queue<pair<int,int>> pqueue;
//   // unordered_map<int,int> hashmap;
//   // unordered_set<int> sett;
//   // set<int> map;
//   vector<int> dp(n);
//   // int bot_trace=0;
//   long long cnts =0;
//   long long cntf = 0;
//   sort(vec1.begin(),vec1.end());
//   sort(vec2.rbegin(),vec2.rend());
//   int j=0; 
//   int l=n-1; 
//   int k=m-1;
//   while(n){
//     int x = abs(vec1[j]-vec2[j]);
//     int y = abs(vec1[l]-vec2[k]);
//     if(x>=y){
//       dp[j]=vec2[j];
//       j++;
//     }
//     else{
//       dp[l]=vec2[k];
//       l--;
//       k--;
//     }
//     n--;
//   }


//   // sort(dp.rbegin(),dp.rend());
//   // for(auto it:dp) cout<<it<<" ";
//   for(auto it=0;it<dp.size();it++){
//     cntf+=abs(dp[it]-vec1[it]);
//     // cout<<cntf;
//   }
//   cout<<cntf<<endl;
// }

//RED n BLACK DP & Greedy

// void solve(){
//   long long n;cin>>n;
//   vector<long long> vec(n);
//   // vector<long long> vec2(m);
//   // string s,f;cin>>s>>f;
//   for(int i=0;i<n;i++) cin>>vec[i];
//   long long m;cin>>m;
//   vector<long long> dp(m);
//   for(int i=0;i<m;i++) cin>>dp[i];
//   vector<pair<vector<int>, long long>> query(n,make_pair(vector<int>(2),0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   set<int> map;
//   // vector<int> dp(n);
//   // int bot_trace=0;
//   long long res=0;
//   long long count =0;
//   long long fmax=0;
//   for (int i = 0; i < n; i++)
//   {
//     count+=vec[i];
//     fmax = max(fmax,count);
//   }
//   long long cnts=0;
//   long long bmax=0;
//   for (int i = 0; i < m; i++)
//   {
//     cnts+=dp[i];
//     bmax=max(bmax,cnts);
//   }
//   if(bmax>=0 && fmax>=0) res = bmax+fmax;
//   else if(bmax>=0 && fmax<0) res = bmax;
//   else if(bmax<0 && fmax>=0) res = fmax;
//   else if(bmax<0 && fmax<0) res=0;
//   //dp approach


//   cout<<res<<"\n";
  
  
// }
// void solve(){
//   long long a,b,n,s;cin>>a>>b>>n>>s;
//   // vector<long long> vec(n);
//   // vector<long long> vec2(m);
//   // string s,f;cin>>s>>f;
//   // for(int i=0;i<n;i++) cin>>vec[i];
//   // long long m;cin>>m;
//   // vector<long long> dp(m);
//   // for(int i=0;i<m;i++) cin>>dp[i];
//   // vector<pair<vector<int>, long long>> query(n,make_pair(vector<int>(2),0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   set<int> map;
//   // vector<int> dp(n);
//   // int bot_trace=0;
//   long long res=0;
//   long long count = floor(s/(double)n);
//   if(count<=a){
//     long long fmax= s-(n*count);
//     if(fmax==0){
//     cout<<"YES"<<endl;
//     }
//     else if(fmax<=b){
//       cout<<"YES"<<endl;
//     }
//     else{
//       cout<<"NO"<<endl;
//     }
//   }
//   else{
//     long long fmax= s-(n*a);
//     if(fmax<=b){
//       cout<<"YES"<<endl;
//     }
//     else{
//       cout<<"NO"<<endl;
//     }
//   }
  
// }
// void solve(){
//   long long n,m;cin>>n>>m;
//   // vector<long long> vec(n);
//   // vector<long long> vec2(m);
//   // string s,f;cin>>s>>f;
//   // for(int i=0;i<n;i++) cin>>vec[i];
//   // long long m;cin>>m;
//   // vector<long long> dp(m);
//   // for(int i=0;i<m;i++) cin>>dp[i];
//   // vector<pair<vector<int>, long long>> query(n,make_pair(vector<int>(2),0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   set<int> map;
//   // vector<int> dp(n);
//   // int bot_trace=0;
//   long long res=0;
//   long long count =0;
//   bool flag=false;

//   if(n<m){
//     cout<<-1<<endl;
//   }
//   else if(n==m){
//     if(n%m==0) cout<<n<<endl;
//     else cout<<-1<<endl;
//   }
//   else{
//     for(int i=n;i>=0;i-=2){
//       int y = floor(i/(double)2);
//       int x = n-(y*2);
//       if((x+y)>=m && (x+y)%m==0){
//         cout<<x+y<<endl;
//         flag=true;
//         break;
//       }
//     }
//     if(flag==false) cout<<-1<<endl;
//   }
// }


// void solve(){
//   long long n;cin>>n;
//    vector<long long> vec(n);
//   // vector<long long> vec2(m);
//   // string s,f;cin>>s>>f;
//   for(int i=0;i<n;i++) cin>>vec[i];
//   // long long m;cin>>m;
//   // vector<long long> dp(m);
//   // for(int i=0;i<m;i++) cin>>dp[i];
//   // vector<pair<vector<int>, long long>> query(n,make_pair(vector<int>(2),0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   set<int> map;
//   vector<int> dp(n);
//   for(int i=0;i<n;i++) cin>>dp[i];
//   // int bot_trace=0;
//   long long res=0;
//   long long count =0;
//   bool flag=false;
//   // sort(vec.begin(),vec.end());
//   // sort(dp.begin(),dp.end());
//   int min1 = *min_element(vec.begin(),vec.end());
//   int min2 = *min_element(dp.begin(),dp.end());
//   for (int i = 0; i < n; i++)
//   {
//     int diff1 = vec[i]-min1;
//     int diff2 = dp[i]-min2;
//     int difmin = min(diff1,diff2);
//     count+=difmin;
//     if(difmin==diff2){
//       count+=(diff1-diff2);
//     }
//     else{
//       count+=(diff2-diff1);
//     }
//   }
//   cout<<count<<"\n";
  

  

 
// }

// void solve(){
//   long long n;cin>>n;
//   //  vector<long long> vec(n);
//   // vector<long long> vec2(m);
//   // string s,f;cin>>s>>f;
//   // for(int i=0;i<n;i++) cin>>vec[i];
//   // long long m;cin>>m;
//   // vector<long long> dp(m);
//   // for(int i=0;i<m;i++) cin>>dp[i];
//   // vector<pair<vector<int>, long long>> query(n,make_pair(vector<int>(2),0));
//   // priority_queue<pair<int,int>> pqueue;
//   // unordered_map<int,int> hashmap;
//   // unordered_set<int> sett;
//   // set<int> map;
//   // vector<int> dp(n);
//   // for(int i=0;i<n;i++) cin>>dp[i];
//   // int bot_trace=0;
//   int res=0;
//   int count =0;
//   // bool flag=false;
//   // sort(vec.begin(),vec.end());
//   // sort(dp.begin(),dp.end());
//   string s;
//   if(n<10){
//     cout<<n<<endl;
//   }
//   else{
//     res = 9;
//     int x = floor(log10(n))+1;
//     int z = 9*(x-2);
//     // cout<<x<<endl;
//     // cout<<x;1Z
//     int epx = power(10,x-1);
//     // cout<<epx<<endl;
//     int cnt = ceil(n/(double)epx) - 1;
//     // cout<<cnt<<endl;  
//     while(x!=0){
//       s.append("1");
//       x--;
//     }
//     int elevfactor = strtoint(s);
//     // cout<<elevfactor<<endl;
//     // cout<<elevfactor;
//     if(n<(elevfactor*cnt) && n%epx!=0){
//       cnt--;
//     }
//     count += (res+cnt+z);
//     cout<<count<<endl;
//   }
  
// }


// void solve(){
//   long long n;cin>>n;
//   //  vector<long long> vec(n);
//   // vector<long long> vec2(m);
//   // string s,f;cin>>s>>f;
//   // for(int i=0;i<n;i++) cin>>vec[i];
//   // long long m;cin>>m;
//   // vector<long long> dp(m);
//   // for(int i=0;i<m;i++) cin>>dp[i];
//   vector<pair<long long, long long>> query(n,make_pair(0,0));
//   for(int i=0;i<n;i++){
//     cin>>query[i].first;
//     cin>>query[i].second;
//   }
//   // priority_queue<pair<int,int>> pqueue;
//   // unordered_map<int,int> hashmap;
//   // unordered_set<int> sett;
//   // set<int> map;
//   // vector<int> dp(n);
//   // for(int i=0;i<n;i++) cin>>dp[i];
//   // int bot_trace=0;
//   int res=0;
//   int count =0;
//   bool flag=false;
//   // sort(query.begin(),query.end());
//   vector<pair<int,int>> qp = query;
//   sort(qp.begin(),qp.end(), [](auto &left , auto &right) {return left.second < right.second; });
//   for(auto i=n-1;i>=0;i--){
//     if(qp[i].first<=10){
//       count = qp[i].second;
//       break;
//     }
//   }
//   auto idx = distance(query.begin(),find_if(query.begin(),query.end(), [&](const auto& pair){return pair.second==count; }));
//   cout<<idx+1<<endl;
//   // for(auto it:query) cout<<it.first<<" "<<it.second<<"\n";
//   // sort(dp.begin(),dp.end());

  
  
// }


void solve(){
  long long n,m;cin>>n>>m;
  //  vector<long long> vec(n);
  // vector<long long> vec2(m);
  // string s,f;cin>>s>>f;
  // for(int i=0;i<n;i++) cin>>vec[i];
  // long long m;cin>>m;
  // vector<long long> dp(m);
  // for(int i=0;i<m;i++) cin>>dp[i];
  // vector<pair<long long, long long>> query(n,make_pair(0,0));
  // for(int i=0;i<n;i++){
  //   cin>>query[i].first;
  //   cin>>query[i].second;
  // }
  priority_queue<pair<int ,int>> pqueue;
  unordered_map<int ,int> hashmap;
  unordered_set<int> sett;
  set<int> map;
  // vector<long long> dp(n);
  // for(int i=0;i<n;i++) cin>>dp[i];
  long long bot_trace=0;
  long long res=0;
  long long count =0;
  bool flag=false;
  // sort(query.begin(),query.end());
  // vector<pair<int,int>> qp = query;
  if(n==1){
    cout<<0<<endl;
  }
  else if(n==2){
    cout<<m<<endl;
  }
  else{
    long long ans = 2*m;
    cout<<ans<<endl;
  }
}




// void solve(){
//   long long n;cin>>n;
//    vector<long long> vec(27,0);
//   string s;cin>>s;
//   // string a,b,c;cin>>a>>b>>c;
//   for(int i=0;i<n;i++){
//     int idx = s[i]-'A';
//     vec[idx+1]++;
//     //FREQUENCY COUNT
//   }
//   vector<pair<long long, long long>> query(n,make_pair(0,0));
//   priority_queue<pair<int ,int>> pqueue;
//   unordered_map<int ,int> hashmap;
//   unordered_set<int> sett;
//   set<int> map;
//   // vector<long long> dp(n);
//   // for(int i=0;i<=26;i++) cout<<vec[i]<<" ";
//   long long bot_trace=0;
//   long long res=0;
//   long long count =0;
//   bool flag=false;
//   for(int i=1;i<=26;i++){
//     if(vec[i]!=0){
//       count++;
//     }
//     if(vec[i]!=0 && vec[i]>=i){
//       bot_trace++;
//     }
//   }
//   if(count==bot_trace) cout<<count<<endl;
//   else cout<<(bot_trace)<<endl;
// }

// for(int i=1;i<=k;i++){
//     vec[i]=i;
//   }
//   int j=0;
//   for(int i=k+1;i<=n;i++){
//     vec[i]=n-j;
//     j++;
//   }   
//   for(int i=1;i<=n;i++) cout<<vec[i]<<" "; 
//   cout<<"\n";



// int idx1 = distance(vec1.begin(),find(vec1.begin(),vec1.end(),dp1[0]));
//   int idx2 = distance(vec2.begin(),find(vec2.begin(),vec2.end(),dp2[0]));
//   int idx3 = distance(vec3.begin(),find(vec3.begin(),vec3.end(),dp3[0]));
//   vector<int> chk = {dp1[0],dp2[0],dp3[0]};
//   sort(chk.begin(),chk.end());
//   // cout<<idx1<<idx2<<idx3<<endl;
//   if(idx1!=idx2 && idx2!=idx3 && idx1!=idx3){
//     res = dp1[0]+dp2[0]+dp3[0];
//     cout<<res<<endl;
//     return;
//   }
//   else if(idx1==idx2 && idx1!=idx3){
//     if(dp1[0]>dp2[0]){
//       count = dp1[0];
//       bot_trace = dp3[0];
//       for (int i = 1; i < n; i++){
//         int idx2 =distance(vec2.begin(),find(vec2.begin(),vec2.end(),dp2[i]));
//         if(idx2!=idx3){
//           res = count+dp2[i]+bot_trace;
//           cout<<res<<endl;
//           return;
//         }
//         else{
//           cnt = max(dp3[i]+dp2[i],bot_trace+dp2[i+1]);
//           cout<<cnt+count<<endl;
//           return;
//         }
//       }
//     }
//     else{
//       count = dp2[0];
//       bot_trace=dp3[0];
//       for (int i = 1; i < n; i++)
//       {
//         int idx1 =distance(vec1.begin(),find(vec1.begin(),vec1.end(),dp1[i]));
//         if(idx1!=idx3){
//           res = count+dp1[i]+bot_trace;
//           cout<<res<<endl;
//           return;
//         }
//         else{
//           cnt = max(dp3[i]+dp1[i],bot_trace+dp1[i+1]);
//           cout<<cnt+count<<endl;
//           return;
//         }
//       }
//     } 
//   }
//   else if(idx1==idx3 && idx1!=idx2){
//     if(dp1[0]>dp3[0]){
//     count = dp1[0];
//     bot_trace = dp2[0];
//     for (int i = idx1+1; i < n; i++){
//       int idx3 = distance(vec3.begin(),find(vec3.begin(),vec3.end(),dp3[i]));
//       if(idx3!=idx2){
//         res = count+dp3[i]+bot_trace;
//         cout<<res<<endl;
//         return;
//       }
//       else{
//         cnt = max(dp2[i]+dp3[i],bot_trace+dp3[i+1]);
//         cout<<cnt+count<<endl;
//         return;
//       }
//     }
//     }
//     else{
//     count = dp3[0];
//     bot_trace = dp2[0];
//     for (int i = 1; i < n; i++){
//       int idx1 = distance(vec1.begin(),find(vec1.begin(),vec1.end(),dp1[i]));
//       if(idx1!=idx2){
//         res = count+dp1[i]+bot_trace;
//         cout<<res<<endl;
//         return;
//       }
//       else{
//         cnt = max(dp2[i]+dp1[i],bot_trace+dp1[i+1]);
//         cout<<cnt+count<<endl;
//         return;
//       }
//     }
//     }
//   }
//   else if(idx2==idx3 && idx2!=idx1){
//     if(dp2[0]>dp3[0]){
//     count = dp2[0];
//     bot_trace = dp1[0];
//     for (int i = 1; i < n; i++)
//     {
//       int idx3 = distance(vec3.begin(),find(vec3.begin(),vec3.end(),dp3[i]));
//       if(idx3!=idx1){
//         res = count+dp3[i]+bot_trace;
//         cout<<res<<endl;
//         return;
//       }
//       else{
//         cnt = max(dp1[i]+dp3[i],bot_trace+dp3[i+1]);
//         cout<<cnt+count<<endl;
//         return;
//       }
//     }
//     }
//     else{
//     count = dp3[0];
//     bot_trace = dp1[0];
//     for (int i = 1; i < n; i++)
//     {
//       int idx2 = distance(vec2.begin(),find(vec2.begin(),vec2.end(),dp2[i]));
//       if(idx2!=idx1){
//         res = count+dp2[i]+bot_trace;
//         cout<<res<<endl;
//         return;
//       }
//       else{
//         cnt = max(dp1[i]+dp2[i],bot_trace+dp2[i+1]);
//         cout<<cnt+count<<endl;
//         return;
//       }
//     }
//     }
//   }
//   else if(idx1==idx2 && idx2==idx3 ){
//     if(chk[2]==dp1[0]){
//       int idx2 = distance(vec2.begin(),find(vec2.begin(),vec2.end(),dp2[1]));
//       int idx3 = distance(vec3.begin(),find(vec3.begin(),vec3.end(),dp3[1]));
//       if(idx2==idx3){
//         res = max(dp1[0]+dp2[2]+dp3[1],dp1[0]+dp2[1]+dp3[2]);
//         cout<<res<<endl;
//         return;
//       }
//       else{
//         res = dp1[0]+dp2[1]+dp3[1];
//         cout<<res<<endl;
//         return;
//       }
//     }
//     else if(chk[2]==dp2[0]){
//       int idx1 = distance(vec1.begin(),find(vec1.begin(),vec1.end(),dp1[1]));
//       int idx3 = distance(vec3.begin(),find(vec3.begin(),vec3.end(),dp3[1]));
//       if(idx1==idx3){
//         res = max(dp1[2]+dp2[0]+dp3[1],dp1[1]+dp2[0]+dp3[2]);
//         cout<<res<<endl;
//         return;
//       }
//       else{
//         res = dp1[1]+dp2[0]+dp3[1];
//         cout<<res<<endl;
//         return;
//       }
//     }
//     else if(chk[2]==dp3[0]){
//        int idx1 = distance(vec1.begin(),find(vec1.begin(),vec1.end(),dp1[1]));
//       int idx2 = distance(vec2.begin(),find(vec2.begin(),vec2.end(),dp2[1]));
//       if(idx1==idx2){
//         res = max(dp1[2]+dp2[1]+dp3[0],dp1[1]+dp2[2]+dp3[0]);
//         cout<<res<<endl;
//         return;
//       }
//       else{
//         res = dp1[1]+dp2[1]+dp3[0];
//         cout<<res<<endl;
//         return;
//       }
//     }
//   }



//DP & Greedy-> Three Activities Maximize days!

// void solve(){
//   int n;cin>>n;
//   vector<pair<int,int>> vec1(n+1);
//   vector<pair<int,int>> vec2(n+1);
//   vector<pair<int,int>> vec3(n+1);
//   loop(i,1,n+1){
//     cin>>vec1[i].first;
//     vec1[i].second=i;
//   }
//   loop(i,1,n+1){
//     cin>>vec2[i].first;
//     vec2[i].second=i;
//   }
//   loop(i,1,n+1){
//     cin>>vec3[i].first;
//     vec3[i].second=i;
//   }

//    // string s;cin>>s;
//   // string a,b,c;cin>>a>>b>>c;
//   // vector<pair<long long, long long>> query(n,make_pair(0,0));
//   // priority_queue<pair<int ,int>> pqueue;
//   // unordered_map<int ,int> hashmap;
//   // unordered_set<int> sett;
//   // set<int> map;
//   fsort(vec1);
//   fsort(vec2);
//   fsort(vec3);
//   int bot_trace=0;
//   int res=0;
//   int count =0;
//   bool flag=false;
//   int cnt=0;
//   loop(i,n-2,n+1){
//     loop(j,n-2,n+1){
//       loop(k,n-2,n+1){
//         if(vec1[i].second!=vec2[j].second &&
//          vec1[i].second!=vec3[k].second && 
//          vec2[j].second!=vec3[k].second){
//           int a = vec1[i].first;
//           int b= vec2[j].first;
//           int c = vec3[k].first;
//           count = max(count,a+b+c);
//          }
//       }
//     }
//   }
//   cout<<count<<endl;
  
 
// }

// Square Tracing

// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   // string s;cin>>s;
//   // string a,b,c;cin>>a>>b>>c;
//   // vector<pair<long long, long long>> query(n,make_pair(0,0));
//   // priority_queue<pair<int ,int>> pqueue;
//   // unordered_map<int ,int> hashmap;
//   // unordered_set<int> sett;
//   // set<int> map;
//   int count = 0;
//   // int bot_trace =0;
//   // int res = 0;
//   int cnt = 0;
//   if(n==1){
//     cout<<0<<endl;
//     return;
//   }
//   int x = n - ceil(n/(double)2);
//   loop(i,1,x){
//     int cnt = (i*(i+1))*4;
//     count += cnt;
//   }
//   count += (x*(x+1)) + 6;
//   // cout<<count;
//   int y =((n-3)/2)+1;
//   int z = 11;
//   loop(i,1,y){
//     if(i==1){
//       count += (10*(y-i))*2;
//     }
//     else{
//       count += (z*(y-i))*2;
//       z+=4;
//     }
//   }
//   cout<<count<<endl;
// }

// void solve(){
//   // int n,m;cin>>n>>m;
//   // vector<int> vec(n);
//   string s,f;cin>>s>>f;
//   // string a,b,c;cin>>a>>b>>c;
//   // vector<pair<long long, long long>> query(n,make_pair(0,0));
//   // priority_queue<pair<int ,int>> pqueue;
//   // unordered_map<int ,int> hashmap;
//   // unordered_set<int> sett;
//   // set<int> map;
//   int count = 0;
//   // int x = n-(a+b);
//   // if(x<=1){
//   //   cout<<(b+x)<<endl;
//   // }
//   // else{
//   //   cout<<b+1<<endl;
//   // }

//   // int i=0;
//   // while(i<n){
//   //   count += (n-i)*i;
//   //   i++;
//   // }
//   // count += n;
//   // cout<<count<<endl;
//   string res;
//   int x = lcm(s.size(),f.size());
//   // cout<<x<<endl;
//   if(s.size()>=f.size()){
//     // int sz = s.size()-f.size();
//     x /= f.size(); 
//     while(x){
//       res += f;
//       x--;
//     }
//     // cout<<res<<" "<<s;
//     int sz = res.size()/s.size();
//     // cout<<sz;
//     // sz /= s.size();
//     string store = s;
//     while(sz>1){
//       s += store;
//       sz--;
//     }
//     // cout<<res<<" "<<s;
//     if(s==res) cout<<res<<endl;
//     else cout<<-1<<endl;
//     // if(s==f){
//     //   cout<<s<<endl;
//     // }
//     // else{

//     // }
//   }
//   else{
//     x /= s.size();
//     while(x){
//       res += s;
//       x--;
//     }
//     int sz = res.size()/f.size();
//     // sz /= f.size();
//     string store = f;
//     while(sz>1){
//       f+=store;
//       sz--;
//     }
//     if(f==res) cout<<res<<endl;
//     else cout<<-1<<endl;

//   }
  
  
// }

// void solve(){
//   int n;cin>>n;
//   vector<pair<int,int>> vec1(n);
//   vector<pair<int,int>> vec2(n);
//   vector<pair<int,int>> vec3(n);
   
//   // string s,f;cin>>s>>f;
//   // string a,b,c;cin>>a>>b>>c;
//   // vector<pair<long long, long long>> query(n,make_pair(0,0));
//   // priority_queue<pair<int ,int>> pqueue;
//   // unordered_set<int> sett;
//   // set<int> map;
//   int count = 0;
//   loop(i,0,n){
//    cin>>vec1[i].first;
//    vec1[i].second=i;
//   }
//   loop(i,0,n){
//     cin>>vec2[i].first;
//     vec2[i].second=i;
//   }
//   loop(i,0,n){
//     cin>>vec3[i].first;
//     vec3[i].second=i;
//   }
//   sort(vec1.begin(),vec1.end());
//   sort(vec2.begin(),vec2.end());
//   sort(vec3.begin(),vec3.end());
//   loop(i,n-3,n){
//     loop(j,n-3,n){
//       loop(k,n-3,n){
//         if(vec1[i].second!=vec2[j].second && vec1[i].second!=vec3[k].second && vec2[j].second!=vec3[k].second){
//           count = max(count,vec1[i].first+vec2[j].first+vec3[k].first);
//         }
//       }
//     }
//   }
//   cout<<count<<endl;
  
  
// }

// void solve(){
//   int n,a,b;cin>>n>>a>>b;
//   vector<int> vec(n); 
//   // loop(i,0,n) cin>>vec[i];  
//   // fsort(vec);
//   string s;cin>>s;
//   // string a,b,c;cin>>a>>b>>c;
//   // vector<pair<long long, long long>> query(n,make_pair(0,0));
//   // priority_queue<pair<int ,int>> pqueue;
//   // unordered_set<int> sett;
//   // set<int> map;
//   int res=0;
//   int flag=0;
//   int flag2=0;
//   if(b>=0){
//     res = (a*n) + (b*n);
//   }
//   else{
//     loop(i,0,n-1){
//       if(s[i]=='0' && s[i+1]=='1') flag++;
//         // s.erase(s[i]);
//       if(s[i]=='1' && s[i+1]=='0') flag2++;
//     }
//     if(s[n-1]=='0') flag++;
//     else flag2++;
//     res += ((a*n) + (min(flag,flag2)+1)*b);

//   }
//   cout<<res<<endl;
  
// }

//greedy implementation dp

// void solve(){
//   long long n,m;cin>>n>>m;
//   vector<long long> vec(n); 
//   loop(i,0,n) cin>>vec[i];  
//   // fsort(vec);
//   // string s;cin>>s;
//   // string a,b,c;cin>>a>>b>>c;
//   vector<pair<long long, long long>> query;
//   // priority_queue<pair<int ,int>> pqueue;
//   // unordered_set<int> sett;
//   // set<int> map;
//   // unordered_map<int,int> hashmap;
//   int flag=0;
//   int idx=0;
//   vector<int> dp;
//   loop(i,0,n) dp.push_back(vec[i]);
//   // cout<<dp.size();
//   loop(i,0,n){
//     if(vec[i]<=m){
//       dp.erase(dp.begin());
//     }
//     else{
//       dp.push_back(vec[i]-m);
//       query.push_back({vec[i],i});
//       dp.erase(dp.begin());
//     }
//   }
//   loop(i,0,query.size()){
//     int x = ceil(query[i].first/double(m));
//     flag = max(flag,x);
//     if(x>=flag){
//       idx = query[i].second+1;
//     }
    
//   }
//   if(query.size()==0) cout<<n<<endl;
//   else cout<<idx<<endl;
//   // loop(i,0,dp.size()) cout<<dp[i]<<" ";

  
//   // int res = 6 + (n-1)*2;
//   // cout<<res<<endl;
//   // if(m==1){
//   //   cout<<"NO"<<endl;
//   //   return;
//   // }
//   // long long x = 4*n*m;
//   // long long y = n*((2*m)+1);
//   // long long w = n*((2*m)-1);
//   // cout<<"YES"<<endl;
//   // cout<<y<<" "<<w<<" "<<x<<endl;

// }



// bool isPrime(int i){
//   loope(j,2,sqrt(i)){
//     if(i%j==0) return 0;
//   }
//   return 1;
// }
// void solve(){
//   long long n;cin>>n;
//   // vector<long long> vec(n); 
//   // loop(i,0,n) cin>>vec[i]; 
//   int x = n+1;
//   while(!isPrime(x)){
//     x++;
//   }
//   int y = x+n;
//   while(!isPrime(y)){
//     y++;
//   }
//   cout<<x*y<<endl;

// }

//keep it -- greedy

// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   // vector<string> vec(n);
//   // string s;cin>>s;
//   for(int i=0;i<n;i++) cin>>vec[i];
//   // vector<pair<long long, long long>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   vector<int> dp;
//   int bot_trace=0;
//   // sort(vec.begin(),vec.end());
//   int count=0;
//   int ans = 0;
//   // vector<vector<int>> DP(n,vector<int>(m));
//   if(n==2){
//     loop(i,0,n) cout<<1;
//     cout<<"\n";
//     return;
//   }
//   dp.push_back(vec[0]);
//   vector<bool> booly;
//   booly.push_back(true);
//   int prev = 0;
//   int k =0;
//   loop(i,1,n){
//     if(vec[i]>=dp[k]){
//       dp.pb(vec[i]);
//       k++;
//       booly.push_back(true);
//     }
//     else if(vec[i]<=dp[0]){
//       dp.pb(vec[i]);
//       k++;
//       booly.push_back(true);
//       prev=vec[i];
//       break;
//     }
//     else{
//       prev=vec[i];
//       booly.push_back(false);
//     }
//   }
//   int x = booly.size();
//   // cout<<x;
//   loop(i,x,n)
//     if(vec[i]>=prev && vec[i]<=dp[0]){
//       prev=vec[i];
//       booly.push_back(true);
//     }
//     else{
//       booly.push_back(false);
//     }
    
//   // for(auto it:dp) cout<<it<<" ";
//   // cout<<"\n";
//   for(auto it:booly) cout<<it;
//   cout<<"\n";

// }


// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   // vector<string> vec;
//   // string s;cin>>s;
//   for(int i=0;i<n;i++) cin>>vec[i];
//   // vector<pair<long long, long long>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   vector<int> dp;
//   int bot_trace=0;
//   // sort(vec.begin(),vec.end());
//   int count=0;
//   int ans = 0;
//   // vector<vector<int>> DP(n,vector<int>(m));
//   int cnt1 = 0;
//   int cnt2 =0;
//   int cnt3=0;
//   int cnt4=0;
//   loop(i,0,n){
//     if(vec[i]==1) cnt1++;
//     if(vec[i]==2) cnt2++;
//     if(vec[i]==3) cnt3++;
//     if(vec[i]==4) cnt4++;
//   }
//   ans += cnt4;
//   if(cnt1>=cnt3){
//     ans += cnt3;
//     cnt1-=cnt3;
//     cnt3=0;
//     ans += cnt2/2;
//     cnt2 = cnt2 - 2*(cnt2/2);
//     ans += cnt1/4;
//     cnt1 = cnt1 - 4*(cnt1/4);
//     if(cnt1==3 && cnt2!=0){
//       ans += 2;
//     }
//     else if(cnt1==3 && cnt2==0){
//       ans++;
//     }
//     else if((cnt1!=0 && cnt1<3) || cnt2!=0){
//       ans++;
//     }
//   }
//   else if(cnt1<cnt3){
//     ans += cnt1;
//     cnt3-=cnt1;
//     cnt1=0;
//     ans += cnt2/2;
//     cnt2 = cnt2 - 2*(cnt2/2);
//     ans += cnt2 + cnt3;
    
//   }
//   cout<<ans<<endl;
// }

// CF 706 B- DP
// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   // vector<string> vec;
//   // string s;cin>>s;
//   for(int i=0;i<n;i++) cin>>vec[i];
//   fsort(vec);
//   int q;cin>>q;
//   vector<int> query(q);
//   // vector<pair<long long, long long>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   vector<int> dp;
//   loop(i,0,q) cin>>query[i];

//   int bot_trace=0;
//   // sort(vec.begin(),vec.end());
//   int count=0;
//   int ans = 0;
//   // vector<vector<int>> DP(n,vector<int>(m));
//   vector<int>::iterator low,up;
//   loop(i,0,q){
//     // low = lower_bound(vec.begin(),vec.end(),query[i]);
//     up = upper_bound(vec.begin(),vec.end(),query[i]);
//     int y = (up-vec.begin());
//     dp.push_back(y);
//   }
//   loop(i,0,q) cout<<dp[i]<<endl;
// }



// void solve(){
//   // int n;cin>>n;
//   // vector<int> vec(n);
//   // vector<string> vec;
//   string s,f;cin>>s>>f;
//   string key = "qwertyuiopasdfghjkl;zxcvbnm,./";
//   string decode;
//   if(s=="R"){
//     loop(i,0,f.size()){
//       int idx = key.find(f[i]);
//       decode+=key[idx-1];
//     }
//   }
//   else{
//     loop(i,0,f.size()){
//       int idx = key.find(f[i]);
//       decode+=key[idx+1];
//     }
//   }
//   cout<<decode<<endl;

//   // for(int i=0;i<n;i++) cin>>vec[i];
//   // fsort(vec);
// }
// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   // vector<string> vec;
//   // string s;cin>>s;
//   for(int i=0;i<n;i++) cin>>vec[i];
//   // fsort(vec);
//   vector<pair<long long, long long>> query(n,make_pair(0,0));
//   loop(i,0,n){
//     cin>>query[i].first;
//     cin>>query[i].second;
//   }
//   fsort(query);
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   vector<int> dp;
//   int bot_trace=0;
//   // sort(vec.begin(),vec.end());
//   int count=0;
//   int ans = 0;
//   bool flag=false;
//   loop(i,0,n-1){
//     if(query[i].second>query[i+1].second){
//       flag=true;
//     }
//   }
//   if(flag==true) cout<<"Happy Alex"<<endl;
//   else cout<<"Poor Alex"<<endl;
//   // vector<vector<int>> DP(n,vector<int>(m));
// }

// void solve(){
//   int n,k;cin>>n>>k;
//   vector<int> vec(n);
//   // vector<string> vec;
//   // string s;cin>>s;
//   for(int i=0;i<n;i++) cin>>vec[i];
//   // fsort(vec);
//   vector<pair<long long, long long>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   vector<int> dp;
//   int bot_trace=0;
//   // sort(vec.begin(),vec.end());
//   int count=0;
//   int ans = INT32_MAX;
//   bool flag=false;
  
//   // vector<vector<int>> DP(n,vector<int>(m));
//   loop(i,0,n){
//     count += vec[i];
//     dp.push_back(count);
//   }
//   ans = min(ans,dp[k-1]);
//   int idx=1;
//   loop(i,1,n-k+1){
//     int hmin = (dp[k-1+i]-dp[i-1]);
//     ans = min(ans,hmin);
//     if(ans==hmin){
//       idx=i+1;
//     }
//   }
//   cout<<idx<<endl;
// }

//DP 

// void solve(){
//   // int n,k;cin>>n>>k;
//   // vector<int> vec(n);
//   // vector<string> vec;
//   string s;cin>>s;
//   int n =s.size();
//   int count1=0;
//   int count2=0;
//   vector<pair<int,int>> dp(n,make_pair(0,0));
//   loop(i,0,n-1){
//     if(s[i]=='.' && s[i+1]=='.'){
//       count1++;
//       dp[i+1].first = count1;
//       dp[i+1].second = count2;
//     }
//     if(s[i]=='#' && s[i+1]=='#'){
//       count2++;
//       dp[i+1].first = count1;
//       dp[i+1].second = count2;
//     }
//     else{
//       dp[i+1].first = count1;
//       dp[i+1].second = count2;
//     }
//   }
//   int m;cin>>m;
//   vector<pair<int,int>> query(m,make_pair(0,0));
//   for(int i=0;i<m;i++){
//     cin>>query[i].first;
//     cin>>query[i].second;
//   }
//   // fsort(vec);
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   vector<int> reply;
//   int bot_trace=0;
//   // sort(vec.begin(),vec.end());
//   int count=0;
//   int ans = INT32_MAX;
//   bool flag=false;
//   // vector<vector<int>> DP(n,vector<int>(m));
//   loop(i,0,m){
//     int l = query[i].first;
//     int r = query[i].second;
//     int res1 = dp[r-1].first-dp[l-1].first;
//     int res2 = dp[r-1].second-dp[l-1].second;
//     reply.push_back(res1+res2);
//   }
//   loop(i,0,m) cout<<reply[i]<<endl;
// }

//DP

// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   // vector<string> vec;
//   // string s;cin>>s;
//   for(int i=0;i<n;i++) cin>>vec[i];
//   // fsort(vec);
//   vector<pair<long long, long long>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   vector<int> dp;
//   int bot_trace=0;
//   // sort(vec.begin(),vec.end());
//   int count=0;
//   int ans = INT32_MAX;
//   bool flag=false;
//   // vector<vector<int>> DP(n,vector<int>(m));
//   vector<int>::iterator up,low;
//   int max = maxx(vec);
//   int min = minx(vec);
//   int idx = vindex(vec,max);
//   // cout<<max;
//   loop(i,0,n){
//     count+=vec[i];
//     dp.push_back(count);
//   }
//   if(max==min){
//     cout<<-1<<endl;
//     return;
//   }
//   else if(vec[0]==max && vec[1]==max){
//     loop(i,0,n-1){
//       if((dp[i+1]-dp[i])!=max){
//         bot_trace=i+1;
//         break;
//       }
//     }
//   }
//   else{

//     // low = lower_bound(vec.begin(),vec.end(),max);
//     // int y = (low-vec.begin());
//     bot_trace = idx+1;
//   }
//   cout<<bot_trace<<endl;


// }

// void solve(){
// //   int n;cin>>n;
// //   vector<int> vec(n);
//   vector<string> vec;
//   string s;

//   loop(i,0,8){
//     cin>>s;
//     vec.push_back(s);
//   }
//   int countR=0;
//   int countB=0;
//   loop(i,0,8){
//     if(vec[i]=="RRRRRRRR"){
//       countR++;
//     }
//   }
//   string res;
//   loop(i,0,8){
//     loop(j,0,8){
//       res += vec[j][i];
//     }
//     if(res=="BBBBBBBB"){
//       countB++;
//     }
//     else{
//       res.clear();
//     }
//   }
//   if(countR>countB) cout<<"R"<<endl;
//   else cout<<"B"<<endl;
//   // for(int i=0;i<n;i++) cin>>vec[i];
//   // fsort(vec);
//   // vector<pair<long long, long long>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   vector<int> dp;
//   int bot_trace=0;
//   // sort(vec.begin(),vec.end());
//   int count=0;
//   int ans = INT32_MAX;
 

// }


// DP
// void solve(){
//   int n,m;cin>>n>>m;
//   vector<int> vec(n);
//   // vector<string> vec;
//   // string s;cin>>s;
//   for(int i=0;i<n;i++) cin>>vec[i];
//   // fsort(vec);
//   vector<int> query(m);
//   loop(i,0,m) cin>>query[i];
//   // vector<pair<long long, long long>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   vector<int> dp(n);
//   int bot_trace=0;
//   // sort(vec.begin(),vec.end());
//   int count=0;
//   int ans = INT32_MAX;
//   bool flag=false;
//   // vector<vector<int>> DP(n,vector<int>(m));
//   for(int i=n-1;i>=0;i--){
//     if(hashmap.find(vec[i])!=hashmap.end()==false){
//       hashmap.insert({vec[i],i});
//       count++;
//       dp[i]=count;
//     }
//     else{
//       dp[i]=count;
//     }
//   }
//   vector<int>reply;
//   loop(i,0,m){
//     int l = query[i];
//     reply.push_back(dp[l-1]);
//   }
//   loop(i,0,m) cout<<reply[i]<<endl;
// }


// void dobinary(vector<vector<bool>> &DP,int i,int j, bool x){
//   if(i==0 && j==0){
//     DP[i+1][j] = DP[i+1][j] ^ x;
//     DP[i][j+1]= DP[i][j+1] ^ x;
//     return;
//   }
//   else if(i==0 && j==1){
//     DP[i][j+1]=DP[i][j+1]^x;
//     DP[i][j-1]=DP[i][j-1]^x;
//     DP[i+1][j]=DP[i+1][j]^x;
//     return;
//   }
//   else if(i==0 && j==2){
//     DP[i+1][j]=DP[i+1][j]^x;
//     DP[i][j-1]=DP[i][j-1]^x;
//     return;
//   }
//   else if(i==1 && j==0){
//     DP[i-1][j]=DP[i-1][j]^x;
//     DP[i+1][j]=DP[i+1][j]^x;
//     DP[i][j+1]=DP[i][j+1]^x;
//     return;
//   }
//   else if(i==1 && j==1){
//     DP[i-1][j]=DP[i-1][j]^x;
//     DP[i][j-1]=DP[i][j-1]^x;
//     DP[i+1][j]=DP[i+1][j]^x;
//     DP[i][j+1]=DP[i][j+1]^x;
//     return;
//   }
//   else if(i==1 && j==2){
//     DP[i-1][j]=DP[i-1][j]^x;
//     DP[i][j-1]=DP[i][j-1]^x;
//     DP[i+1][j]=DP[i+1][j]^x;
//     return;
//   }
//   else if(i==2 && j==0){
//     DP[i-1][j]=DP[i-1][j]^x;
//     DP[i][j+1]=DP[i][j+1]^x;
//     return;
//   }
//   else if(i==2 && j==2){
//     DP[i-1][j]=DP[i-1][j]^x;
//     DP[i][j-1]=DP[i][j-1]^x;
//     return;
//   }
//   else if(i==2 && j==1){
//     DP[i-1][j]= DP[i-1][j] ^ x;
//     DP[i][j-1]= DP[i][j-1] ^ x;
//     DP[i][j+1]= DP[i][j+1] ^ x;
//     return;
//   }
// }

// void solve(){
//   // int n,m;cin>>n>>m;
//   // vector<int> vec(n);
//   vector<vector<int>> mat(3,vector<int>(3));
//   // vector<string> vec;
//   // string s;cin>>s;
//   // for(int i=0;i<n;i++) cin>>vec[i];
//   loop(i,0,3){
//     loop(j,0,3){
//       cin>>mat[i][j];
//     }
//   }
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
//   vector<vector<bool>> DP(3,vector<bool>(3,1));
//   // DP[0][0] = DP[0][0]^1;
//   loop(i,0,3){
//     loop(j,0,3){
//       if(mat[i][j]%2!=0 && DP[i][j]==1){
//         DP[i][j]=false;
//         bool x = 1;
//         dobinary(DP,i,j,x);
//       }
//       else if(mat[i][j]%2!=0 && DP[i][j]==0){
//         DP[i][j]=true;
//         bool x=1;
//         dobinary(DP,i,j,x);
//       }
    
//     }
//   }
//   loop(i,0,3){
//     loop(j,0,3){
//       cout<<DP[i][j]; 
//     }
//     cout<<endl;
//   } 
    
// }


//Social Network- approach 1 vector

// void solve(){
//   int n,k;cin>>n>>k;
//   vector<int> vec(n);
//   // vector<string> vec;
//   // string s;cin>>s;
//   for(int i=0;i<n;i++) cin>>vec[i];
//   // fsort(vec);
//   vector<pair<long long, long long>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   vector<int> dp;
//   queue<int> que;
//   int bot_trace=0;
//   // sort(vec.begin(),vec.end());
//   int count=0;
//   int ans = INT32_MAX;
//   bool flag=false;
//   // vector<vector<int>> DP(n,vector<int>(m));
  
//   loop(i,0,n){
//     int s = dp.size();
//     auto it =max((int)0,s-k);
//     if(find(dp.begin()+it,dp.end(),vec[i])!=dp.end()==false){
//       dp.push_back(vec[i]);
//     }
//   }
//   int sz = dp.size();
//   int m = min(sz,k);
//   cout<<m<<endl;
//   int itr = max((int)0,sz-k);
//   for(auto i=sz-1;i>=itr;i--){
//     cout<<dp[i]<<" ";
//   }
//   cout<<"\n";

// }

// // Social Network Approach 2- queue

// void solve(){
//   int n,k;cin>>n>>k;
//   vector<int> vec(n);
//   // vector<string> vec;
//   // string s;cin>>s;
//   for(int i=0;i<n;i++) cin>>vec[i];
//   // fsort(vec);
//   vector<pair<long long, long long>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   vector<int> dp;
//   queue<int> que;
//   int bot_trace=0;
//   // sort(vec.begin(),vec.end());
//   int count=0;
//   int ans = INT32_MAX;
//   bool flag=false;
//   // vector<vector<int>> DP(n,vector<int>(m));
//   loop(i,0,n){
//     // if elem is not in map-> hashmap[vec[i]]==0 then push in queue
//     if(hashmap[vec[i]]==0 && que.size()<k){
//       que.push(vec[i]);
//     }
//     else if(hashmap[vec[i]]==0 && que.size()==k){
//       hashmap[que.front()]=0;
//       que.pop();
//       que.push(vec[i]);
//     }
//     //update the ele frequency in hashmap
//     hashmap[vec[i]]++;
//   }
//   int m = que.size();
//   cout<<m<<endl;
//   loop(i,0,m){
//     dp.push_back(que.front());
//     que.pop();
//   }
//   for(int i=m-1;i>=0;i--){
//     cout<<dp[i]<<" ";
//   }
// }

// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   // vector<string> vec;
//   // string s;cin>>s;
//   // for(int i=0;i<n;i++) cin>>vec[i];
//   // fsort(vec);
//   vector<pair<int, int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   vector<int> dp;
//   queue<int> que;
//   int bot_trace=0;
//   // sort(vec.begin(),vec.end());
//   int count= INT64_MIN;
//   int ans = INT32_MAX;
//   bool flag=false;
//   // vector<vector<int>> DP(n,vector<int>(m));
//   // loop(i,0,n){
//   //   cin>>query[i].first;
//   //   cin>>query[i].second;
//   // }
//   // loop(i,0,n){
//   //   if(query[i].second>k){
//   //     int rem = query[i].first + k - query[i].second;
//   //     count = max(count,rem);
//   //   }
//   //   else{
//   //     count = max(count,query[i].first);
//   //   }
//   // }
//   // cout<<count<<endl;
//   if(n%2!=0){
//     cout<<-1<<endl;
//     return;
//   }
//   int x=2;
//   int y=1;
//   loop(i,0,n){
//     if((i+1)%2!=0){
//       dp.push_back(x);
//       x+=2;
//     }
//     else{
//       dp.push_back(y);
//       y+=2;
//     }
//   }
//   for(auto it:dp) cout<<it<<" ";
  
// }

// CF Div 2 Q1
// loop(i,0,n){
//     hashmap.insert({vec[i],i+1});
//   }
//   loop(i,0,m){
//     count += hashmap[query[i]];
//     ans += (n+1-hashmap[query[i]]);
//   }
//   cout<<count<<" "<<ans<<endl;

//CF 922 Div2 Q2
// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   vector<int> vec2(n);
//   // vector<string> vec;
//   // string s;cin>>s;
//   for(int i=0;i<n;i++) cin>>vec[i];
//   for(int i=0;i<n;i++) cin>>vec2[i];
//   // fsort(vec);
//   // vector<pair<int, int>> query(n,make_pair(0,0));
//   // loop(i,0,n){
//   //   query[i].first=vec[i];
//   //   query[i].second=vec2[i];
//   // }
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   // unordered_map<int,int> hashmap2;
//   unordered_set<int> sett;
//   vector<int> dp;
//   vector<int> dp2;
//   queue<int> que;
//   int bot_trace=0;
//   // sort(vec.begin(),vec.end());
//   int count= 0;
//   int ans = 0;
//   bool flag=false;
//   // vector<vector<int>> DP(n,vector<int>(m));
//   loop(i,0,n){
//     hashmap[vec[i]]=vec2[i];
//   }
//   // loop(i,0,n){
//   //   hashmap2[vec2[i]]=vec[i];
//   // }
//   // vector<int> temp1=vec;
//   fsort(vec);
//   loop(i,0,n){
//     int res = hashmap[vec[i]];
//     dp.pb(res);
//   }
//   loop(i,0,n){
//     cout<<vec[i]<<" ";
//   }
//   cout<<"\n";
//   loop(i,0,n){
//     cout<<dp[i]<<" "; 
//   }
//   cout<<"\n";
//   // fsort(vec2);
//   // loop(i,0,n){
//   //   int res = hashmap2[vec2[i]];
//   //   dp2.pb(res);
//   // }
  
// }

// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   // vector<string> vec;
//   // string s;cin>>s;
//   for(int i=0;i<n;i++) cin>>vec[i];
//   // fsort(vec);
//   vector<pair<int, int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   vector<int> dp;
//   queue<int> que;
//   int bot_trace=0;
//   // sort(vec.begin(),vec.end());
//   int count= 0;
//   int ans = 0;
//   bool flag=false;
//   // vector<vector<int>> DP(n,vector<int>(m));
//   int mini = minx(vec);
//   int maxi = maxx(vec);
//   int idx_min;
//   loop(i,0,n){
//     if(vec[i]==mini){
//       idx_min=i;
//     }
//   }
//   int idx_max = vindex(vec,maxi);
//   if(idx_max>idx_min){
//     count = (idx_max) + (n-2-idx_min);
//   }
//   else{
//     count = (idx_max) + (n-1-idx_min);
//   }
//   cout<<count<<endl;
// }
// void solve(){
//   int n;cin>>n;
//   // vector<int> vec(n);
//   // vector<string> vec;
//   // string s;cin>>s;
//   // for(int i=0;i<n;i++) cin>>vec[i];
//   // fsort(vec);
//   vector<int> l(2);
//   vector<int> r(2);
//   vector<pair<int, int>> query(n,make_pair(0,0));
//   loop(i,0,n){
//     cin>>query[i].first;
//     cin>>query[i].second;
//     l[query[i].first]++;
//     r[query[i].second]++;
//   }
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   vector<int> dp;
//   queue<int> que;
//   int bot_trace=0;
//   // sort(vec.begin(),vec.end());
//   int count= 0;
//   int ans = 0;
//   bool flag=false;
//   // vector<vector<int>> DP(n,vector<int>(m));
//   count = min(l[0],l[1]);
//   ans = min(r[0],r[1]);
//   cout<<(count+ans)<<endl;
// }
// void solve(){
//   // int n;cin>>n;
//   // vector<int> vec(n);
//   // vector<string> vec;
//   string s;cin>>s;
//   int countl=0,counth=0;
//   int n = s.size();
//   string h =s;
//   string l = s;
//   loop(i,0,n){
//     if(islower(s[i])){
//       countl++;
//       h[i]=toupper(h[i]);
//     }
//     else{
//       counth++;
//       l[i]=tolower(l[i]);
//     }
//   }
//   if(countl>=counth){
//     cout<<l<<endl;
//     return;
//   }
//   else cout<<h<<endl;
  
//   // for(int i=0;i<n;i++) cin>>vec[i];
//   // fsort(vec);
//   // vector<pair<int, int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   vector<int> dp;
//   queue<int> que;
//   int bot_trace=0;
//   // sort(vec.begin(),vec.end());
//   int count= 0;
//   int ans = INT64_MIN;
//   bool flag=false;
//   // vector<vector<int>> DP(n,vector<int>(m));
//   // loop(i,0,n){
//   //   count+=vec[i];
//   // }
//   // int nf = n+1;
//   //   loope(i,1,5){
//   //     if((count+i)%nf!=1){
//   //       bot_trace++;
//   //     }
//   //   }
//   //   cout<<bot_trace<<endl;   
// }

// void solve(){
//   int n;cin>>n;
//   // vector<int> vec(n);
//   // vector<string> vec;
//   // string s;cin>>s;
//   // for(int i=0;i<n;i++) cin>>vec[i];
//   // fsort(vec);
//   vector<pair<int, int>> query(n,make_pair(0,0));
//   loop(i,0,n){
//     cin>>query[i].first;
//     cin>>query[i].second;
//   }
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   vector<int> dp;
//   queue<int> que;
//   int bot_trace=0;
//   // sort(vec.begin(),vec.end());
//   int count= 0;
//   int ans = 0;
//   bool flag1=false,flag2=false,flag3=false,flag4=false;
//   // vector<vector<int>> DP(n,vector<int>(m));
//   loop(i,0,n){
//     int x = query[i].first;
//     int y = query[i].second;
//     loop(j,0,i){
//       if(query[j].first>x && query[j].second==y){
//         flag1=true;
//       }
//       if(query[j].first<x && query[j].second==y){
//         flag2=true;
//       }
//       if(query[j].first==x && query[j].second>y){
//         flag3=true;
//       }
//       if(query[j].first==x && query[j].second<y){
//         flag4=true;
//       }
//     }
//     if(flag1 && flag2 && flag3 && flag4){
//       ans++;
//     }
//     else{
//       loop(j,i+1,n){
//         if(query[j].first>x && query[j].second==y){
//           flag1=true;
//         }
//         if(query[j].first<x && query[j].second==y){
//           flag2=true;
//         }
//         if(query[j].first==x && query[j].second>y){
//           flag3=true;
//         }
//         if(query[j].first==x && query[j].second<y){
//           flag4=true;
//         }
//       }
//       if(flag1 && flag2 && flag3 && flag4){
//         ans++;
//       }
//     } 
//     flag1=false;flag2=false;flag3=false;flag4=false;
//   }
//   cout<<ans<<endl;

// }

//Hexadecimal Theorem- fibonacci with dp

// long long fib(int n){
//   long long f[n+2];
//   f[0]=0;
//   f[1]=1;
//   loop(i,2,n+1){
//     f[i] = f[i-1] + f[i-2];
//   }
//   return f[n];
// }

// void solve(){
//   int n;cin>>n;
//   // vector<int> vec(n);
//   // vector<string> vec;
//   // string s;cin>>s;
//   // for(int i=0;i<n;i++) cin>>vec[i];
//   // fsort(vec);
//   // vector<pair<int, int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<long long,int> hashmap;
//   unordered_set<int> sett;
//   vector<long long> dp(52,0);
//   queue<int> que;
//   int bot_trace=0;
//   // sort(vec.begin(),vec.end());
//   int count= 0;
//   int ans = INT32_MAX;
//   bool flag1=false;
//   // vector<vector<int>> DP(n,vector<int>(m));

//   if(n==0){
//     cout<<0<<" "<<0<<" "<<0<<endl;
//     return;
//   }
//   if(n<3 && n>0){
//     cout<<n<<" "<<0<<" "<<0<<endl;
//     return;
//   }
//   dp[0]=0;
//   dp[1]=1;
//   hashmap[0]=0;
//   hashmap[1]=1;
//   loop(i,2,52){
//     dp[i] = dp[i-1] + dp[i-2];
//     hashmap[dp[i]]=i;
//   }
//   int x = hashmap[n];
//   int y = fib(x-1);
//   int z = hashmap[y];
//   int w = fib(z-2);
//   int b = fib(z-3);
//   cout<<y<<" "<<w<<" "<<b<<endl;
//   // ans = min(ans,abs(vec[0]-vec[n-1]));
//   // bot_trace=1;
//   // count=n;
//   // loop(i,0,n-1){
//   //   int x = abs(vec[i]-vec[i+1]);
//   //   ans = min(ans,x);
//   //   if(ans==x){
//   //     bot_trace=i+1;
//   //     count=i+2;
//   //   } 
//   // }
//   // cout<<bot_trace<<" "<<count<<endl;

//   // int h1 = __gcd(n,m);
//   // int h2 = __gcd(m,k);
//   // int h3 = __gcd(n,k);
//   // int x = sqrt((n*m)/k);
//   // int z = n/x;
//   // int y = m/x;
//   // count = 4*(x+y+z);
//   // cout<<count<<endl;

//   // while(n>0){
//   //   loop(i,0,7){
//   //     n-=vec[i];
//   //     count++;
//   //     if(n<=0){
//   //       break;
//   //     }
//   //   }
//   //   if(n>0){
//   //     count=0;
//   //   }
//   // }
//   // cout<<count<<endl;


// }
// void solve(){
  // int n;cin>>n;
  // vector<int> vec(6,0);
  // // vector<string> vec;
  // // string s;cin>>s;
  // for(int i=0;i<n;i++){
  //   int x;cin>>x;
  //   vec[x]++;
  // }
  // if(vec[5]>=9 && vec[0]>0){
  //   int itr = vec[5]/9;
  //   loop(i,0,itr){
  //     res+="555555555";
  //   }
  //   loop(i,0,vec[0]){
  //     res+="0";
  //   }
  //   cout<<res<<endl;
  // }
  // else if(vec[0]==0){
  //   cout<<-1<<endl;
  // }
  // else{
  //   cout<<0<<endl;
  // }
  // int mini = minx(vec);
  // int idx = vindex(vec,mini);
  // hashmap[mini]=idx+1;
  // loop(i,idx+1,n){
  //   if(hashmap.find(vec[i])!=hashmap.end()==true){
  //     flag=true;
  //     cout<<"Still Rozdil"<<endl;
  //     break;
  //   }
  // }
  // if(flag==false) cout<<hashmap[mini]<<endl;

  // string h = " hate";
  // string l = " love";
  // vector<string> bot = {"I"," that I"," it"};
  // string res = bot[0];
  // loop(i,0,n){
  //   if((i+1)%2!=0){
  //     if(i==n-1){res+=h;}
  //     else{res+=h+bot[1];}
  //   }
  //   else{
  //     if(i==n-1){res+=l;}
  //     else{res+=l+bot[1];}
  //   }
  // }
  // res+=bot[2];
  // cout<<res<<endl;


// Sort the Array-> 1300
//   void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   // vector<string> vec;
//   // string s;cin>>s;
//   for(int i=0;i<n;i++) cin>>vec[i];
//   // fsort(vec);
//   // vector<pair<int, int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<long long,int> hashmap;
//   unordered_set<int> sett;
//   vector<long long> dp;
//   queue<int> que;
//   int bot_trace=0;
//   // sort(vec.begin(),vec.end());
//   int count= 0;
//   int ans = INT32_MAX;
//   bool flag=false;
//   int flg=-1;
//   string res;
//   // vector<vector<int>> DP(n,vector<int>(m));
//   int mini = minx(vec);
//   int maxi = maxx(vec);
//   vector<int> temp = vec;
//   fsort(temp);
//   if(temp==vec){
//     cout<<"yes"<<endl;
//     cout<<1<<" "<<1<<endl;
//     return;
//   }
//   loop(i,0,n-1){
//     if(vec[i]>vec[i+1]){
//       count=i;
//       break;
//     }
//   }
//   loop(i,count,n-1){
//     if(vec[i]>vec[i+1]){
//       ans = min(ans,i);
//       flg=max(flg,i+1);
//       flag=true;
//     }
//     else{
//       flg = max(flg,i);
//       flag=false;
//       break;
//     }
//   }
//   reverse(vec.begin()+ans,vec.begin()+flg+1);
//   // for(auto it:vec) cout<<it<<" ";
//   if(temp==vec){
//     cout<<"yes"<<endl;
//     cout<<ans+1<<" "<<flg+1<<endl;
//   }  
//   else{
//     cout<<"no"<<endl;
//   }


// }



// Sereja and Bottles
// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   // vector<string> vec;
//   // string s;cin>>s;
//   // for(int i=0;i<n;i++) cin>>vec[i];
//   // fsort(vec);
//   vector<pair<int, int>> query(n,make_pair(0,0));
//   loop(i,0,n){
//     cin>>query[i].first;
//     cin>>query[i].second;
//   }
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<long long,int> hashmap;
//   unordered_set<int> sett;
//   vector<long long> dp;
//   queue<int> que;
//   int bot_trace=0;
//   // sort(vec.begin(),vec.end());
//   int count= 0;
//   int ans = INT32_MAX;
//   bool flag=false;
//   int flg=-1;
//   string res;
//   // vector<vector<int>> DP(n,vector<int>(m));

//   loop(i,0,n){
//     hashmap.insert({query[i].second,i});
//   }
//   loop(i,0,n){
//     if(query[i].first!=query[i].second  && hashmap.find(query[i].first)!=hashmap.end()==true){
//       count++;
//     }
//     if(query[i].first==query[i].second && hashmap[query[i].first]!=i){
//       count++;
//     }
//     else if(query[i].first==query[i].second){
//       int num = query[i].first;
//       // auto it =find_if(query.begin()+i+1, query.end(), [&num](const pair<int,int>& p)  { return p.second( == num; });
//       bool itr = find_if(query.begin()+i+1, query.end(), [&](const auto& pair)  { return pair.second == num; })!=query.end();
//       // find_if(query.begin()+i+1, query.end(), [&num](const pair<int,int>& p)  { return p.second == num; })!=query.end()==true
//       if(itr==true){
//         count++;
//       }
//     }
//   }
//   cout<<(n-count)<<endl;

// }


// void solve(){
//   // int n;cin>>n;
//   // vector<int> vec(n);
//   vector<string> vec;
//   loop(i,0,4){
//     string s;cin>>s;
//     vec.push_back(s);
//   }
//   // for(int i= 0;i<n;i++) cin>>vec[i];
//   // fsort(vec);
//   // vector<pair<int, int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<long long,int> hashmap;
//   unordered_set<int> sett;
//   vector<long long> dp;
//   queue<int> que;
//   int bot_trace=0;
//   // sort(vec.begin(),vec.end());
//   bool flag=false;
//   int flg=-1;
//   string res;
//   // vector<vector<int>> DP(n,vector<int>(m));
//   loop(i,0,3){
//     loop(j,0,3){
//       vector<char> twoctwo;
//       twoctwo.push_back(vec[i][j]);
//       twoctwo.push_back(vec[i][j+1]);
//       twoctwo.push_back(vec[i+1][j]);
//       twoctwo.push_back(vec[i+1][j+1]);
//       int count= 0;
//       int ans = 0;
//       loop(k,0,4){
//         if(twoctwo[k]=='.'){
//           count++;
//         }
//         else{
//           ans++;
//         }
//       }
//       if(count>=3 || ans>=3){
//         cout<<"YES"<<endl;
//         flag=true;
//         return;
//       }
//       else twoctwo.clear();
//     }
//   }
//   if(flag==false) cout<<"NO"<<endl;
// }

// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   // string s;cin>>s;
//   for(int i= 0;i<n;i++) cin>>vec[i];
//   int m;cin>>m;
//   vector<int> vec2(m);
//   loop(i,0,m) cin>>vec2[i];
//   // fsort(vec);
//   // vector<pair<int, int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<long long,int> hashmap;
//   unordered_set<int> sett;
//   vector<long long> dp;
//   queue<int> que;
//   int bot_trace=0;
//   // sort(vec.begin(),vec.end());
//   bool flag=false;
//   int flg=-1;
//   string res;
//   // vector<vector<int>> DP(n,vector<int>(m));
//   int max_gear_ratio=0;
//   int gear_count=1;
//   loop(i,0,n){
//     loop(j,0,m){
//       int rem = vec2[j]%vec[i];
//       if(rem==0){
//         int gear_ratio = vec2[j]/vec[i];
//         if(max_gear_ratio==gear_ratio){
//           gear_count++;
//         }
//         if(gear_ratio>max_gear_ratio){
//           gear_count=1;
//         }
//         max_gear_ratio = max(max_gear_ratio,gear_ratio);
//       }
//     }
//   }
//   cout<<gear_count<<endl;
// }


// void solve(){
//   int n,m;cin>>n>>m;
//   vector<int> vec(m);
//   // string s;cin>>s;
//   for(int i= 0;i<m;i++) cin>>vec[i];
//   // fsort(vec);
//   // vector<pair<int, int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<long long,int> hashmap;
//   unordered_set<int> sett;
//   vector<long long> dp;
//   queue<int> que;
//   int bot_trace=0;
//   // sort(vec.begin(),vec.end());
//   bool flag=false;
//   int ans=0;
//   int count=0;
//   int flg=-1;
//   string res;
//   // vector<vector<int>> DP(n,vector<int>(m));
//   vector<int> temp =vec;
//   rsort(vec);
//   int maxi = vec[0];
//   int max_idx = 0;
//   loop(i,0,n){
//     count+=maxi;
//     vec[max_idx]--;
//     maxi = maxx(vec);
//     max_idx = vindex(vec,maxi);
//   }
//   fsort(temp);
//   int mini = temp[0];
//   int min_idx=0;
//   loop(i,0,n){
//     ans+=mini;
//     if(temp[min_idx]==0){
//     min_idx++;
//     }
//     mini = temp[min_idx];
//     // min_idx = vindex(temp,mini);
//   }
//   cout<<count<<" "<<ans<<endl;

//   // loop(i,0,101){
//   //   loop(j,0,101){
//   //     int a2 = power(i,2);
//   //     int b2 = power(j,2);
//   //     if(a2+j==n && b2+i==m){
//   //       count++;
//   //     }
//   //   }
//   // }
//   // cout<<count<<endl;
// }


//CF 923 Div3 Q1
  // loop(i,0,n){
  //   if(s[i]=='B'){
  //     ans=i;
  //     break;
  //   }
  // }
  // for(int i=n-1;i>=0;i--){
  //   if(s[i]=='B'){
  //     count=i;
  //     break;
  //   }
  // }
  // bot_trace = count-ans+1;
  // cout<<bot_trace<<endl;

// CF 923 Div3 Q3

// void solve(){
//   int n,m,k;cin>>n>>m>>k;
//   vector<int> vec(n);
//   // string s;cin>>s;
//   for(int i= 0;i<n;i++) cin>>vec[i];
//   vector<int> vec2(m);
//   for(int i= 0;i<m;i++) cin>>vec2[i];
//   // fsort(vec);
//   // vector<pair<int, int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<long long,int> hashmap;
//   unordered_set<int> sett;
//   vector<int> dp(k,0);
//   queue<int> que;
//   // sort(vec.begin(),vec.end());
//   int ans=0;
//   int count=0;
// vector<vector<int>> DP(n,vector<int>(m));
//   int l = k;
//   int eve = k/2;
//   fsort(vec);
//   fsort(vec2);
//   int itr2=max(k,n);
//   loop(i,0,itr2){
//     if(k!=0){
//       bool f =binary_search(all(vec),k);
//       if(f==true){
//         dp[k-1]=1;
//         count++;
//       }
//       k--;
//     }
//     else{
//       break;
//     }
//   }
//   int itr=max(l,m);
//   loop(i,0,itr){
//     if(l!=0){
//       bool f =binary_search(all(vec2),l);
//       if(f==true){
//         ans++;
//         dp[l-1] |= 1;
//       }
//       else{
//         dp[l-1] |= 0;
//       }
//       l--;
//     }
//     else{
//       break;
//     }
//   }
//   if(count>=eve && ans>=eve){
//     bool fm = find(dp.begin(),dp.end(),0)!=dp.end();
//     True(!fm);
//   }
//   else{
//     cout<<"NO"<<endl;
//   }
  
// }

//CF 923 Div3 Q2
// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   // string s;cin>>s;
//   for(int i= 0;i<n;i++) cin>>vec[i];
//   // fsort(vec);
//   // vector<pair<int, int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<long long,int> hashmap;
//   unordered_set<int> sett;
//   vector<int> dp(26,0);
//   queue<int> que;
//   dp[0]=1;
//   // sort(vec.begin(),vec.end());
//   int ans=0;
//   int count=0;
//   // vector<vector<int>> DP(n,vector<int>(m));

//   string res = "abcdefghijklmnopqrstuvwxyz";
//   string dps;
//   int j=0;
//   // int k=1;
//   loop(i,0,n){
//     if(vec[i]==0){
//       dps+=res[j];
//       j++;
//     }
//     else{
//       int finds =vec[i];
//       int idx = distance(dp.begin(),find(dp.begin(),dp.end(),finds));
//       dps+=res[idx];
//       dp[idx]++;
//       if(dp[idx+1]==0){
//         dp[idx+1]++;
//       }
//     }
//   }
//   cout<<dps<<endl;
// }

// void solve(){
//   int n;cin>>n;
//   // vector<int> vec(n);
//   // string s;cin>>s;
//   // for(int i= 0;i<n;i++) cin>>vec[i];
//   // fsort(vec);
//   // vector<pair<int, int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<long long,int> hashmap;
//   unordered_set<int> sett;
//   vector<int> dp(26,0);
//   queue<int> que;
//   dp[0]=1;
//   // sort(vec.begin(),vec.end());
//   int ans=0;
//   int count=0;
//   // vector<vector<int>> DP(n,vector<int>(m));
//   int c=0;
//   loop(i,1,n+1){
//     loop(j,1,i+1){
//       c=j*j+i*i;
//       if(c>(n*n)) break;
//       int z = sqrtl(c);
//       if((z*z)==(i*i)+(j*j)) count++;
//     }
//   }
//   cout<<count<<endl;
// }
// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   // string s;cin>>s;
//   // for(int i= 0;i<n;i++) cin>>vec[i];
//   // fsort(vec);
//   vector<pair<int, int>> query(n,make_pair(0,0));
//   loop(i,0,n){
//     cin>>query[i].first;
//     cin>>query[i].second;
//   }
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<long long,int> hashmap;
//   unordered_set<int> sett;
//   vector<int> dp;
//   queue<int> que;
//   // sort(vec.begin(),vec.end());
//   int ans=0;
//   int count=0;
//   // vector<vector<int>> DP(n,vector<int>(m));
//   fsort(query);
//   int bot=query[0].second;
//   bot = ceil(bot/(double)2)-1; 
//   ans = query[0].first; 
//   count = bot;
//   int limit=ans+bot;
//   loop(i,1,n){
//     int x = ceil(query[i].second/double(2))-1; 
//     if(query[i].first<=limit){
//       ans = query[i].first;
//       count = min(count,x);
//       limit = min(limit,(ans+count));
//     }
//     else{
//       break;
//     }
//   }
//   cout<<limit<<endl;

// }

// Increase-Decrease

// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   // string s;cin>>s;
//   for(int i= 0;i<n;i++) cin>>vec[i];
//   // fsort(vec);
//   // vector<pair<int, int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<long long,int> hashmap;
//   unordered_set<int> sett;
//   vector<int> dp;
//   queue<int> que;
//   // sort(vec.begin(),vec.end());
//   int ans=0;
//   int count=0;
//   // vector<vector<int>> DP(n,vector<int>(m));
//   loop(i,0,n){
//     count+=vec[i];
//   }
//   if(count%n==0) cout<<n<<endl;
//   else cout<<n-1<<endl;
// }

// void solve(){
//   int n,m;cin>>n>>m;
//   vector<string> vec(n);
//   // string s;cin>>s;
//   for(int i= 0;i<n;i++) cin>>vec[i];
//   // fsort(vec);
//   // vector<pair<int, int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<long long,int> hashmap;
//   unordered_set<int> sett;
//   vector<int> dp;
//   queue<int> que;
//   // sort(vec.begin(),vec.end());
//   int ans=0;
//   int count=0;
//   // vector<vector<int>> DP(n,vector<int>(m));
//   loop(i,0,n){
//     loop(j,0,m){
//       if(vec[i][j]!='-'){
//         if(i%2==0){
//           if(j%2==0) vec[i][j]='B';
//           else vec[i][j]='W';
//         }
//         else{
//           if(j%2==0) vec[i][j]='W';
//           else vec[i][j]='B';
//         }
//       }
//     }
//   }
//   loop(i,0,n){
//     cout<<vec[i]<<endl;
//   }
// }

// CF Round923 Div3 Q4

// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   // string s;cin>>s;
//   for(int i= 0;i<n;i++) cin>>vec[i];
//   // fsort(vec);
//   int q;cin>>q;
//   vector<pair<int, int>> query(q,make_pair(0,0));
//   loop(i,0,q){
//     cin>>query[i].first;
//     cin>>query[i].second;
//   }
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   vector<int> dp(n);
//   queue<int> que;
//   // sort(vec.begin(),vec.end());
//   int ans=0;
//   int count=0;
//   // vector<vector<int>> DP(n,vector<int>(m));
//   vector<pair<int, int>> store(q,make_pair(0,0));
//   dp[n-1] = n;
//   for(int i=n-2;i>=0;i--){
//     if(vec[i]==vec[i+1]){
//       dp[i]=dp[i+1];
//     }
//     else dp[i]=i+1;
//   }
//   loop(i,0,q){
//     int l = query[i].first-1;
//     int r = query[i].second-1;
//     if(dp[l]>r){
//       store[i].first=-1;
//       store[i].second=-1;
//     }
//     else{
//       store[i].first=l+1;
//       store[i].second=dp[l]+1;
//     }
//   }
//   for(auto it:store) cout<<it.first<<" "<<it.second<<endl;
//   cout<<endl;

// }

// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   // string s;cin>>s;
//   for(int i= 0;i<n;i++) cin>>vec[i];
//   // fsort(vec);
//   // vector<pair<int, int>> query(q,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   vector<int> dp(n);
//   queue<int> que;
//   // sort(vec.begin(),vec.end());
//   int ans=0;
//   int min_cnt=1;
//   int max_cnt=1;
//   int count=0;
//   // vector<vector<int>> DP(n,vector<int>(m));
//   int min = minx(vec);
//   int max = maxx(vec);
//   count = max-min;
//   if(min==max){
//     cout<<count<<" "<<(n*(n-1))/2<<endl;
//     return;
//   }
//   fsort(vec);
//   loop(i,1,n-1){
//     if(vec[i]==min){
//       min_cnt++;
//     }
//     if(vec[i]==max){
//       max_cnt++;
//     }
//   }
//   ans=max_cnt*min_cnt;
//   cout<<count<<" "<<ans<<endl;

// }

// CF Little Girl and Game

// void solve(){
//   // int n;cin>>n;
//   // vector<int> vec(n);
//   string s;cin>>s;
//   // for(int i= 0;i<n;i++) cin>>vec[i];
//   // fsort(vec);
//   // int x = 100000;
//   // vector<pair<int, int>> query(x,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   vector<int> dp;
//   queue<int> que;
//   // sort(vec.begin(),vec.end());
//   int ans=0;
//   int min_cnt=1;
//   int max_cnt=1;
//   int count=0;
//   bool flag=false;
//   // vector<vector<int>> DP(n,vector<int>(m));
//   // int n = s.size();
//   for(auto it:s) hashmap[it]++;
//   for(auto it:hashmap){
//     if(it.second%2==0){
//       ans++;
//     }
//     else{
//       count++;
//     }
//   }
//   if(count>0 && count%2==0) cout<<"Second\n";
//   else cout<<"First\n";
  
// }



// Jeffry n Period Rt-1300 -> Arithmetic difference check!
//  dp & sorting-> use hashmap
// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   // string s;cin>>s;
//   for(int i= 0;i<n;i++) cin>>vec[i];
//   // fsort(vec);
//   int x = 100000;
//   vector<pair<int, int>> query;
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   vector<int> dp(x,0);
//   queue<int> que;
//   // sort(vec.begin(),vec.end());
//   int ans=0;
//   int min_cnt=1;
//   int max_cnt=1;
//   int count=0;
//   int d=0;
//   bool flag=false;
//   // vector<vector<int>> DP(n,vector<int>(m));
//   for(auto it=0;it<n;it++){
//     if(hashmap.find(vec[it])!=hashmap.end()==true && hashmap[vec[it]]!=-1){
//       int x = hashmap[vec[it]];
//       hashmap[vec[it]]=it;
//       // cout<<x<<"-"<<hashmap[vec[it]]<<"-";
//       if(it-x==dp[vec[it]] || dp[vec[it]]==0){
//         d = it-x;
//         dp[vec[it]]=d;
//       }
//       // cout<<dp[vec[it]]<<endl;
//       if((hashmap[vec[it]]-x)!=dp[vec[it]]){
//         dp[vec[it]]=-1;
//         hashmap[vec[it]]=-1;
//       }
//     }
//     hashmap.insert({vec[it],it});
//   }
//   for(auto it:hashmap){
//     // cout<<it.first<<" "<<it.second<<endl;
//     if(it.second!=-1){
//       count++;
//     }
//   }
//   cout<<count<<endl;
//   for(auto it:hashmap){
//     if(it.second!=-1){
//       query.push_back({it.first,dp[it.first]});
//       // cout<<it.first<<" ";
//       // cout<<dp[it.first]<<endl;
//     }
//   }
//   fsort(query);
//   for(auto it:query) cout<<it.first<<" "<<it.second<<endl;
// }

// void solve(){
//   int ti,sx,sy,ex,ey;cin>>ti>>sx>>sy>>ex>>ey;
//   // vector<int> vec(n);
//   string s;cin>>s;
//   // for(int i= 0;i<n;i++) cin>>vec[i];
//   // fsort(vec);
//   int x = 100000;
//   vector<pair<int, int>> query;
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   vector<int> dp(x,0);
//   queue<int> que;
//   // sort(vec.begin(),vec.end());
//   int ans=0;
//   int min_cnt=1;
//   int max_cnt=1;
//   int count=0;
//   bool flag=false;
//   // vector<vector<int>> DP(n,vector<int>(m));
//   int hold=0;
//   for(auto it:s){
//     if(sy==ey && sx==ex){
//       break;
//     }
//     if(it=='N'){
//       if(sy<ey){
//         sy++;
//         count++;
//       }
//       else{
//         hold++;
//         count++;
//       }
//     }
//     if(it=='S'){
//       if(sy>ey){
//         sy--;
//         count++;
//       }
//       else{
//         hold++;
//         count++;
//       }
//     }
//     if(it=='E'){
//       if(sx<ex){
//         sx++;
//         count++;
//       }
//       else{
//         count++;
//         hold++;
//       }
//     }
//     if(it=='W'){
//       if(sx>ex){
//         sx--;
//         count++;
//       }
//       else{
//         hold++;
//         count++;
//       }
//     }
//   }
//   if(sx==ex && sy==ey) cout<<count<<endl;
//   else cout<<-1<<endl;

// }

// void solve(){
//   // int n;cin>>n;
//   // vector<int> vec(n);
//   // string s;cin>>s;
//   // for(int i= 0;i<n;i++) cin>>vec[i];
//   // fsort(vec);
//   // int x = 100000;
//   // vector<pair<int, vector<int>>> query(10,make_pair(0,vector<int>(2,0)));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_set<int> sett;
//   vector<int> dp;
//   queue<int> que;
//   // sort(vec.begin(),vec.end());
//   int count=0;
//   bool flag=false;
//   vector<vector<int>> mat(5,vector<int>(5));
//   loop(i,0,5){
//     loop(j,0,5){
//       cin>>mat[i][j];
//     }
//   }
//   dp = {0,1,2,3,4};
//   int ans = 2*(mat[dp[3]][dp[4]]+mat[dp[4]][dp[3]]) + 2*(mat[dp[3]][dp[2]]+mat[dp[2]][dp[3]]) + mat[dp[0]][dp[1]]+mat[dp[1]][dp[0]]+mat[dp[2]][dp[1]]+mat[dp[1]][dp[2]];
//   count = max(count,ans);
//   while(next_permutation(all(dp))){
//     int ans = 0;
//     ans = 2*(mat[dp[3]][dp[4]]+mat[dp[4]][dp[3]]) + 2*(mat[dp[3]][dp[2]]+mat[dp[2]][dp[3]]) + mat[dp[0]][dp[1]]+mat[dp[1]][dp[0]]+mat[dp[2]][dp[1]]+mat[dp[1]][dp[2]];
//     count = max(count,ans);
//   }
//   cout<<count<<endl;
// }


//CF R924 Div2- Q2

// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   // string s;cin>>s;
//   for(int i= 0;i<n;i++) cin>>vec[i];
//   // int x = 100000;
//   // vector<pair<int, vector<int>>> query(10,make_pair(0,vector<int>(2,0)));
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
//   // vector<vector<int>> mat(5,vector<int>(5));
//   for(auto it:vec){
//     hashmap[it];
//   }
//   int m = hashmap.size();
//   vector<pair<int,int>> map(hashmap.begin(),hashmap.end());
//   fsort(map);
//   int j =0;
//   int i =0;
//   int d=0;
//   while(j<m){
//     d=map[j].first-map[i].first;
//     if(d<n){
//       int x = j-i+1;
//       count=max(count,x);
//       j++;
//     }
//     else{
//       while(d>=n){
//         i++;
//         d=map[j].first-map[i].first;
//       }
//       int x=j-i+1;
//       count=max(count,x);
//     }

//   }
//   cout<<count<<endl;

// }

// class Solution {
// public:
//     double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//         // vector<int> dp = nums1+nums2;
//         vector<int> dp(nums1.size()+nums2.size());
//         merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),dp.begin());
//         // nums1.insert(nums1.end(),nums2.begin(),nums2.end());
//         int n = dp.size();
//         double res=0;
//         if(n%2==0){
//             int x = n/2;
//             int y = x-1;
//             res = (dp[x]+dp[y])/2;
//         }
//         else{
//             int z = n/2;
//             res = dp[z];
            
//         }
//         return res;

//     }
// };
// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   // string s;cin>>s;
//   for(int i= 0;i<n;i++) cin>>vec[i];
//   // int x = 100000;
//   // vector<pair<int, vector<int>>> query(10,make_pair(0,vector<int>(2,0)));
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
//   // vector<vector<int>> mat(5,vector<int>(5));
//   vector<int> vec1(n-1);
//   vector<int> vec2(n-2);
//   loop(i,0,n-1) cin>>vec1[i];
//   loop(i,0,n-2) cin>>vec2[i];
//   fsort(vec);
//   fsort(vec1);
//   fsort(vec2);
//   for(int i=0;i<n;i++){
//     if(vec[i]!=vec1[i] && flag==false){
//       count=vec[i];
//       flag=true;
//     }
//     if(vec1[i]!=vec2[i] && flg==false){
//       cnt=vec1[i];
//       flg=true;
//     }
//     if(flag==true && flg==true) break;
//   }
//   cout<<count<<"\n"<<cnt<<endl;
// }

// void solve(){
//   int n;cin>>n;
//   vector<int> vec(8,0);
//   // string s;cin>>s;
//   for(int i=0;i<n;i++){
//     int x;cin>>x;
//     vec[x]++;
//   }
//   // int x = 100000;
//   // vector<pair<int, vector<int>>> query(10,make_pair(0,vector<int>(2,0)));
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
//   vector<vector<int>> mat;
//   // for(auto it:vec) cout<<it<<" ";
//   if(vec[1]==n/3 && (vec[2]+vec[3]+vec[4]+vec[6] == (2*n)/3)){
//     if(vec[2]==(vec[4]+vec[6]-vec[3]) && vec[6]==(vec[2]+vec[3]-vec[4])){
//       while(vec[4]!=0 && vec[2]!=0){
//         mat.push_back({1,2,4});
//         vec[1]--;vec[2]--;vec[4]--;
//       }
//       while(vec[2]!=0 && vec[6]!=0){
//         mat.push_back({1,2,6});
//         vec[1]--;vec[2]--;vec[6]--;
//       }
//       while(vec[3]!=0 && vec[6]!=0){
//         mat.push_back({1,3,6});
//         vec[1]--;vec[3]--;vec[6]--;
//       }
//     }
//     else{
//       cout<<-1<<endl;
//       return;
//     }
//   }
//   if(mat.size()!=n/3){
//     cout<<-1<<endl;
//     return;
//   }
//   loop(i,0,mat.size()){
//     loop(j,0,3){
//       cout<<mat[i][j]<<" ";
//     }
//     cout<<"\n";
//   }
// }

// void solve(){
//   int n;cin>>n;
//   // vector<int> vec(n);
//   // string s;cin>>s;
//   // for(int i= 0;i<n;i++) cin>>vec[i];
//   // int x = 100000;
//   vector<pair<int, vector<int>>> query(10,make_pair(0,vector<int>(2,0)));
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
//   // vector<vector<int>> mat(5,vector<int>(5));
//   string res = "abcdefghijklmnopqrstuvwxyz";
//   string h;
//   if(n<=28){
//     int x = n-2;
//     h += res[0];
//     h +=res[0];
//     h+=res[x-1];
//   }
//   else if(n>52){
//     int x = n-52;
//     h+=res[x-1];
//     h+=res[25];
//     h+=res[25];
//   }
//   else{
//     int x = n-27;
//     h+=res[0];
//     h+=res[x-1];
//     h+=res[25];
//   }
//   cout<<h<<endl;
// }

// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   // string s;cin>>s;
//   for(int i= 0;i<n;i++) cin>>vec[i];
//   // int x = 100000;
//   vector<pair<int, vector<int>>> query(10,make_pair(0,vector<int>(2,0)));
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
//   // vector<vector<int>> mat(5,vector<int>(5));
//   for(auto it:vec){
//     count += it;
//   }
//   int x = count/n;
//   loop(i,0,n-1){
//     if((vec[i])>=x){
//       vec[i+1]+=(vec[i]-x);
//       // cnt=(cnt+vec[i])-x;
//     }
//     else{
//       flag=true;
//       break;
//     }
//   }
//   if((vec[n-1])!=x){
//     flag=true;
//   }
//   True(!flag);
// }

// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   // string s;cin>>s;
//   for(int i= 0;i<n;i++) cin>>vec[i];
//   // int x = 100000;
//   // vector<pair<int, vector<int>>> query(10,make_pair(0,vector<int>(2,0)));
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
  
//   // vector<vector<int>> mat(5,vector<int>(5));
//   loop(i,0,n-1){
//     if(vec[i+1]!=vec[i]){
//       cnt=i+1;
//       break;
//     }
//   }
//   if(cnt==0){
//     cout<<0<<endl;
//     return;
//   }
//   for(int i=n-2;i>=0;i--){
//     if(vec[i+1]!=vec[i]){
//       count=i;
//       break;
//     }
//   }
//   if(vec[0]==vec[n-1]){
//     res = max(0LL,count-cnt+1);
//   }
//   else{
//     res = min(n-cnt,count+1);
//   }
//   cout<<res<<endl;
  
  
// }

// void solve(){
//   int n,x,y;cin>>n>>x>>y;
//   vector<int> vec(n);
//   // string s;cin>>s;
//   for(int i= 0;i<n;i++) cin>>vec[i];
//   // int x = 100000;
//   // vector<pair<int, vector<int>>> query(10,make_pair(0,vector<int>(2,0)));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   // unordered_map<int,int>hmap;
//   unordered_set<int> sett;
//   vector<int> dp;
//   queue<int> que;
//   // sort(vec.begin(),vec.end());
//   int count=0;
//   int cnt=0;
//   bool flag=false;
//   bool flg = false;
//   int res=0;
  
//   // vector<vector<int>> mat(5,vector<int>(5));
//   fsort(vec); 
//   map<pair<int,int>,int> hmap;
//   for(auto it:vec){
//     int ai = it%x;
//     int bi = it%y;
//     if(ai==0){
//       count += hmap[{ai,bi}]; //dp
//     }
//     else{
//       count += hmap[{x-ai,bi}];
//     }
//     hmap[{ai,bi}]++;
//   }
//   cout<<count<<endl;
// }


// void solve(){
//   int n,k;cin>>n>>k;
//   vector<int> vec(n);
//   // string s;cin>>s;
//   // for(int i= 0;i<n;i++) cin>>vec[i];
//   // int x = 100000;
//   vector<pair<int, int>> query(n,make_pair(0,0));
//   loop(i,0,n){
//     cin>>query[i].first;
//     cin>>query[i].second;
//   }
//   rsort(query);
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
//   int j =0;
//   for(int i=0;i<n;i++){
//     if(query[i].first!=query[i+1].first){
//       sort(query.begin()+j, query.begin()+i+1, [&](auto left, auto right){
//         return left.second < right.second;
//       });
//       j=i+1;
//     }  
//   }
//   // for(auto it:query) cout<<it.first<<"-"<<it.second<<endl;
//   // vector<vector<int>> mat(5,vector<int>(5));
//   int s1 = query[k-1].first;
//   int s2 = query[k-1].second;
//   hashmap[s1]=s2;
//   // cout<<s1<<" "<<hashmap[s1]<<endl;
//   for(int i=0;i<n;i++){
//     if(hashmap.find(query[i].first)!=hashmap.end()==true && hashmap[query[i].first]==query[i].second ){
//       count++;
//     }
//   }
//   cout<<count<<endl;
// }

// void solve(){
//   // int n;cin>>n;
//   // vector<int> vec(n);
//   string s;cin>>s;
//   // for(int i= 0;i<n;i++) cin>>vec[i];
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
//   // vector<vector<int>> mat(5,vector<int>(5));
//   string f =s;
//   sort(f.rbegin(),f.rend());
//   // cout<<f<<endl;
//   string hs;
//   int k =0;
//   for(int i=0;i<f.size();i++){
//     if(f[i]!=f[0]){
//       string res = f.substr(0,i);
//       cout<<res<<endl;
//       return;
//     }
//   }
  
//   // int tr=k;
//   // for(int i=tr;i>=0;i--){
//   //   if(s[i]!=f[0]){
//   //     string res = f.substr(0,i+1);
//   //     cout<<res<<endl;
//   //     return;
//   //   }
//   // }

// }

//Q1 Div2 R925

// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   // string s;cin>>s;
//   for(int i= 0;i<n;i++) cin>>vec[i];
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
//   // vector<vector<int>> mat(5,vector<int>(5));
//   fsort(vec);
//   loop(i,1,n){
//     count += (vec[i]-vec[i-1]);
//   }
//   cout<<count<<endl;
// }

// void solve(){
//   int n,k;cin>>n>>k;
//   // vector<int> vec(n);
//   // string s;cin>>s;
//   // for(int i= 0;i<n;i++) cin>>vec[i];
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
//   // vector<vector<int>> mat(5,vector<int>(5));
//   int grid = 4*n - 2;
//   if(k!=grid){
//     int grid_ceil = ceil(k/(double)2);
//     cout<<grid_ceil<<endl;
//   }
//   else{
//     int grid_ceil = ceil(k/(double)2);
//     grid_ceil++;
//     cout<<grid_ceil<<endl;
//   }
// }

// void solve(){
//   int k,x,a;cin>>k>>x>>a;
//   // vector<int> vec(n);
//   // string s;cin>>s;
//   // for(int i= 0;i<n;i++) cin>>vec[i];
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
//   // vector<vector<int>> mat(5,vector<int>(5));
//   count = a;
//   if(a<=x){
//     flag=true;
//   }
//   else{
//     cnt=1;
//     a--;
//     loope(i,1,x){
//       a -= ceil((cnt+1)/(double)(k-1));
//       if(a<0){
//         flag=true;
//         break;
//       }
//       cnt += ceil((cnt+1)/(double)(k-1));
//     }
//   }
//   True(!flag);
// }

// void solve(){
//   int n,c;cin>>n>>c;
//   vector<int> vec(n);
//   // string s;cin>>s;
//   for(int i= 0;i<n;i++) cin>>vec[i];
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
//   // vector<vector<int>> mat(5,vector<int>(5));
//   loop(i,0,n-1){
//     if(vec[i+1]-vec[i]>c){
//       count=0;
//     }
//     else{
//       count++;
//     }
//   }
//   count++;
//   cout<<count<<endl;
// }


// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   string s,f;cin>>s>>f;
//   for(int i= 0;i<n;i++) vec[i] = s[i]-48;
//   vector<int> lock(n);
//   loop(i,0,n) lock[i]=f[i]-48;
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
//   // vector<vector<int>> mat(5,vector<int>(5));
//   loop(i,0,n){
//     int x = abs(lock[i]-vec[i]);
//     if(x>5){
//       count += (10-x);
//     }
//     else count+=x;
//   }
//   cout<<count<<endl;
// }


// void solve(){
//   int n,k;cin>>n>>k;
//   // vector<int> vec(n);
//   // string s,f;cin>>s>>f;
//   // for(int i= 0;i<n;i++) cin>>vec[i];
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
//   vector<vector<int>> mat(n,vector<int>(n));
//   if(k==1){
//     for(int i=0;i<n;i++){
//       for(int j=k-1;j<n;j++){
//         mat[i][j] = cnt+j+1;
//       }
//       count += mat[i][k-1];
//       cnt = mat[i][n-1];
//     }
//   }
//   else{
//     int x = n*(k-1);
//     x -= (k-1);
//     for(int i=0;i<n;i++){
//       for(int j=0;j<k-1;j++){
//         mat[i][j]= cnt+j+1;
//       }
//       cnt = mat[i][k-2];
//     }
//     for(int i=0;i<n;i++){
//       for(int j=k-1;j<n;j++){
//         mat[i][j] = x+j+1;
//       }
//       count += mat[i][k-1];
//       x = mat[i][n-1]-k+1;
//     }
//   }
//   cout<<count<<endl;
//   loop(i,0,n){
//     loop(j,0,n){
//       cout<<mat[i][j]<<" ";
//     }
//     cout<<"\n";
//   }
// }


// void solve(){
//   int n;cin>>n;
//   vector<int> vec(2*n);
//   // string s,f;cin>>s>>f;
//   for(int i= 0;i<2*n;i++) cin>>vec[i];
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
//   // vector<vector<int>> mat(n,vector<int>(n));
//   fsort(vec);
//   for(int i=0;i<n;i++){
//     count+=vec[i*2];
//   }
//   cout<<count<<endl;

// }

// void solve(){
//   int n;cin>>n;
//   // vector<int> vec(n);
//   // string s,f;cin>>s>>f;
//   // for(int i= 0;i<2*n;i++) cin>>vec[i];
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
//   // vector<vector<int>> mat(n,vector<int>(n));
//   if(n%2==0){
//     for(int i=n,j=1;i>=1,j<=n;i-=2,j+=2){
//       dp.push_back(i);
//       dp.push_back(j);
//     }
//   }
//   else{
//     cnt = n-1;
//     for(int i=cnt,j=1;i>=1,j<=cnt;i-=2,j+=2){
//       dp.push_back(i);
//       dp.push_back(j);
//     }
//     dp.push_back(n);
//   }

//   // reverse(all(dp));
//   for(auto it:dp) cout<<it<<" ";
//   cout<<"\n";
// }

// void solve(){
//   int n;cin>>n;
//   // vector<int> vec(n);
//   string s;cin>>s;
//   // for(int i= 0;i<2*n;i++) cin>>vec[i];
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
//   // vector<vector<int>> mat(n,vector<int>(n));
//   for(int i=0;i<n-2;i++){
//     if(s[i]=='@'){
//       count++;
//     }
//     if(s[i+1]=='*' && s[i+2]=='*'){
//       flag=true;
//       break;
//     }
//   }
//   if(!flag){
//     if(s[n-2]=='@') count++;
//     if(s[n-1]=='@') count++;
//   }
//   cout<<count<<endl;


// }

// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   // string s;cin>>s;
//   for(int i= 0;i<n;i++) cin>>vec[i];
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
//   // vector<vector<int>> mat(n,vector<int>(n));
//   count=vec[0];
//   for(int i=1;i<n;i++){
//     if(vec[i]<=count){
//       int harmonics = floor(count/vec[i]) + 1;
//       count = (harmonics*vec[i]);
//     }
//     else{
//       count = vec[i];
//     }
//   }
//   cout<<count<<endl;
// }


//Q3 CF Round 927 Div3
// void solve(){
//   int n,m;cin>>n>>m;
//   vector<int> vec(n);
//   // string s;cin>>s;
//   for(int i= 0;i<n;i++) cin>>vec[i];
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
//   int count=1;
//   int cnt=0;
//   bool flag=false;
//   bool flg = false;
//   int res=0;
//   // vector<vector<int>> mat(n,vector<int>(n));
//   int lptr=0;
//   int fptr=n-1;
//   //store last element removed based on L and R
//   for(auto i=0;i<n;i++){
//     if(s[i]=='L'){
//       dp.push_back(vec[lptr]);
//       lptr++;
//     }
//     else{
//       dp.push_back(vec[fptr]);
//       fptr--;
//     }
//   }
//   vector<int> map;
//   for(int i=n-1;i>=0;i--){
//     //count works as mul of all ele of vec!
//     // multiply second last ele removed with mod of last ele removed and mod it with m;
//     // mod=last_ele%m;
//     // mod = second_last*(mod)%m;
//     count = (count*dp[i])%m; //dp
//     map.push_back(count);
//   }
//   reverse(all(map));
//   for(auto it:map) cout<<it<<" ";
//   cout<<"\n";

// }

// void solve(){
//   // int n,m;cin>>n>>m;
//   // vector<int> vec(n);
//   string s;cin>>s;
//   // for(int i= 0;i<n;i++) cin>>vec[i];
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
//   // vector<vector<int>> mat(n,vector<int>(n));
//   for(int i=0;i<s.size();i++){
//     if(s[i]=='A'){
//       count++;
//     }
//     else cnt++;
//   }
//   if(count>cnt) cout<<"A"<<endl;
//   else cout<<"B"<<endl;

// }

// void solve(){
//   int n;cin>>n;
//   vector<string> vec;
//   for(int i=0;i<n;i++){
//     string s;cin>>s;
//     vec.push_back(s);
//   }
//   // for(int i= 0;i<n;i++) cin>>vec[i];
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
//   vector<vector<int>> mat(n,vector<int>(n));
//   loop(i,0,n){
//     loop(j,0,n){
//       mat[i][j] = vec[i][j] - 48;
//     }
//   }
//   loop(i,0,n){
//     loop(j,0,n){
//       if(mat[i][j]==1){
//         count++;
//       }
//       if(mat[i+1][j]==1){
//         cnt++;
//       }
//     }
//     if(cnt!=0 && count!=0){
//       if(count==cnt){
//         cout<<"SQUARE"<<endl;
//         return;
//       }
//       else{
//         cout<<"TRIANGLE"<<endl;
//         return;
//       }
//     }
//     count=0;
//     cnt=0;
//   }
  
// }


// CF R928 Q5-E Div4
// void solve(){
//   long long n,k;cin>>n>>k;
//   // vector<int> vec;
//   // for(int i=0;i<n;i++) cin>>vec[i];
//   // for(int i= 0;i<n;i++) cin>>vec[i];
//   // vector<pair<int, int>> query(n,make_pair(0,0));
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_map<int,int>hmap;
//   unordered_set<int> sett;
//   vector<int> dp;
//   queue<int> que;
//   // sort(vec.begin(),vec.end());
//   long long count=0;
//   int cnt=0;
//   bool flag=false;
//   bool flg = false;
//   int res=0;
//   // vector<vector<int>> mat(n,vector<int>(n));
//   long long x=0;
//   long long y =2;
//   long long w =1;
//   long long limit =n;
//   while(x<limit+1){
//     x = ((n+1)/2) + cnt;
//     if(k<=x){
//       count = w + (k-cnt-1)*y;
//       break;
//     }
//     cnt = x;
//     n/=2;
//     y *= 2;
//     w *= 2;
//   }
//   cout<<count<<endl;

// }

//Q3 D R928 Div4
// vector<int> sumOfDigits(){
//   vector<int> dp;
//   queue<int> que;
//   // sort(vec.begin(),vec.end());
//   long long count=0;
//   int cnt=0;
//   bool flag=false;
//   bool flg = false;
//   int res=0;
//   // vector<vector<int>> mat(n,vector<int>(n));
//   dp.push_back(0);
//   for(int i=1;i<=200005;i++){
//     int x = i;
//     if((x/10)!=0){
//       int sum=0;
//       while(x!=0){
//         sum = sum + x%10;
//         x/=10;
//       }
//       count+=sum;
//       dp.push_back(count);
//     }
//     else{
//       count+=x;
//       dp.push_back(count);
//     }
//   }
//   return dp;
// }
// void solve(vector<int> &vec){
//   long long n;cin>>n;
//   // vector<int> vec;
//   // for(int i=0;i<n;i++){
//   //   cin>>vec[i];
//   // }
//   // for(int i= 0;i<n;i++) cin>>vec[i];
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
//   long long count=0;
//   int cnt=0;
//   bool flag=false;
//   bool flg = false;
//   int res=0;
//   // vector<vector<int>> mat(n,vector<int>(n));
//   cout<<vec[n]<<endl;
// }

// void solve(){
//   int n;cin>>n;
//   vector<pair<int,int>> vec(n);
//   for(int i=0;i<n;i++){
//       cin>>vec[i].first;
//       cin>>vec[i].second;
//   }
//   int count=0;
//   for(int i=0;i<n;i++){
//       if((vec[i].second-vec[i].first)>=2){
//           count++;
//       }
//   }
//   cout<<count<<endl;
  
// }

// void solve(){
//   long long n;cin>>n;
//   // vector<int> vec;
//   // for(int i=0;i<n;i++){
//   //   cin>>vec[i];
//   // }
//   // for(int i= 0;i<n;i++) cin>>vec[i];
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
//   bool flg = false;
//   int res=0;
//   int ans=0;
//   // vector<vector<int>> mat(n,vector<int>(n));
//   if(s.find('L')!=string::npos==false && s.find('R')!=string::npos==false){
//     cout<<n<<endl;
//     return;
//   }
//   if(s.find('L')!=string::npos==false){
//     cnt = s.find('R');
//     cout<<cnt<<endl;
//     return;
//   }
//   if(s.find('R')!=string::npos==false){
//     count = s.find('L');
//     cout<<(n-1-count)<<endl;
//     return;
//   }
//   count = s.find('L');
//   // cout<<count<<endl;
//   cnt = s.find('R');
//   res = min(count,cnt);
//   if(res==count){
//     ans+=(cnt-count-1);
//   }
//   else{
//     ans+=cnt;
//   }
//   int last=cnt;
//   int last_l=count;
//   for(int i=cnt+1;i<n;i++){
//     if(s[i]=='L'){
//       last=i;
//       last_l=i;
//       if((i-cnt)%2==0){
//         ans++;
//       }    
//     }
//     else if(s[i]=='R'){
//       ans+=(i-last_l-1);
//       last=i;
//       cnt=i;
//     }
//   }
//   // cout<<ans<<" ";
//   if(s[last]=='L'){
//     ans+=(n-1-last);
//   }
//   cout<<ans<<endl;
  

// }
// auto start = chrono::steady_clock::now();

// void solve(){
//   int n;cin>>n;
//   vector<int> vec(n);
//   for(int i=0;i<n;i++) cin>>vec[i];
  
//   // for(int i= 0;i<n;i++) cin>>vec[i];
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
//   int ans=0;
//   // vector<vector<int>> mat(n,vector<int>(n));
//   vector<int> temp =vec;
//   // cout<<ans;
//   rsort(temp);
//   for(int i=0;i<n;i++){
//     int x = vindex(temp,vec[i]);
//     dp.push_back(x+1);
//   }
//   for(auto it:dp){
//     cout<<it<<" ";
//   }
//   cout<<"\n";
// }

// void solve(){
//   int n,k;cin>>n>>k;
//   vector<int> vec(n);
//   // for(int i=0;i<n;i++) cin>>vec[i];
  
//   // for(int i= 0;i<n;i++) cin>>vec[i];
//   // string s;cin>>s;
//   // int x = 100000;
//   vector<pair<int, int>> query(n,make_pair(0,0));
//   loop(i,0,n){
//     cin>>query[i].first;
//     cin>>query[i].second;
//   }
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_map<int,int>hmap;
//   unordered_set<int> sett;
//   vector<int> dp;
//   queue<int> que;
//   // sort(vec.begin(),vec.end());
//   double count;
//   double cnt;
//   bool flag=false;
//   bool flg = false;
//   int res=0;
//   double ans;
//   // vector<vector<int>> mat(n,vector<int>(n));
//   for(int i=0;i<n-1;i++){
//     double x = power((query[i].first-query[i+1].first),2) + power((query[i].second-query[i+1].second),2);
//     cnt = sqrtl(x);
//     count += cnt;
//   }
//   ans = (count*(double)k)/(double)50;
//   cout<<setprecision(9)<<fixed;
//   cout<<ans<<endl;

// }

// void solve(){
//   // int n,k;cin>>n>>k;
//   vector<int> vec(3);
//   for(int i=0;i<3;i++) cin>>vec[i];
//   vector<int> medals(3);
//   for(int i= 0;i<3;i++) cin>>medals[i];
//   int n;cin>>n;
//   // string s;cin>>s;
//   // int x = 100000;
//   // vector<pair<int, int>> query(n,make_pair(0,0));
//   // loop(i,0,n){
//   //   cin>>query[i].first;
//   //   cin>>query[i].second;
//   // }
//   priority_queue<pair<int,int>> pqueue;
//   unordered_map<int,int> hashmap;
//   unordered_map<int,int>hmap;
//   unordered_set<int> sett;
//   vector<int> dp;
//   queue<int> que;
//   // sort(vec.begin(),vec.end());
//   int count;
//   int cnt;
//   bool flag=false;
//   bool flg = false;
//   int res=0;
//   int ans;
//   // vector<vector<int>> mat(n,vector<int>(n));
//   count = vec[0]+vec[1]+vec[2];
//   cnt = medals[0]+medals[1]+medals[2];
//   count = ceil(count/(double)5);
//   cnt = ceil(cnt/(double)10);
//   True(n>=(cnt+count));

// }


signed main()
{

  
  int t1;
  cin >> t1;



  for (int k11 = 1; k11 <= t1; k11++) {

    solve();

  }
#ifndef ONLINE_JUDGE
  freopen("Error.txt", "w", stderr);
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif


  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  // se();

  return 0;
}
















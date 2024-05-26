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

//WATERING ARRAY WITH INF SEQUENCIAL ARRAY

void solve() {
  int n, k, d;
  cin >> n >> k >> d;
  vector<int> vec(k+1);
  vector<int> arr(n+1);
  for (int i = 1; i <= n; i++) cin >> arr[i];
  for (int i = 1; i <= k; i++) cin >> vec[i];
  int ans = 0;
  for (int j = 0; j <= min(2 * n, d - 1); j++) {
    int cnt = 0;
    for (int i = 1; i <= n; i++)
      cnt += (arr[i] == i);
    ans = max(ans, cnt + (d - 1 - j) / 2);
    for (int i = 1; i <= vec[j % k + 1]; i++)
      arr[i]++;
  }
  cout << ans << '\n';
}
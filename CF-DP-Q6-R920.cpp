// DP & Greedy- Sum progression! CF R920 Q6

// void solve()
// {
//     int n,q;
//     cin>>n>>q;
//     const int sq=(int)sqrt(n);
//     vector<vector<trei>>query(sq);
//     vector<int> vec(n);
//     for(auto &it:vec) cin>>it;

//     vector<i64>dp(q);
//     for(int t=0;t<q;t++)
//     {
//         int s,d,k;
//         cin>>s>>d>>k;
//         s--;
//         if(d > sq)
//         {
//             for(int i=1;i<=k;i++)
//             {
//                 dp[t]+=1LL*i*vec[s+(i-1)*d];
//             }
//         }
//         else
//         {
//             query[d-1].push_back({s,k,t});
//         }
//     }
//     vector<i64>spare(n),valt(n);
//     for(int i=1;i<=sq;i++)
//     {
//         if(query[i-1].empty())
//         {
//             continue;
//         }
//         for(int j=0;j<n;j++)
//         {
//             spare[j]=vec[j];
//             valt[j]=1LL*(j/i+1)*vec[j];
//             if(j>=i)
//             {
//                 spare[j]+=spare[j-i];
//                 valt[j]+=valt[j-i];
//             }
//         }
//         for(auto &c:query[i-1])
//         {
//             i64 sum1=spare[c.s+(c.k-1)*i],sum2=valt[c.s+(c.k-1)*i];
//             if(c.s>=i)
//             {
//                 sum1-=spare[c.s-i];
//                 sum2-=valt[c.s-i];
//             }
//             dp[c.ind]=sum2-sum1*(c.s/i);
//         }
//     }
//     for(auto &it:dp)
//     {
//         cout<<it<<" ";
//     }
//     cout<<endl;
// }
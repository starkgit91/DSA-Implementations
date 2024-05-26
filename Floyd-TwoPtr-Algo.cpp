#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // vector<int> res;
        int sptr = nums[0];
        int fptr = nums[0];
        do{
            sptr = nums[sptr];
            fptr = nums[nums[fptr]];
        } 
        while(sptr != fptr);
        sptr = nums[0];
        while(sptr != fptr){
            sptr = nums[sptr];
            fptr = nums[fptr];
        }
        // for(int i=0;i<nums.size()-1;i++){
        //     int check = nums[i];
        //     // if(check==nums[i+1]) 
        //     int smallans = findDuplicate(nums+1,n-1);
        // }
        return sptr;
    }
};

// auto start = chrono::steady_clock::now();
signed main(){
    
    // auto end = chrono::steady_clock::now();
    // auto diff = end-start;
    // cout<<chrono::duration<double,milli>(diff).count()<<endl;
    int t;
    cin>>t;
    vector<signed> result;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        vector<signed> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        Solution stark;
        signed res = stark.findDuplicate(arr);
        result.push_back(res);
    }
    for (size_t i = 0; i < result.size(); i++)
    {
        cout<<result[i]; 
    }
    return 0;
}

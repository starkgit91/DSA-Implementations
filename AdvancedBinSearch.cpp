//Advanced Binary Search
// Leetcode problem
// problem is to find first and last index of a repeted 
// element in sorted array using binary search.

#include <bits/stdc++.h> //TC = O(logn) SC = O(1)

using namespace std;
class Solution{
public:
    int binsearchfirst(vector<int>& arr,int key){
        int s=0;
        int e = arr.size()-1;
        int ans = -1;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(arr[mid]==key){
                ans = mid;
                e = mid-1;
            }
            else if (key>arr[mid])
            {
                s = mid+1;
            }
            else{
                e = mid-1;
            }
            
        }
        return ans;
    }
    int binsearchlast(vector<int>& arr,int key){
        int s=0;
        int e = arr.size()-1;
        int ans = -1;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(arr[mid]==key){
                ans = mid;
                s = mid+1;
            }
            else if (key>arr[mid])
            {
                s = mid+1;
            }
            else{
                e = mid-1;
            }
            
        }
        return ans;
    }
    // gerenal algo for above two approaches of diff fns
    int getindex(vector<int>&arr,int key,bool getFirst){
        int s = 0;
        int e = arr.size()-1;
        int ans = -1;
        while (s<=e)
        {   
            int mid = s + (e-s)/2;
            if(key==arr[mid]){
                ans = mid;
                if(getFirst==true){
                    e = mid-1;
                }
                else{
                    s = mid+1;
                }
                
            }
            else if(key>arr[mid]){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        return ans;
    }
    vector<int> SearchRange(vector<int>& arr,int key){
        vector<int> v(2,-1);
        // int first = binsearchfirst(arr,key);
        // int last = binsearchlast(arr,key);
        int first = getindex(arr,key,true);
        int last = getindex(arr,key,false);
        if(first == -1){ // if element is not present
            return v;
        }
        v[0] = first;
        v[1] = last;
        return v;
    }
};
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    int key;
    cin>>key;
    bool getFirst;
    Solution stark;
    // cout<<stark.binsearchfirst(arr,key)<<endl;
    // cout<<stark.binsearchlast(arr,key)<<endl;
    cout<<stark.getindex(arr,key,getFirst=true)<<endl;
    cout<<stark.getindex(arr,key,getFirst=false)<<endl;
    vector<int> v = stark.SearchRange(arr,key);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    return 0;
}
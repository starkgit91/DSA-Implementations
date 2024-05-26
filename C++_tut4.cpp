#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
cin>>t;
for (int  i = 0; i < t; i++)
{   long long a,odd=0,productsum=0;
    cin>>a;
    long long array[a];
    for (long long j = 0; j < a; j++)
    {
        cin>>array[j];
        if(array[j]%2 == 1){
            odd++;
            }
        }
        
        for (long long j = 0; j < a-1; j++)
        {
            productsum = productsum + (array[j] * array[j+1]);
        }
        long long oddarray[odd];
        long long evenarray[a-odd];
        long long y=0,z=0;
        for (long long k = 0; k < a; k++)
        {   
            if(array[k]%2 == 1){
                oddarray[y] = array[k];
                y++;
            }
            else{
                evenarray[z] = array[k];
                z++;
            }
        }
        
        if(productsum%2==1){
            for (long long k = 0; k < a; k++)
            {
                cout<<array[k]<<" ";
            }
            cout<<endl;
        }
        else if(productsum%2==0 && odd%2==0 && odd!=0){
            for (long long p = 0; p < odd; p++)
            {
                cout<<oddarray[p]<<" ";
          }
            for (long long q = 0; q < (a-odd); q++)
            {
                cout<<evenarray[q]<<" ";
            }
            cout<<endl;
            
        }
        else if((productsum%2==0 && odd%2==1 &&(a-odd)>=1) ){
            for (long long p = 0; p < odd-1; p++)
            {
                cout<<oddarray[p]<<" ";
            }
            for (long long q = 0; q < (a-odd); q++)
            {
                cout<<evenarray[q]<<" ";
            }
            cout<<oddarray[odd-1];
            cout<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }

    }
    



    return 0;
}
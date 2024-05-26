// vector of given size

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> *vp = new vector<int>();
    vector<int> v(10,-2);
    vector<int> v2;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
        
    }
    cout<<v2.size()<<endl;
    v2.push_back(12);
    v2.push_back(124);
    v2.push_back(3);
    v2.push_back(7);
    v2[0]=2;
    sort(v2.begin(),v2.end());
    for(int i=0;i<4;i++){
        cout<<v2[i]<<" ";
    }
    
    return 0;
}
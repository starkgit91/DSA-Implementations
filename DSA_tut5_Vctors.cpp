// vector-- class
// we don't need to give the size to vector
// size won't matter
// every time size will double
#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> *vp = new vector<int>();  // dynamic allocation
    vector<int> v;  // static allocation
    for(int i=0;i<100;i++){
        v.push_back(i+1);
        cout<<"capacity "<<v.capacity()<<endl;
        cout<<"size "<<v.size()<<endl;
    }
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<endl;

    }    
    v.push_back(10);
    v.push_back(20);
    v.push_back(30); // it will insert element in vector
    v[1] = 100;
    // v[2] = 25;
    // never use [] to insert elements 
    // v[4] = 1234; // size won't increse by this syntax
    // v[5] = 129;
    v.push_back(23);
    v.push_back(123);
    // cout<<v[0]<<endl;
    // cout<<v[1]<<endl;
    // cout<<v[2]<<endl;
    // cout<<v[3]<<endl;
    // cout<<v[4]<<endl;
    // cout<<v[5]<<endl;
    // cout<<v[6]<<endl;

    // cout<<v.at(1)<<endl;
    // cout<<v.at(4)<<endl;
    v.pop_back();
    // for(int i = 0; i<v.size();i++){
    //     cout<<v[i]<<endl;
    // }

    // 2D VECTOR
    int m,n;
    cin>>m>>n;
    int x;
    vector<vector<int>> heights(m,vector<int>(n));
    for (size_t i = 0; i < m; i++)
	{   
		vector<int> row_mat;
		for (size_t j = 0; j < n; j++)
		{   
			cin>>x;
			cin>>row_mat[x];
		}
		heights.push_back(row_mat);
	}
    return 0;
}

// ceil- to return closest integral




#include<iostream>
using namespace std;
// Row wise 2D Array inp n Op
int main(){
    // int arr[100][100];
    //take input row wise
    // take input column wise
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    //row wise 2D array input
    for (int i=0;i<m;i++){
        // every row take input for column
        for (int j=0;j<n;j++){
            // taking input of 2D Array for every element
            cin>>arr[i][j];
        }
    }
    //printing 2D Array
    for(int i=0;i<m;i++){
        //for each row&column print respective element
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
    // changing the row in next line
    cout<<endl;
    }
    return 0;
}

//2D Array column wise Inp and Op
int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
     //column wise 2D array input
    for (int i=0;i<n;i++){
        // every column take input for row
        for (int j=0;j<m;j++){
            // taking input of 2D Array for every element
            cin>>arr[j][i];
        }
    }
    //printing 2D Array
    for(int i=0;i<n;i++){
        //for each row&column print respective element
        for(int j=0;j<m;j++){
            cout<<arr[j][i]<<" ";
        }
    // changing the column in next line
    cout<<endl;
    }
    

    return 0;
}















































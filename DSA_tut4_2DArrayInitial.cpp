//giving value of rows are optional
//giving value of columns are Mandatory
// #include <iostream>
// using namespace std;

// int main(){
//     //int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int arr[][3]={{1,2},{4,5,6},{7,8}};
//     for(int i =0;i<3;i++){
//         for (int j=0;j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//Initialising 2D Array or Matrix

#include <iostream>
using namespace std;
void print_2DArray(int arr[5][5],int m,int n){
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[][3] = {{1,2},{3,4},{}};
    int arr_zero[5][5] = {{0}};
    // print_2DArray(arr,3,3);
    print_2DArray(arr_zero,5,5);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int length(char name[]){
    int count=0;
    for(int i =0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
void reverse(char name[]){
    int len = length(name);
    int idx = floor(len/2);
    for (int i = 0; i < idx; i++)
    {
        swap(name[i],name[len-1-i]);
    }
}
int main(){
    char name[100];
    cin.getline(name,100);
    cout<<name<<endl;
    for(int i = 0 ;i<floor(length(name)/2);i++){
        swap(name[i],name[length(name)-1-i]);
    }
    cout<<name<<endl;
    reverse(name);
    cout<<name;
    return 0;
}




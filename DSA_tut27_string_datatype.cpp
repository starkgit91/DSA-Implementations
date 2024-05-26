#include <bits/stdc++.h>
using namespace std;
int main(){
    // string is a char array
    // basically a datatype
    string s = "abdc";
    cout<<s<<endl;
    //dynamic allocation
    string *sptr = new string;
    *sptr = "prashant";
    cout<<"address "<<sptr<<endl;
    cout<<"cont "<<*sptr<<endl;

    vector<string> v; // vector of string behaves as 2D Array
    v.push_back(s);
    v.push_back("hello");
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i];
        sort(v[i].begin(),v[i].end());
        cout<<endl;
        cout<<v[i];
    }
    string s2;
    getline(cin, s2);
    cout<<s2<<endl;    
    string s3;
    s3 = "abcabc";
    cout<<s3[1]<<endl;
    s3[0] = 'd';
    cout<<s3<<endl;
    string s4 = s3 + s2 + "hello coder";
    cout<<s4<<endl;
    cout<<s4.size()<<endl;
    cout<<s4.substr(3)<<endl;
    cout<<s4.substr(0)<<endl;
    cout<<s4.substr(3,4)<<endl;

    cout<<s4.find("abc");
    // to_string
    int n = 123;
    string str = to_string(n);
    str[1] = '9';
    cout<<str; //193
    str.push_back('5'); // strings also have pushback function
    cout<<str; //1935
    n = atoi(str.c_str());
    cout<<n+2; //1935+2=1937

    return 0;
}
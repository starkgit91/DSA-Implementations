#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    double health[t];
    double attack[t];
    double x;
    double y;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y;
        health[i] = y;
        attack[i] = x;
    }

    for (int i = 0; i < t; i++)
    {
        int h = attack[i] / 2;
        if (5*h > health[i])
        {
            int k = ceil((health[i] / h));
            cout << k << endl;
        }
        else
        {
            int n = health[i] - 5*h;
            int m = n / attack[i];
            cout << ceil((5 + m)) << endl;
        }
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	double h,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>h;
	   
	     y=(x/2);
	    
	    if(y*5>h){
	        
	        cout<<ceil((h/y))<<endl;
	        
	    }
	    else{
	       cout<<ceil(5+((h-(y*5))/x))<<endl;
	    }
	     
	}
	
	return 0;
}
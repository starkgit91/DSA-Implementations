// Inbuilt Functions
#include <bits/stdc++.h>
using namespace std;
void mystrcat(char str1[], char str2[]){
    for (int i = 0; i <= strlen(str2); i++)
    {
        str1[i+strlen(str1)] = str2[i];
    }
}
void mystrncpy(char str1[], char str2[], int n){
    for (int i = 0; i <= n; i++)
    {
        str1[i] = str2[i];   
    }
    for (int i = n+1; i <= strlen(str2); i++)
    {
        str1[i] = '\0';
    }
    
}
void mystrcpy(char str1[],char str2[]){
    for (int i = 0; i <= strlen(str2); i++)
    {
        str1[i]=str2[i];
    }  
}
bool mystrcmp(char str1[], char str2[])
{
    if (strlen(str1) != strlen(str2))
    {
        return false;
    }
    for (int i = 0; i < strlen(str1); i++)
    {
        if (str1[i] != str2[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char str1[100];
    char str2[100];
    cin >> str1 >> str2;
    if (strcmp(str1, str2) == 0)
    {
        cout << "equal";
    }
    else
    {
        cout << "not equal";
    }
    strcpy(str1,str2);
    strcpy(str2,"meaw");
    mystrcpy(str1,str2);
    char str3[100] = "meaw";
    mystrcpy(str2,str3);
    mystrncpy(str1,str2,3);
    strcat(str1,str2);
    cout<<str1<<" "<<str2<<endl;
    cout<<mystrcmp(str1,str2)<<endl;
    int len = strlen(str1);
    cout << len;
    return 0;
}
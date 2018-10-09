#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[100];
    cin>>s;
    char c;
    int n;
    n=strlen(s);
    while(n>0)
    { 
        c=s[n-1];
        if(islower(c))
        {
            s[n-1]=toupper(c);
        }
        else
        {
            s[n-1]=tolower(c);
        }
        n--;
    }
    cout<<s;
}

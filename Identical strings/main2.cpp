#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
    int T,x,y,flag=0,count;
    char s1[100],s2[100];
    cout<<"Enter number of test cases:\n";
    cin>>T;
    for(int k=0;k<T;k++){
        cout<<"Enter two strings:\n";
        cin>>s1>>s2;
        x=strlen(s1);
        y=strlen(s2);
        sort(s1, s1+x);
        sort(s2, s2+x);
    }
    
    for(int i = 0; i < x; i++)
    {
        if(s1[i]!=s2[i]){
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
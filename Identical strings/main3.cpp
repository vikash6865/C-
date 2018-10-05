#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
    int T,x,y,flag=0;
    char s1[100000],s2[100000];
    cin>>T;
    for(int k=0;k<T;k++){
        cin>>s1>>s2;
        int x=strlen(s1);
        int y=strlen(s2);
        sort(s1, s1+x);
        sort(s2, s2+y);
        flag=0;
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
}
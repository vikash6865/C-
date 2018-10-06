#include<iostream>
#include<regex> 
using namespace std;

int main(){
     string s;
     cin>>s;
     regex d("[0-9]");
     regex a("[aeiouyAEIOUY]");
     int l=s.length(),flag=0;
     for(int i=0; i<l; i++){
         if(regex_match(s[i],a)){
             flag=1;
             break;
         }
         else if(regex_match(s[i],r)){
             sum=s[i]+s[i+1];
             if(sum%2!=0){
                 flag=1;
                 break;
             }
         }
     }
        if(flag==0){
            cout<<"valid"<<endl;
        else
            cout<<"invalid"<<endl;
     }
}
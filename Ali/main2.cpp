#include<iostream>
using namespace std;

int main(){
     string s;
     int sig=1;
     cin>>s;
     int l=s.length(),flag=0,sum;
     if(l!=9)
        sig=0;
     for(int i=0; i<l && sig==1; i++){
         sum=0;
         if(((s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y') && i==2) || (s[i]=='-' && i!=6)){
             flag=1;
             break;
         }
         else if(s[i]=='0' || s[i]=='1' || s[i]=='2' || s[i]=='3' || s[i]=='4' || s[i]=='5' || s[i]=='6' || s[i]=='7' || s[i]=='8'|| s[i]=='9'){
             if(i==1)
                continue;
             else if(i==0 || i==3 || i==4 || i==7)    
                sum=s[i]+s[i+1];
             if(sum%2!=0){
                 flag=1;
                 break;
             }
         }
     }
        if(flag==0)
            cout<<"valid"<<endl;
        else
            cout<<"invalid"<<endl;
}

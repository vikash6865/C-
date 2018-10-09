#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int d,r,x,cir,t=0,lap;
    cin>>d;
     while(d>=1){
         cin>>r>>x;
         cir=(2*22*r)/7;
         lap=(100*x)/cir;
         if(lap>=1)
            t++;
         d--;
     }
     cout<<t<<endl;
}
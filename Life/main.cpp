#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int x,t;
    do{
        cin>>x;
        if(x!=42){
            cout<<x<<endl;   
            t=1;
        }
        else
            t=0;
    }while(t);
}
#include<iostream>
#include<math.h>
using namespace std;

bool is_prime(int x){
    int flag=0;
    for(int i=2; i<=sqrt(x); i++){
        if(x%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0)
        return false;
    else
        return true;
}

int main(){
    string str;
    int x,flag=0;
    cin>>str;
    for(int i=0; i<str.length(); i++){
        x=int(str[i]);
        if(!is_prime(x)){
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"string is magical word\n";
    else{
        cout<<"not magical word\n";
    }
}
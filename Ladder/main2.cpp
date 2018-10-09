#include<iostream>
using namespace std;

void space(){
cout<<"*";
    for(j=1; j<=2; j++)
            cout<<" ";
    cout<<"*";
}
int main(){
    int n,j,i;
    cin>>n;
    space();
    for(i=1;i<=3;i++){
        if(i%3==0){
            for(int k=0;k<3;k++)
                    cout<<"*";
        }
    }
    space();
}

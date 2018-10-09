#include<iostream>
using namespace std;
void space(){
    int t=2;
    while(t>=1){
    cout<<"*";
    for(int j=1; j<=3; j++)
        cout<<" ";
    cout<<"*"<<endl;
    t--;
    }
}
int main(){
    int n;
    cin>>n;
    while(n>=1){
        for(int i=1; i<=3; i++){
            cout<<"*";
                if(i%3==0){
                    for(int k=0;k<3;k++)
                    cout<<"*";
                }
                else{
                    for(int k=0;k<3;k++)
                    cout<<" ";
                }
            cout<<"*"<<endl;
        }
        n--;
    }
    space();
}
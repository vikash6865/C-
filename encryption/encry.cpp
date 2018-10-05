// program to encrypt a msg
#include<iostream>
#include<string>
using namespace std;
void encry(string msg,int K){
    int len=msg.length(),tmp;
    for(int i=0;i<len;i++){
        tmp = int(msg[i]);
        if((tmp >= 33 && msg[i]<= 47) || (tmp >= 58 && msg[i]<= 64) )
            {
                cout<<"begin"<<tmp<<endl;
                continue;
            }
        else
            {
                cout<<"tmp bef:"<<tmp<<endl;
                msg[i]+=K;
                cout<<"msg[i] :"<<msg[i]<<endl;
                tmp=int(msg[i]);
                cout<<"tmp after:"<<tmp<<endl;
                if(tmp>57){
                    while(msg[i]>9){
                        msg[i]-=9;
                        cout<<"msg while:"<<msg[i]<<endl; 
                }                
                }
            }
    }
    cout<<"encrypted message: "<<msg<<endl;
}

int main(){
    string msg;
    int K;
    cout<<"Enter a message to encrypt:\n";
    cin>>msg;
    cout<<"Enter the key\n";
    cin>>K;
    encry(msg,K);
    return 0;
}
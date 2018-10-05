// program to check whether the entered number is prime or not.
#include<iostream>
#include<math.h>
using namespace std;
void prime(int N){
    cout<<"Prime number upto N are: \n";
    for(int i=2;i<=N;i++)
        {
            int flag=0;
            for(int j=2;j<=sqrt(i);j++)
                {
                    if(i%j==0)
                    {
                        flag=1;
                        break;
                    }
                }
            if(flag==0)
            cout<<i<<" ";
        }
    }
int main(){
    int N;
    cout<<"Enter a number between 1 to 1000:\n";
    cin>>N;
    if(N<1 || N>1000)
    cout<<"Numbered entered must be between 1 to 1000\n";
    else
    prime(N);
    return 0;   
}
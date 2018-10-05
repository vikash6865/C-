// program to check whether the entered number is legal ISBN number or not.
// not working
#include<iostream>
using namespace std;

void countDig(){
    
}

void potion(int n){
    int sum=0,c=0;
    for(int i=10;i>=1;i--){
        while(n>9){
            rem=n%10;
            n/=10;
            sum+=i*rem;
        }
    }
    if(sum%11 == 0)
        cout<<"Legal ISBN"<<endl;
    
}

int main(){
    int n;
    cout<<"Enter a 10 digit integer"<<endl;
    cin>>n;
    potion(n);
    return 0;
}
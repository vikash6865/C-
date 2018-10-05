#include<iostream>
#include<math.h>
using namespace std;

int bitOr(int n,int *arr){
    int sum=0,t,c=0;
    for(int i=0;i<pow(2,n);i++){
        for(int j=0;j<n;j++){
            c= c | arr[j];
            sum+=c;
            cout<<arr[j]<<" , ";
        }
        cout<<"}";
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int *arr = new int[n];
    cout<<"enter elements"<<endl;
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int res=bitOr(n,arr);
    cout<<"sum :"<<res<<endl;
    return 0;
}
#include<iostream>
using namespace std;

int photo(int N){
    int L,W,H;
    cout<<"Enter minimum dimension of photo\n";
    cin>>L;
    for(int i=0;i<N;++i){
    cout<<"Enter dimension of photo i.e Width and Height respectively:\n";
    cin>>W>>H;
    if(W<L || H<L)
        cout<<"UPLOAD ANOTHER"<<endl;
    else 
        if(W==H)
            cout<<"ACCEPTED"<<endl;
        else
            cout<<"CROP IT"<<endl;
    }

}

int main(){
    int N;
    cout<<"Enter number of photos(between 1 tp 1000):\n";
    cin>>N;
    if(N<1 || N>1000)
        cout<<"Number of photos should be between 1 to 1000\n";
    else
        photo(N);
    return 0;
}
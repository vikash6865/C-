#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int T,K,N,S[100000],count,i;
    cin>>T;
    while(T--){
        count=0;
        cin>>N>>K;
        for(i=0; i<N; i++ ){
            cin>>S[i];
        }
        sort(S,S+N, greater<int>());
        for(i=0;i<=K;i++){
            if(S[i]>=S[K-1]){
                count++;
            }
        } 
        cout<<count<<endl;
    }
}
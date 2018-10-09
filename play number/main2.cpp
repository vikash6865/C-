#include<iostream>
using namespace std;

int main()
{
    int Sum,Mean, N, Q, A[1000], i, L, R,rem=0,j;
    cin>>N>>Q;
    rem=N-Q;
    for(i=1; i<=Q; i++){
        j=i;
        cin>>A[j];
        while(rem>=0){
        cin>>A[j];
        rem--;
        j++;
        }
        cin>>L>>R;
        Sum=0;
        for(int j=L; j<=R; j++){
            Sum+=A[j];
        }
        Mean=Sum/(R-L+1);
        cout<<Mean<<endl;
    }
}

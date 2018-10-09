#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Sum,Mean, N, Q, A[1000000], i, L, R;
    scanf("%d",&N);
    scanf("%d",&Q);
    for(i=1 ;i<=N; i++)
        scanf("%d",&A[i]);
    for(i=1; i<=Q; i++){
        scanf("%d",&L);
        scanf("%d",&R);
        Sum=0;
        for(int j=L; j<=R; j++){
            Sum+=A[j];
        }
        Mean=Sum/(R-L+1);
        printf("%d\n",Mean);
    }
}

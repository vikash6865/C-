#include <iostream>
using namespace std;

int calcTime(vector<int> &orig, vector<int> &ideal){
    return 5;
}

int main() {
    int N,val;
    cout<<"Enter input constraint:"<<endl;
    cin>>N;
    vector<int> orig(N),ideal(N);
    cout<<"Enter values of original sequence"<<endl;
    for(int i=0;i<N;i++)
        {
            cin>>val;
            orig.push_back(val);
        }
    cout<<"Enter values of Ideal sequence"<<endl;
    for(int i=0;i<N;i++)
        {
            cin>>val;
            ideal.push_back(val);
        }
    int ttime = calcTime(orig,ideal);

    return 0;
}

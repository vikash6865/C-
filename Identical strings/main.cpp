// program to check whether two strings are identical or not

// Given two strings of equal length, you have to tell whether they both strings are identical.

// Two strings S1 and S2 are said to be identical, if any of the permutation of string S1 is equal to the string S2. See Sample explanation for more details.

// Input :

//     First line, contains an intger 'T' denoting no. of test cases.
//     Each test consists of a single line, containing two space separated strings S1 and S2 of equal length.

// Output:

//     For each test case, if any of the permutation of string S1 is equal to the string S2 print YES else print NO.

// Constraints:

//     1<= T <=100
//     1<= |S1| = |S2| <= 10^5
//     String is made up of lower case letters only.


#include<iostream>
#include<string>
using namespace std;

int main(){
    int T,x,y,flag=0,count;
    string s1,s2;
    cout<<"Enter number of test cases:\n";
    cin>>T;
    for(int k=0;k<T;k++){
        cout<<"Enter two strings:\n";
        cin>>s1>>s2;
        x=s1.length();
        y=s2.length();
        count=0;
        for(int i=0; i<x; i++){
            for(int j=0; j<y; j++){
                if(s1[i]==s2[j]){
                    flag=1;
                    s2[j]='0';
                    break;
                }
                else
                    flag=0;
            }
            if(flag==0){
                break;
            }
            else{
                count++;
            }
        }
        if(count==x)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
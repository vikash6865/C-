// Akash and Vishal are quite fond of travelling. They mostly travel by railways. They were travelling in a train one day and they got interested in the seating arrangement of their compartment. The compartment looked something like


// So they got interested to know the seat number facing them and the seat type facing them. The seats are denoted as follows :

//     Window Seat : WS
//     Middle Seat : MS
//     Aisle Seat : AS

// You will be given a seat number, find out the seat number facing you and the seat type, i.e. WS, MS or AS.

// INPUT
// First line of input will consist of a single integer T denoting number of test-cases. Each test-case consists of a single integer N denoting the seat-number.

// OUTPUT
// For each test case, print the facing seat-number and the seat-type, separated by a single space in a new line.

// CONSTRAINTS

//     1<=T<=105
//     1<=N<=108

// SAMPLE INPUT

// 2
// 18
// 40

// SAMPLE OUTPUT

// 19 WS
// 45 AS

// Time Limit: 1.0 sec(s) for each input file.
// Memory Limit: 256 MB
// Source Limit: 1024 KB
// Marking Scheme: Marks are awarded when all the testcases pass.
// Allowed Languages: Bash, C, C++, C++14, Clojure, C#, D, Erlang, F#, Go, Groovy, Haskell, Java, Java 8, JavaScript(Rhino), JavaScript(Node.js), Julia, Kotlin, Lisp, Lisp (SBCL), Lua, Objective-C, OCaml, Octave, Pascal, Perl, PHP, Python, Python 3, R(RScript), Racket, Ruby, Rust, Scala, Swift, Swift-4.1, Visual Basic

#include<iostream>
using namespace std;

int main(){
    int n,s,seat,opp;
    string type;
        cout<<"Enter number of test cases: \n";
        cin>>n;
        for(int i=0; i<n; ++i){
            cout<<"Enter seat number: \n";
            cin>>s;
            seat=s%12;
            if(seat==1 || seat==6 || seat==7 || seat==12){
                type="WS";
                if(seat==1)
                    opp=s+11;
                else if(seat==6)
                    opp=s+1;
                else if(seat==7)
                    opp=s-1;
                else
                    opp=s-11;
            }
            else if(seat==2 || seat==5 || seat==8 || seat==11){
                type="MS";
                if(seat==2)
                    opp=s+9;
                else if(seat==5)
                    opp=s+3;
                else if(seat==8)
                    opp=s-3;
                else
                    opp=s-9;
            }
            else{
                type="AS";
                if(seat==3)
                    opp=s+7;
                else if(seat==4)
                    opp=s+5;
                else if(seat==9)
                    opp=s-5;
                else
                    opp=s-7;
            }
            cout<<"seat opposite to "<<s<<" is: "<<opp<<" and its type is: "<<type<<endl;
            }
        }
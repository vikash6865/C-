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

#include <iostream>


using namespace std;


int main() {

	int d,n[100000],a,m,x;

	cin>>a;

for (int i=0;i<a;i++)

{	cin>>n[i];

	d=n[i]%6;
	m=n[i]/6;
	x=m%2;
if (n[i]%12!=0 && (x==0 || n[i]%6==0))
{

switch (d)

{

case 0:

	n[i]=n[i]+1;

cout<<n[i]<<" WS"<<endl;

break;


case 1:


	n[i]=n[i]+11;

	cout<<n[i]<<" WS"<<endl;

	break;

	

case 2:

	n[i]=n[i]+9;

	cout<<n[i]<<" MS"<<endl;

	break;

	

case 3:

	n[i]=n[i]+7;

	cout<<n[i]<<" AS"<<endl;

break;


case 4:

	n[i]=n[i]+5;

	cout<<n[i]<<" AS"<<endl;

	break;

	

case 5:

	n[i]=n[i]+3;

	cout<<n[i]<<" MS"<<endl;

	break;}

}

else

	{
	switch (d)

{

case 0:

	n[i]=n[i]-11;

cout<<n[i]<<" WS"<<endl;

 break;


case 1:


	n[i]=n[i]-1;

	cout<<n[i]<<" WS"<<endl;

	break;

	

case 2:

	n[i]=n[i]-3;

	cout<<n[i]<<" MS"<<endl;

	break;

	

case 3:

	n[i]=n[i]-5;

	cout<<n[i]<<" AS"<<endl;

break;


case 4:

	n[i]=n[i]-7;

	cout<<n[i]<<" AS"<<endl;

	break;

	

case 5:

	n[i]=n[i]-9;

	cout<<n[i]<<" MS"<<endl;

	break;

}

}

}

	return 0;}

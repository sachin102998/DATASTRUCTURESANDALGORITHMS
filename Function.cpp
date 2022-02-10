//function is block of code used for do specific task
/* syntax of fucntion
returntype functionname(parametere1,parameter2)
{

    //body of fucntions
}
*/
//program to write funtion of add 2 integer.
#include<iostream>
using namespace std;
int summation(int n1, int n2){
    int sum=n1+n2;
}
 int main()
 {
     int n1,n2;
     cin>>n1>>n2;
     cout<<summation(n1,n2)<<endl;
     return 0;
 }
 //Concept of call stack is the very important concept in the memory
 //fibannaci series- it a sequence in which next term is the sum of previous two terms
 //program to print fibonacci series
 
#include<iostream>
 using namespace std;
 void fib(int n){
     int t1=0;
     int t2=1;
     int nextterm;
     for(int i=1; i<=n; i++){
         cout<<t1<<endl;
         nextterm=t1+t2;
         t1=t2;
         t2=nextterm;
     }
 }
 int main()
 {
     int n;
     cin>>n;
      fib(n);
      return 0;
 }
 //program for factorial of numbers.
#include<iostream>
 using namespace std;
 int fact(int n){
     int factorial=1;
     for(int i=2;i<=n; i++){
         factorial*=i;
     }
     return factorial;
     
 }
 int main()
 {
     int n;
     cin>>n;
    int ans=fact(n);
    cout<<ans<<endl;
      return 0;
 }
 //Hackerrank program
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void great(int a, int b,int c,int d){
    if(a>b && a>c &&a>d){
        cout<<a<<endl;
    }
    else if (b>a && b>c && b>d) {
     cout<<b<<endl;
    }
    else if(c>a && c>b  && c>d){
           cout<<c<<endl;
    }
    else {
    cout<<d<<endl;
    }
};    


int main() {
   int a,b,c,d;
   cin>>a>>b>>c>>d;
   great(a,b,c,d);
    return 0;
}

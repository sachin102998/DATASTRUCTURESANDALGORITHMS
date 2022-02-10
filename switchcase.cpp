//program to make calcualtor using switch case operation
#include<iostream>
using namespace std;
 int main()
 {
     int n1,n2;
     cin>>n1>>n2;
     cout<<n1<<n2<<endl;
     char op;
     cout<<"input a operator";
     cin>>op;
     switch (op)
     {
         case '+':
         cout<<n1+n2<<endl;
         break;
         
         case '-':
         cout<<n1-n2<<endl;
         break;
         
         case '*':
         cout<<n1*n2<<endl;
         break;
         
         case '%':
         cout<<n1%n2<<endl;
         break;
         
         case '/':
         cout<<n1/n2<<endl;
         break;
     }
     return 0;

 }
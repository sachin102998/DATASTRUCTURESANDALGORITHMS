//continue statement= the statement is used to skip to the next iteration of the loop
//break statement = break statement is used to terminate from the loop.
//program to print number from 0 to 100 skip which is  not divisble by 3.#include<iostream>
using namespace std;
int main()
{
    for(int i=1; i<100;i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }
}
//break 
//program to check whether the number is prime or not.

//inclusion - exclusion principle = this is the principal used for finf the number of ways needed to do something .
//n1 a way ,n2 another way ,n3 both way (common way)
//total no of ways = n1+n2-n3;

//program to find how many numbers are between 1 and 1000 are divisble by 5 or 7.
#include<iostream>
using namespace std;
int divisble(int n,int a,int b){
    int c1=n/a;
    int c2=n/b;

    int c3=n/(a*b);
	return c1+c2-c3;
}
int main()
{
     int n,a,b;
     cin>>n>>a>>b;
     cout<<divisble(n,a,b)<<endl;//32
     return 0;
}

//Euclid Algorthm to find GCD
//GCD states for Greatest Common Divisbor
#include<iostream>
using namespace std;
int gcd(int a, int b){
    while(b!=0){
        int remainder = a%b;
        a=b;
        b=remainder;
    }
    return a;
}
int main()
{
     int a,b;
     cin>>a>>b;
     cout<<gcd(a,b)<<endl;
     return 0;
}
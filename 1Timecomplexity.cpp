//time complexity = it stand as the size of input increase the time complestiy of program will also be increase.
//time complexity changes in threee co ordinatic manners.
//linearly,quardratic,cubic
/* Time complexity of an algorithm quantifies the amount of time taken by a program to run as a functions of length of the input
*/
/*
time Complexity as decrasing order.
 
O(logn)<O(sqrt(n))<O(n)<O(n2)<O(n3)
*/
/* If any value is run by n/2k then the time complexity of that loop will be
O(logn)
*/

/* Mathematics->
Math introduction->
Factor of a number N is a number d such that d divides N.
That is, N % d == 0.
Example:

For number 6, the factors are 1, 2, 3 and 6.

This is best explained through working our way through some sample problems.
*/
//program for factorization.
#include<iostream>
#include<cmath>
using namespace std;
int allFactors(int n, int len1) {
    for(int i=1; i<=n; i++){
       if(n%i==0){
		   len1=i;
		cout<<len1<<" ";
	   }
	   
    }
	
	return len1;

}
int main()
{
	int n;
	cin>>n;
	int len1;
	allFactors(n,len1);
	return 0;

}


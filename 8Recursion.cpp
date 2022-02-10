//Recursion = it means when the function call it self to make the problem is smaller.
//program to make sum till n 
#include<iostream>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }
    int prevsum = sum(n-1);
    return n+prevsum;
}
 int main()
 {
     int n;
     cin>>n;
     cout<<sum(n)<<endl;
     return 0;
 }
 //calculate n raise to power p
 // np= n*n*n..................p times.
 //np=n*np-1;
 //n0=1

 #include<iostream>
using namespace std;
int Power(int n,int p){
    if(p==0){
        return 1;
    }
    int prevPower = Power(n,p-1);
    return n*prevPower;
}
 int main()
 {
     int n,p;
     cin>>n>>p;
     cout<<Power(n,p)<<endl;
     return 0;
 }

 //program to find factorial 
 //program to find fibonacci of the nth term.
 //to check whether the array is sorted or not using recursion.
 #include <algorithm>
#include <iostream>
#include <vector>
bool sorted(int arr[], int n)
{
	if(n==1)//base conditon.
	{
		return true;
	}
	int restarray=sorted(arr+1,n-1);
	return(arr[0]<arr[1] && restarray);

}

using namespace std;

int main() {
	// Your code goes here;
	int n;
	 cin>>n;
	 int arr[n];
	 
	 for(int i=0; i<n; i++)
	 {
		 cin>>arr[i];
	 }
	 cout<<sorted(arr,n);

	return 0;
}
//binary search using recursion
#include <algorithm>
#include <iostream>
#include <vector>
int bisearch(int arr[],int left,int right,int target)
{
    if(left>right)//base class.
    {
        return -1;
    }
    int mid=left+right/2;
    if(mid==target)
    {
        return mid;
    }
    else if(arr[mid]>target)
    return bisearch(arr,left,mid+1,target);
    else
    return bisearch(arr,mid-1,right,target);
}
int main() {
	// Your code goes here;
	int n;
	 cin>>n;
	 int arr[n];
	 
	 for(int i=0; i<n; i++)
	 {
		 cin>>arr[i];
	 }
	 cout<<bisearch(arr,n);

	return 0;
}
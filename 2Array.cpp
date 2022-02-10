//array is the collection or list of similar type of datattypes.
//to declare array we 
/* datatype arrayname[size];
for ex= 
 int array[4]={12,14,51,25};
 this is the declaration of array.
 */
 //in most of the languages the indexing is allowed in the array
 #include<iostream>
using namespace std;
int main()
{
    int arr[5]={24,15,90,46,89};
    cout<<arr<<endl;
    //indexing in array
    cout<<arr[2]<<endl;//90
    cout<<arr[0]<<endl;//24
    return 0;
}   
//program to take input from user and make it array.
 #include<iostream>
using namespace std;
int main()
{
    int n;//intiliase the size of array.
    cin>>n;
    int arr[n];
    //to take input from user loop for is used
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    //to give output of the array
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<"";
    }


    return 0;
}   
//program to find maximum and minimum value of array.
 #include<iostream>
 #include<climits>
using namespace std;
int main()
{
    int n;//intiliase the size of array.
    cin>>n;
    int arr[n];
    //to take input from user loop for is used
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    //to give output of the array
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<"";
    }
     int maxNo=INT_MIN;
    int  minNo=INT_MAX;
    for(int i=0; i<n; i++){
        if(maxNo>arr[i])
        {
            cout<<maxno<<endl;
        }
        if(minNo<arr[i]){
            cout<<minno<<endl;
        }
    }



    return 0;
} 
//another method to take print the array is
//program to find maximum and minimum value of array.
 #include<iostream>
 #include<climits>
using namespace std;
int main()
{
    int n;//intiliase the size of array.
    cin>>n;
    int arr[n];
    //to take input from user loop for is used
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    //to give output of the array
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<"";
    }
     int maxNo=INT_MIN;
    int  minNo=INT_MAX;
    for(int i=0; i<n; i++){
        maxNo=max(maxNo,arr[i]);
        minno=min(minNo,arr[i]);
    }
    cout<<maxNO<<""<<minNo<<endl;




    return 0;
} 
//searching in array there are various kind of searches in array.
 #include<iostream>
 #include<climits>
using namespace std;
int main()
{
    int n;//intiliase the size of array.
    cin>>n;
    int arr[n];
    //to take input from user loop for is used
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    //to give output of the array
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
     int key;
     cin>>key;
     for(int i=0; i<n; i++)
    {
        if(key==arr[i])
        cout<<key<<endl;
    }
    



    return 0;
} 
//complexity of linear search is O(n)
//program to dins array inside the array by using funtion
#include<iostream>
using namespace std;

int linearsearch(int arr[],int n,int key){
	for(int i=0; i<n; i++){
		if(key==arr[i])
		return i;
	}
	return -1;

}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int key;
	cin>>key;
cout<<linearsearch(arr,n,key)<<endl;
return 0;
}
//Binary search in array.
#include<iostream>
#include<climits>
using namespace std;
int binarysearch(int arr[],int n,int key){
    int s=0;
    int e=n;
   
    while(s<=e){
         int mid=(s+e)/2;
    
        if(arr[mid]==key){
        return mid;

        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        
    }

}
int main()
{
    int n;//intiliase the size of array.
    cin>>n;
    int arr[n];
    //to take input from user loop for is used
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    //to give output of the array
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
    int key;
    cin>>key;
    
    cout<<binarysearch(arr,n,key)<<endl;
    

    return 0;
} 
//to find out the time complexity of binary search the 
/* the length after k iteration = n/2 the power k.

//Time complexity of an array is O(logn base 2)
//sorting in array= ordering of the elements of array in the asscending order.
//there are various type of sorting in arrays.

//Selection sort = find the minimum element in the unosorted array and swap it with the beginning.
*/#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;//intiliase the size of array.
    cin>>n;
    int arr[n];
    //to take input from user loop for is used
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    //to give output of the array
    
    
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    } 
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    
    }  
     
    return 0;
} 
//Maximum chocolates problem.
//Bubble sort= repeteadly swap two adjacent element if they are in the wrong order.
/* VVVIP = if we have n elemets inside the array then we will have to do n-1 iteration for sorted array
*/
//program for bubble sort in array
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int counter=1;
	while(counter<n-1){
	for(int i=0; i<n-counter; i++){
			if(arr[i]>arr[i+1]){
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
		counter++;
	 }
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
/* insertion sort-> insert a element from unsorted array and to its correct postions of sorted array.
*/
//program for insertion sort in array
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	for(int i=1; i<n; i++){
		int current = arr[i];
		int j=i-1;
		while(arr[j]>current && j>=0){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=current;
	}
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
//subarray for array-> it is the contiguios part of an array.
//No of subarrays in an array with n elements = n*(n+1)/2
/* subsequence-> a subsequence is the sequence that can be derived an array by selecting by selecting
zero or more elements without changing the order of remaining elements.
NO of subsequence of an array with n elements= 2n.
*/


//NOTE-> every subarray is subsequence but every subsequence is not a subarray.
//Array challenges:->

/* TWO D ARRAY - it is the combination of n rows and n coloums like a matrix
 int arr[n][m]
 */
 //program to take input for 2_D array and print output of 2d array.
 #include<iostream>
 using namespace std;
  int main()
  {
      int n,m;
      cin>>n>>m;
      int arr[n][m];
      //code to take input for array from user
      for(int i=0; i<n; i++){
          for(int j=0; j<m; j++)
          {
              cin>>arr[i][j];
          }
      }
      //code to give output of array input given by the user.
      
      for(int i=0; i<n; i++){
          for(int j=0; j<m; j++)
          {
              cout<<arr[i][j]<<"";
			  
          }
		  cout<<endl;
      }
      return 0;
  }
  //program to searching in 2d array.
  #include<iostream>
 using namespace std;
  int main()
  {
      int n,m;
      cin>>n>>m;
      int arr[n][m];
      //code to take input for array from user
      for(int i=0; i<n; i++){
          for(int j=0; j<m; j++)
          {
              cin>>arr[i][j];
          }
      }
      //code to give output of array input given by the user.
      cout<<"Matrix is ="<<\n;
      for(int i=0; i<n; i++){
          for(int j=0; j<m; j++)
          {
              cout<<arr[i][j]<<"";
			  
          }
		  cout<<\n;
      }
      //element found program
      int x ;
      cin>>x;
      bool flag = false;
      for(int i=0; i<n; i++){
          for(int j=0; j<m; j++)
          {
              if(arr[i][j]=x)
              {
                  cout<<i<<j<<endl;
                  flag = true;
              }
              
          }
      }
      if(flag){
          cout<<"element is found\n";
      }
      else{
          cout<<"element is not found\n";
  
      }
  }
}      
      
//spiral order matrix = start from first colum to last coloum after that
/* last coloum to last row
 after last coloum to starting coloum 
 after that row end to row start 
 all are towards
 */
 //program to print spiral order matrix.
  #include<iostream>
 using namespace std;
  int main()
  {
      int n,m;
      cin>>n>>m;
      int arr[n][m];
      //code to take input for array from user
      for(int i=0; i<n; i++){
          for(int j=0; j<m; j++)
          {
              cin>>arr[i][j];
          }
      }
      //code to give output of array input given by the user.
      
      for(int i=0; i<n; i++){
          for(int j=0; j<m; j++)
          {
              cout<<arr[i][j]<<"";
			  
          }
		  cout<<endl;
      }
      int row_start=0;
      int coloum_start=0;
      int row_end=n-1;
      int coloum_end=m-1;
      while(row_start<+row_end && coloum_start<=coloum_end){
          //for row start 
           for(int col=coloum_start; col<=coloum_end; col++)
      {
          cout<<arr[row_start][col]<<""<<
      }
      row_start++;
          //for coloum end 
           for(int row=row_start; row<=row_end; row++)
      {
          cout<<arr[row][coloum_end]<<"";
      }
      coloum_end--;
                //for right to left
           for(int col =coloum_end; col>=coloum_start; col--)
      {
          cout<<arr[row_end][col]<<"";
      }
      row_end--;
      //for rowend to colum start upwards direct
for(int row=row_end; row>=row_start; row--)
      {
          cout<<arr[row][coloum_start]<<"";
      }
      coloum_start++;
    


      }
     
            return 0;
  }
//character array - same as array but we declare it as +1;
// Declaration = int arr[char+1];
//becaus our null character defined us that our last senetece is ended.
#include<iostream>
using namespace std;
 int main()
 {
      char arr[100];//array declaration
     cin>>arr;
     cout<<arr;
     return 0;
 }
 //to acces any number in array.
 #include<iostream>
using namespace std;
 int main()
 {
     char arr[100];
     cin>>arr;
     cout<<arr[2];//c
     cout<<arr[4];//i
     return 0;
 }
 //program to check palandrome
 //palandrome = the palandrome is the words if we write the words oppsotily then the meaning is always be same
#include<iostream>
using namespace std;
 int main()
 {
     int n;//size of palndrome declare
     cin>>n;
     char arr[n+1];//character array declare
     cin>>arr;
     bool check=1;
     for(int i=0; i<n; i++){
         if(arr[i] !=arr[n-1-i])
         {
             check =0;
             break;
         }
     }
     if(check==true){
         cout<<"word is a palindrome";
     }
     else{
         cout<<"word is not a palindrome";
     }
     return 0;
 }

//program to check largest word in a sentence;
//program for array challeneges
//max till i;-> this is non decreasing function.
//program for insertion sort in array
#include<iostream>
using namespace std;
int main(){
	int mx=INT_MIN;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
}
cout<<endl;

for(int i=0; i<n; i++){
 mx=max(mx,arr[i]);
	 
cout<<mx<<endl;

}
return 0;
}
//progrma for find sum of all subrarrays.
//given an array a[] of size n.Output sum of each subarray is given array.
//program for insertion sort in array
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
}
cout<<endl;
//main logic for subarray
int curr=0;
for(int i=0; i<n; i++){
	curr=0;
	for(int j=i; j<n; j++){
		curr +=arr[j];
		cout<<curr<<endl;
	}
 }
return 0;
}

//Longest arithmetic subarray.
/*Question->
Problem
An arithmetic array is an array that contains at least two integers and the
differences between consecutive integers are equal. For example, [9, 10], [3, 3, 3],
and [9, 7, 5, 3] are arithmetic arrays, while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are
not arithmetic arrays.
Sarasvati has an array of N non-negative integers. The i-th integer of the array is
Ai
. She wants to choose a contiguous arithmetic subarray from her array that has
the maximum length. Please help her to determine the length of the longest
contiguous arithmetic subarray.
Input
The first line of the input gives the number of test cases, T. T test cases follow.
Each test case begins with a line containing the integer N. The second line
contains N integers. The i-th integer is Ai
.

Output
For each test case, output one line containing Case #x: y, where x is the test case
number (starting from 1) and y is the length of the longest contiguous arithmetic
subarray.
Constraints
Time limit: 20 seconds per test set.
Memory limit: 1GB.
1 ≤ T ≤ 100.
0 ≤ Ai ≤ 109
.
Test Set 1
2 ≤ N ≤ 2000.
Test Set 2
2 ≤ N ≤ 2 × 105 for at most 10 test cases.
For the remaining cases, 2 ≤ N ≤ 2000.
*/
//Question Asked by Top companies
//First repeating element
/*Problem
Given an array arr[] of size N. The task is to find the first repeating element in an
array of integers, i.e., an element that occurs more than once and whose index of
first occurrence is smallest.
Constraints
1 <= N <= 106
0 <= Ai <= 106
Example
Input:
7
1 5 3 4 3 5 6
Output:
2
Explanation:
5 is appearing twice and its first appearance is at index 2 which is less than 3
whose first occurring index is 3.
*/
/* Subarray with given sum->
Problem
Given an unsorted array A of size N of non-negative integers, find a continuous
subarray which adds to a given number S.
Constraints
1 <= N <= 105
0 <= Ai <= 1010
Example
Input:
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4
Explanation: The sum of elements from 2nd position to 4th position is 12.
*/



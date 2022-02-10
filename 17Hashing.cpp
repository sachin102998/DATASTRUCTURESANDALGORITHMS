//Hashing=To play with elements and for storing the elements of big size in small keys.
/* Two options= 1.Traverse The Whole Array.
                2.Thodi si extra memory k dam pe elements aur indices ko map kare.

Problem:stroing indices of such large elements of cuzz Array with 10^8 only(too be global also).

   Hashing->Converting elements into smaller elemnt using Hash funtion(key)
*/
/* collison=After applying
Seprate  Chaining= If Collison,Create chain of values at same key using linked list.
For worst Case-> It would be = Search time O(n)
Load Factor->n/b
.where n= no of values to be mapped
and b= no of key available for mapping
.Open Adressing - to handle collison 
Note- if Collison,do probing
 Using a Second argument called probe number in the hash Function.
 Probe number depends on key , hnece given by P(k).
 There are basically three types of probing
 1.Linear=P(k)=a*k+b
 2.Quardatic:P(k)=a*k2+B*k+c.
 3.Double=p(k,x)=k*h2(x),h2(x) is a secondry hash function.
 */

 /* Hashing In STL=Standard tempate Library.


                    Maps                        Unordered Map
Insertion:      O(log(n))                          O(1)
Accessing:      O(log(n))                          O(1)
          implemented using                     Hash Tables(basically array of buckets) 
          RED_BLACK tress.

      key,value
      map(int,int)mp;                         unordered_map(int,int)ump;
*/
//#define int long long
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a; i<b; i++)
#define ff first
#define ss second
#define setBits(x) bulitin_popcount(x)

signed main(){
    //start ampping
    map<int,int>m;
    m[8]=2;
    cout<<m[8]<<endl;
    return 0;
}
/* Count frequency of elements in given array.
We need to maintain Frequency of each element
for example:

arr[]=[2,2,2,1,1,4,3,4];
Key(element)          Value(frequency)
2---------------------> 3
1--------------------->2
4--------------------->2
3--------------------->1
*/
//to cfind the count of frequency of elements.
#include<iostream>
#include<math.h>
#include<vector>
#include<map>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a; i<b; i++)
#define ff first
#define ss second
#define setBits(x) bulitin_popcount(x)


signed main(){
    //taking an size of an array
    int n;
    cin>>n;
    vi a(n);//making vector of an array
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
//start ampping
    map<int,int>freq;
    rep(i,0,n){
        freq[a[i]]++;
    }
    //iteration of map
    map<int,int> ::iterator it;
    for(it=freq.begin(); it!=freq.end(); it++){
        cout<<it->ff<<" "<<it->ss<<endl;
    }
    return 0;
}
//for unonrder
#include<iostream>
#include<math.h>
#include<vector>
#include<map>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a; i<b; i++)
#define ff first
#define ss second
#define setBits(x) bulitin_popcount(x)


signed main(){
    //taking an size of an array
    int n;
    cin>>n;
    vi a(n);//making vector of an array
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
//start ampping
   unorderd_map<int,int>freq;
    rep(i,0,n){
        freq[a[i]]++;
    }
    //iteration of map
    unorderd_map<int,int> ::iterator it;
    for(it=freq.begin(); it!=freq.end(); it++){
        cout<<it->ff<<" "<<it->ss<<endl;
    }
    return 0;
}
/*Question= Print a vertical of A binary tree
2.COunt NUmber of subarrays with sum zero.
*/


//Slidimg window Technique=
/* ex=Problem: you are Given an array with n elements,Calculate the minimum sum of k,consecutive elements
  Ex=[-2,10,1,3,2,-1,4,5]; k=3
  Various Sum=9,14,6,4,5,8 here 4 is minum so it will be the answer.

  Brute Force
  1.Iterate from i=0 to i=n-k-i in outer loop
  2.Starting from every j=i computer sum of k elements and maintain the minmum.
  Time complexity=O(n*k).


    Sliding window technique;
    1.Compute sum of first k elements(i=0 to k)
    2.while increasing i,subtract a[i-1] and add a[i+k-1] in th previous sum,which will become current sum.
      Ex=[-2,10,1,3,2,-1,4,5]; k=3
      for i=0; s=9
       Ex=[-2,10,1,3,2,-1,4,5]; k=3
       for i=1,  9-(-2)+3=14
    3.Do the above process till i=5 and maintain the minimum.
    Time complexity=O(n);Much better   
*/
//sliding windows technique impelemnt

#include<iostream>
#include<math.h>
#include<vector>
#include<map>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a; i<b; i++)
#define ff first
#define ss second
#define setBits(x) bulitin_popcount(x)


signed main(){
    int n,k;
    cin>>n>>k;
    vi a(n);
    rep(i,0,n){
        cin>>a[i];
    }
    return 0;

 //top k most frequent  elements in the stream
 //sudoku solver
   
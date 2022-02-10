//Dynamic Programming:-> work on small problems and learn from it make it bigger problem.
//Properties of Dynamic Programming:->
/*1.Optimal Sturcture.->if we can write recurance relation then  a problem is said to have optimal substructure.
2.Overlapping Subproblem:->if our subproblem repeat then a problem is said to have overlapping subproblem.
.Ways to handle Overlapping subproblem.
1.Memoization(Top-Down)->
->A lookup table is maintained and checked before computation of any state. Recursion is involved.

2.Tabulation(Bottom-Down)->Solution is Built From base.it is an itertive process.
*/

/* Key points->Minimization and maximization problems are Genereally  solved  with DP where we are want 
exhaustive solution.
(sometimes with bnary search on asnwer.)
*/

//"Find the number of ways is also a very popular way to solve DP problem."

//Where we can form recurance relation or given in question can be solved using DP.(sometimes with matrix exponention)

//Problem 1.
//Nth fibanchi number->fib[n]=fib[n-1]+fib[n-2] since we can write a recurance relation so this property is followe optimal substrcuture.
//in introduction we can aslo saw its overlapping subproblem property.

//program with dp for fibanchi.
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
const int N=1e3+2, MOD=1e9+7;

int fib(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    return fib(n-1)+fib(n-2);
}
signed main()
{
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}
//this program is not work for number more than 1000.
//for number of maximum 
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
const int N=1e5+2, MOD=1e9+7;
//look up table
int dp[N];


int fib(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    if(dp[n]!=-1)
    return dp[n];

    dp[n]= fib(n-1)+fib(n-2);

    return dp[n];
}
signed main()
{
    int n;
    cin>>n;
    //rep is for loop for i=0 to N which is macrov
    rep(i,0,N){

         dp[i]=-1;
    }
    cout<<fib(n);
    return 0;
}
//using tabulation method.

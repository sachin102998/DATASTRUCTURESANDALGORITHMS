#include <iostream>
using namespace std;
//program to make sum of n numbers

int main() {
int n;
cin>>n;
int sum=0;
for(int i=1; i<=n; i++){
    sum=sum+i;
}
cout<<"sum="<<sum;

    return 0;
}
//while loop
#include <iostream>
using namespace std;
//program to make print a non negative number using while loop

int main() {
int n;
cin>>n;
while(n>0){
    cout<<n<<endl;
    cin>>n;
}
    return 0;
}

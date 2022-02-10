//pointer are nothing but type of a vriable that stores address of a varibale.
#include<iostream>
using namespace std;
 int main()
 {
     int a=10;
     int *aptr;//pointer declare
     aptr=&a;

     cout<<&a<<endl;//address of a
     cout<<aptr<<endl;//address of a
     //dereferencing of pointer
     cout<<*aptr<<endl;//value of a 10
     //if we want change value of a without change in a
     *aptr=40;
     cout<<a<<endl;//it will be now 40
     return 0;
 }
//pointer arithmetic = ++,--,+,- they are the four operation that we can perform in pointer.
#include<iostream>
using namespace std;
 int main()
 {
     int a=10;
     int *aptr;//pointer declare
     aptr=&a;

     cout<<&a<<endl;//address of a
     cout<<aptr<<endl;//address of a
     //dereferencing of pointer
     aptr++;
     cout<<aptr<<endl;//the address will increase +4 because int takes four bytes
     aptr--;
     cout<<aptr<<endl;//the address will decrease -4 because int takes four bytes
 
     cout<<*aptr<<endl;//value of a 10
     //if we want change value of a without change in a
     *aptr=40;
     cout<<a<<endl;//it will be now 40
     return 0;
 }
 //pointer and array
 #include<iostream>
using namespace std;
 int main()
 {
     int arr[] ={20,30,50,40};
     int *ptr;
     ptr=arr;//the pointer will only access the 0th element of array
     cout<<*ptr<<endl;
     //to print whole array
     for(int i=0; i<4; i++){
         cout<<*ptr<<endl;
         *ptr++;
     }
     return 0;
 }
 //pointer to pointer
 #include<iostream>
using namespace std;
 int main()
 {
     int a=10;
     int *aptr;//pointer declare
     aptr=&a;

     cout<<&a<<endl;//address of a
     cout<<aptr<<endl;//address of a
     //dereferencing of pointer
     cout<<*aptr<<endl;//value of a 10
     //if we want change value of a without change in a
     *aptr=40;
     cout<<a<<endl;//it will be now 40
     int **q=&aptr;
     cout<<q<<endl;//address of aptr
     cout<<*q<<endl; //address of aptr
     cout<<**q<<endl; //40

     return 0;
 }
 //pointer to functions
 #include<iostream>
 using namespace std;
 void swap(int *a ,int *b)//values of a and b gone and pointers takes input
 {
     int temp=*a;
     *a=*b;
     *b=temp;
 } 
  int main()
  {
      int a=10;
      int b=40;
      int *aptr=&a;
      int *bptr=&b;
      swap(*aptr,*bptr);
      cout<<a<<""<<b<<endl;//40 and 10 respectively

  }
  //another method can be
   #include<iostream>
 using namespace std;
 void swap(int *a ,int *b)//values of a and b gone and pointers takes input
 {
     int temp=*a;
     *a=*b;
     *b=temp;
 } 
  int main()
  {
      int a=10;
      int b=40;
      swap(&a,&b);
      cout<<a<<""<<b<<endl;//40 and 10 respectively

  }


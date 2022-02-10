//bit manupulations.->
//there are various kinds of bitwise operators.
//& AND OPERATOR = ITS MUTIPLCATION AND if both true then its true.
//OR OPERATOR = ADD AND BOTH FALSE THEN FALSE OTHERWISE TRUE.
//^ XOR operator = if both value same then 0 and different then it will gives 1.
//<< left shift operator = if i write 4<<1 then 0100 will become 1000.
//>> Right shift operator = if we write 4>>1 right shift as 0100 then it will become 0010.

//Cocepts for bit wise manipulations.
//GET BITS
/* firstly we have given a number n then we will have to find the poisiton of bit inside number.
so we will make a number at what postion it want .
n&postion number 
check if (n&(1<<postion) !=0)
if 0 then wrong if not then right.
*/
#include<iostream>
using namespace std;
int getbit(int n,int pos){
    return(n&(1<<pos)!=0);
}
int main()

{    
    cout<<getbit(5,2);//1
    return 0;
}
//amother program to get bit
#include<iostream>
using namespace std;
int getbit(int n,int pos){
    return(n&(1<<pos)!=0);
}
int main()

{    
    cout<<getbit(6,4);//0
    return 0;
}
//SET BIT
//set bit means the positons which is given to use we have to make it as 1;
// example  n= 0101 the we have to set bit at the postions of i =1.
// to make it set bit we will use firstly make a numbers same as previous number
 // i<<1=0010 
 // perform or operator with number and postion maked number
 // n|0010

#include<iostream>
using namespace std;
int getbit(int n,int pos){
    return(n&(1<<pos)!=0);
}
int setbit(int n ,int pos){
    return(n|(1<<pos));
}
int main()

{    
    cout<<getbit(6,4);//0
    cout<<setbit(5,1);//7
    return 0;
}
//CLEAR BIT = it means the postion is given we will have to clear it make it zero.
//clear bit means the positons which is given to use we have to make it as 1;
// example  n= 0101 the we have to set bit at the postions of i =2.
// to make it set bit we will use firstly make a numbers same as previous number
 // i<<1=0010
 //after that ones complement 0100 = 1011
 //after that perform & operator with number and positon
 // n &~(1<<pos)
 #include<iostream>
using namespace std;
int getbit(int n,int pos){
    return(n&(1<<pos)!=0);
}
int setbit(int n ,int pos){
    return(n|(1<<pos));
}
int clearbit(int n,int pos){
    int mask =~(1<<pos);
    return n&mask;
}
int main()

{    
    cout<<getbit(6,4)<<endl;//0
    cout<<setbit(5,1)<<endl;//7
      cout<<clearbit(5,2)<<endl;//1
    return 0;
}

//UPDATE BIT = in this operation we have been given that from which number to which bit we have to transform.
/* ex  n= 0101
  suppose we have to update bit at a a positons i=1 to 1.
  firstly we will clear the psotion where we want to update the value.
  UPDATE BIT = FIRSTLY PERFORM CLEAR BIT AND THEN PERFORM SET BIT
*/
  #include<iostream>
using namespace std;
int getbit(int n,int pos){
    return(n&(1<<pos)!=0);
}
int setbit(int n ,int pos){
    return(n|(1<<pos));
}
int clearbit(int n,int pos){
    int mask =~(1<<pos);
    return n&mask;
}
int updatebit(int n,int pos,int value){
    int ma=~(1<<pos);
    n = n&ma;
    return (n|(value<<pos));//value written value which we want is needed.
}
int main()

{    
    cout<<getbit(6,4)<<endl;//0
    cout<<setbit(5,1)<<endl;//7
      cout<<clearbit(5,2)<<endl;//1
      cout<<updatebit(5,1,1)<<endl;//7
    return 0;
}
 

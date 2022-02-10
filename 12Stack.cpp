//Stack = stores a list of items in which an item can be added to or removed from the list 
/* only at the one END.
Stack is based on LIFO = LAST IN FIRST OUT mechanism.

          |A|
          |B|
          |C|
          |D|

.There are various kind of operations inside the stack 
.PUSH(x)= to insert any element in the stack.
.POP()= to remove top element from the stack.
.TOP()= return the current topmost value in the stack.it reacts as pointer also.
.empty()=returns that our stack is empty or not.if empty then true and not empty then return flase.
this all are work in constant runtime so O(n).

*/
//stack using array implementation.

//           |2|3|4|5|8|9|10|
//here top pointer point -1 index.
//if top=-1 then the our stack is empty otherwise our stack is not empty.

//program to making stack using array.
#include<iostream>
using namespace std;
//class stack making
 #define n 100//define the size of  stack
//stack making
class stack{
    //making private members
    int * arr;
    int top;
    public:
    stack(){
        arr= new int[n];
        top=-1;
    }

    //now perform operations in stack.
    //push operation
    void push(int x){
        if(top==n-1)//check whether the stack top element is not at the last of array
        {
            cout<<"Stack is overflow"<<endl;
            return;
        }
        top++;
        arr[top]=x;//inserting values in stack.
    }
    //pop operation
    void pop(){
        if(top==-1){
            cout<<"NO element is present for pop"<<endl;
            return;
        }
        top--;


    }
    //top() operation
    int Top(){
        if(top==-1){
            cout<<"no element in stack"<<endl;
            return -1;
        }
        return arr[top];
    }
    //empty operation
    bool empty(){
        return top==-1;
    }

};
int main(){

   stack st;
   st.push(23);
   st.push(42);
   st.push(10);
   st.push(18);
   cout<<st.Top()<<endl;//18
   
   st.pop();
   cout<<st.Top()<<endl;//10
   st.pop();
   cout<<st.top()<<endl;//42
   st.pop();
   cout<<st.top()<<endl;//23
   cout<<st.empty()<<endl;//0
   st.pop();
   cout<<st.empty()<<endl;//1
   return 0;

}
//reverese a sentence using a stack.
/* Sentence = Hey.How are you Doing?
              Doing?you are how hey?
           */
#include<iostream>
#include<stack>//stack library used for perform stack operations

using namespace std;  
void revereseSentence(string s){
 stack<string> st;//stack type declaration
    for(int i=0;i<s.length(); i++){
        string word="";
        while(s[i]!=' ' && i<s.length()){
            word+=s[i];
            i++;
        }
        st.push(word);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
};    
int main(){

    string s= "Hey.How are you doing?";
    revereseSentence(s);
    return 0;
}  

//in stack we have using various kinds of stack like 
/* infix expression
 prefix expression
 postfix expression
 */

 /* Infix expression
 symbol = <operator><operand><operator>
        
        2+3;
        in this kind of application we have use BODMAS application.

*/

/* the infix expression is not known by our computer so we use prefix expression

  prefix experssion= polish notation

  symbol= <operator><operand><operand>

      4*2+3=+* 423;
      5-6/3=-5/63

  */
/* Postfix operation = reverse polish notation.
  symbol=<operand><operand><operato>

    4*2+3=4 2*3+;
    5-6/3=563/-;
    */

 //prefix expression evaluation.

 //  - + 7*4 5 + 2 0

 /* operand1  2  4  7  27

    operand2  0  5  20  2  
    evaluated value = 25

    */
#include<iostream>
#include<stack>
#include<math.h>//library for exponential and maths problems
using namespace std;

int prefixEvaluation(string s){
    stack<int> st;
    for(int i=s.length()-1; i>=0; i--){
        //expression to check prefix.
        if(s[i]>='0' &&  s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            int op1=st.top();
            st.pop();
            int op2=st.top();
            st.pop();

            switch(s[i]){
                case '+':
                st.push(op1+op2);
                break;
                case '-':
                st.push(op1-op2);
                break;
                case '*':
                st.push(op1*op2);
                break;
                case '/':
                st.push(op1/op2);
                break;
                case '^':
                st.push(op1^op2);
                break;
            }
        }
    }
    return st.top();
}
int main()
{

      cout<<prefixEvaluation("-+7*45+20")<<endl;//25
      return 0;

}//the time complexity is same as prefix which is O{l} where length of string.

//postfix Evaluation 

/* ex= 4 6 + 2/5 * 7 +
*/
#include<iostream>
#include<stack>
#include<math.h>//library for exponential and maths problems
using namespace std;

int postfixEvaluation(string s){
    stack<int> st;
    for(int i=0; i<s.length(); i++){
        //expression to check postfix.
        if(s[i]>='0' &&  s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            int op2=st.top();
            st.pop();
            int op1=st.top();
            st.pop();

            switch(s[i]){
                case '+':
                st.push(op1+op2);
                break;
                case '-':
                st.push(op1-op2);
                break;
                case '*':
                st.push(op1*op2);
                break;
                case '/':
                st.push(op1/op2);
                break;
                case '^':
                st.push(pow(op1,op2));
                break;

            }
        }
    }
    return st.top();
}
int main()
{

      cout<<postfixEvaluation("46+2/5*7+")<<endl;//32
      return 0;

}//the time complexity is same as prefix which is O{l} where length of string.

//infix to postfix question.
//infix to prefix question.
//balanced paranthesis question.





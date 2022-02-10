//QUEUE = stores list of items which an item can be inserted at one end and removed from
//the other end only.
/* in this data structure we use FIFO = FIRST IN FIRST OUT.
there are various kinds of operations are performed inside of the queue.

.enqueue(x)=simliar to push .insert the element at the back.
.dequeue()=similar to pop.remove from front.
.peek()=same as top.tell us what is the value present is our front.
.empty()=check queue is empty or not.

we will take two pointers 
 here 
  front ,back

  Z|Y|L|K|O|
  | |
  | |
  |back
  |
 front 

 */
 //array implementation of queues.
 //startingly front and back should be at -1.
 //enqueue = back++, front stable.
 //deque = back stable ,front++.
 //when back=front then there is one element present in queue.
 //if front>back then the queue is empty.
 //program to make operations in queue.
 #include<iostream>
 #define n 20
 using namespace std;
 class queue(){
     int* arr;
     int front;
     int back;
     queue(){
         arr=new int[n];
         front=-1;
         back=-1;
     }
     void push(int x){
         if(back==n-1){
             cout<<"queue is overflow"<<endl;
             return;
         } 
         back++;
         arr[back]=x;//insert value at back
     }
 }
 int main()
 {

 }
 //linked list implementation using queues.
 //when front = NULL then the queue is empty
 #include<iostream>
 using namespace std;
 class node{
     public:
     int data;
     node* next;
     node(int val){
         data= val;
         next=NULL;
     }

 };
 class queue{
     node* front;
     node* back;
     public:
     queue(){
         front=NULL;
         back=NULL;
     }
    void push(int x){
         node* n= new node(x);
         //queue implemetation
         if(front==NULL){
             back=n;
             front=n;
             return;
         }
         back->next=n;
         back=n;
     }
     void pop(){
         if(front==NULL){
             cout<<"queue underflow"<<endl;
             return;
         }
         //another method
         node* todelete=front;
         front=front->next;

         delete todelete;

     }
     int peek(){
         if(front==NULL){
             cout<<"No element in queue"<<endl;

         }
         return front->data;
     }
     bool empty(){
         if(front==NULL){\
             return true;
         }
         return false;
     }
 };
 int main(){
     queue q;
     q.push(30);
     q.push(40);
     q.push(90);
     q.push(12);
     q.push(13);
     q.push(77);
     cout<<q.peek()<<endl;//30
     q.pop();
     q.pop();
     q.pop();
     cout<<q.peek()<<endl;//12
     cout<<q.empty()<<endl;//0
     q.pop();
     q.pop();
     q.pop();
     cout<<q.empty()<<endl;//1
     return 0;
 }
 //queues using stack
 //stack using quues.
 //largest rectangle histogram .
 //slinding window maximum problem.
 //tramping water problem.
 //reedunatant paranthesis.problem
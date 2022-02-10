
//SACHIN KUMAR GIRI 
//linkedlist = linear data structure which store our list of values.
//difference between array and linked list = there are single block of memory in array
//there are multiple block of memories in linked list.
//properties of linked list.
/* size of memory is not contigious
insertion and deletion is not easiar at any point 
*/
/* NODE ->  DATA|NEXT
        int,float|pointer which stores address of next NODE data.

        the first node is called and the last node is specifes with null character in NEXT value.
        so we will find the starting and ending point in this manner.

 */       
 /* IN linkedlist NODE is not built in its user defined so inside the code we have to define the NODE.

*/
//program to print a linked list.
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;//because next value is pointer
    //make a constructor to insert values.
      node(int val){
          data=val;
          next=NULL;
      }
};
      //to input another node at the tail of the linked list
      //for traversing we have the head pointer.
      //we will firstly start from head and traves at the last the codntion behind that 
      //the condtion head==!null

      //to insert a value at tail we will take head by referene not by value and make a function to insert at tail

void insertATTail(node* &head,int val){
   
          //new node making which will go at the last of the node
          node *n = new node(val);
          
          //case when our head is null means there is no node present in inside of my list.

          if(head==NULL){
              head=n;
              return;
          }

          //to traverse inside the linked list from start to end

          //make a pointer which will traverse from start to end
          node* temp=head;
          //condtion that when we will stop to travese
          while(temp->next!=NULL){
              temp=temp->next;
          }
          //after traversing we have reached at out last node.
          //at this point we have to add our new node which we have maked.
          temp->next=n;

};

      //to print this linked list we will again make a function by value not by reference.
    
                //by value not by reference
void Display(node* head){
          node* temp=head;
          while(temp!=NULL){
              cout<<temp->data<<"->";
              temp=temp->next;
          }
          cout<<"NULL"<<endl;
};

int main()
{

     node* head = NULL;//means linked list is empty 
     insertATTail(head,2);
     insertATTail(head,5);
     
     insertATTail(head,9);
     Display(head);
     return 0;
}

//program to make and insert at head linkedlist/
#include<iostream>
using namespace std;
class node{
	public:
    int data;
    node* next =NULL;
    //constructor make to take input
    node(int val){
        data=val;
        node*next=NULL;
    }
};

void insertAtHead(node* &head ,int val){

    node* n= new node(val);
    n->next=head;//new node which point the head or first node of the linked list.
    head=n;
};

 void insertATTail(node* &head,int val){
    //make a new node
    node* n= new node(val);
    //check the linkedlist is not null
    if(head==NULL){
        head=n;
        return;
    }
    //to traverse from start to end of the linked list.
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;


};
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;;
};

int main()
{
    node* head=NULL;
    insertATTail(head,4);
    
    insertATTail(head,6);
    
    insertATTail(head,9);
    
    insertATTail(head,15);

    display(head);

    insertAtHead(head,0);
    cout<<"insert value 0 at head"<<endl;
    display(head);

    return 0;



}
//searching in linkedlist
#include<iostream>
using namespace std;
class node{
	public:
    int data;
    node* next =NULL;
    //constructor make to take input
    node(int val){
        data=val;
        node*next=NULL;
    }
};

void insertAtHead(node* &head ,int val){

    node* n= new node(val);
    n->next=head;//new node which point the head or first node of the linked list.
    head=n;
};

 void insertATTail(node* &head,int val){
    //make a new node
    node* n= new node(val);
    //check the linkedlist is not null
    if(head==NULL){
        head=n;
        return;
    }
    //to traverse from start to end of the linked list.
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;


};
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;;
};
//to search inside the linkedlist.
bool search(node* head,int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
};

int main()
{
    node* head=NULL;
    insertATTail(head,4);
    
    insertATTail(head,6);
    
    insertATTail(head,9);
    
    insertATTail(head,15);

    display(head);

    insertAtHead(head,0);
    cout<<"insert value 4 at head"<<endl;
    display(head);

    cout<<"search inside the linked list"<<endl;
	cout<<"search 9 inside the linked list"<<endl;
    cout<<search(head,9)<<endl;
	
    cout<<"search 10 inside the linked list"<<endl;
    cout<<search(head,10)<<endl;
    

    return 0;



}

//deletion in linked list.
#include<iostream>
using namespace std;
class node{
	public:
    int data;
    node* next=NULL;
    //cosntructor makeing
    node(int val){
        data=val;
       node*next=NULL;
    }
};
 void insertAtHead(node* &head,int val){

    node*n=new node(val);
    n->next=head;
    head=n;
}

void insertATTail(node* &head,int val){
    //make a new node
    node*n= new node(val);//insert the value in new node
    if(head==NULL){
        head=n;
        return;
    }
    //to travers from first to last node
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
};

void display(node* head){
    node*temp=head;
    while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
    }
    cout<<"NULL"<<endl;

};
bool search(node* head,int key){
    node*temp=head;
    
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;

    }
    return false;
};

//to delete inside the node
void deletion(node* &head,int val){
    node*temp=head;
    //condition to find nth value at the node
    while(temp->next->data!=val){
        temp=temp->next;//means jb tak temp ka next ka data val k equal nhi ho jata tb tak node ko aage badhate chalao

    }
    node* todelete=temp->next;//temp-next is the node which will we have to delete.
    temp->next=temp->next->next;

    //now delete todelete node
    delete todelete;
};
 int main()
 {

    node* head=NULL;
    insertATTail(head,4);
    
    insertATTail(head,6);
    
    insertATTail(head,9);
    
    insertATTail(head,15);

    display(head);

    insertAtHead(head,0);
    cout<<"insert value 4 at head"<<endl;
    display(head);

    cout<<"search inside the linked list"<<endl;
	cout<<"search 9 inside the linked list"<<endl;
    cout<<search(head,9)<<endl;
	
    cout<<"search 10 inside the linked list"<<endl;
    cout<<search(head,10)<<endl;
    //deleetion head
    cout<<"delete 6 from node"<<endl;
    deletion(head,6);
    display(head);

    return 0;
 }
 //to delete first node program
 #include<iostream>
using namespace std;
class node{
	public:
    int data;
    node* next=NULL;
    //cosntructor makeing
    node(int val){
        data=val;
       node*next=NULL;
    }
};
 void insertAtHead(node* &head,int val){

    node*n=new node(val);
    n->next=head;
    head=n;
}

void insertATTail(node* &head,int val){
    //make a new node
    node*n= new node(val);//insert the value in new node
    if(head==NULL){
        head=n;
        return;
    }
    //to travers from first to last node
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
};

void display(node* head){
    node*temp=head;
    while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
    }
    cout<<"NULL"<<endl;

};
bool search(node* head,int key){
    node*temp=head;
    
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;

    }
    return false;
};
//function to delete first node

void todeletefirst(node* &head){
    node*todelete=head;
    head=head->next;

    delete todelete;

};
//to delete inside the node
void deletion(node* &head,int val){

    //if the linked list is null
    if(head==NULL){
        return;
    }

    //in the condtion of there is only one node inside the linked linkedlist
    if(head->next=NULL){
        todeletefirst(head);
        return;
    }
    node*temp=head;
    //condition to find nth value at the node
    while(temp->next->data!=val){
        temp=temp->next;//means jb tak temp ka next ka data val k equal nhi ho jata tb tak node ko aage badhate chalao

    }
    node* todelete=temp->next;//temp-next is the node which will we have to delete.
    temp->next=temp->next->next;

    //now delete todelete node
    delete todelete;
};
 int main()
 {

    node* head=NULL;
    insertATTail(head,4);
    
    insertATTail(head,6);
    
    insertATTail(head,9);
    
    insertATTail(head,15);

    display(head);

    insertAtHead(head,0);
    cout<<"insert value 4 at head"<<endl;
    display(head);

    cout<<"search inside the linked list"<<endl;
	cout<<"search 9 inside the linked list"<<endl;
    cout<<search(head,9)<<endl;
	
    cout<<"search 10 inside the linked list"<<endl;
    cout<<search(head,10)<<endl;
    //deleetion head
    cout<<"delete 6 from node"<<endl;
    deletion(head,6);
    display(head);
    cout<<"delete value at head"<<endl;
    todeletefirst(head);
    display(head);

    return 0;
 }

 //program to reverse a linked list.
 //first method is iterative method.

 /* we will take three pointers.
 prevoius= NULL
 current=head
 next=head->next
 */
 /* we will change current->next value to prevoius.
 */
 #include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;//because next value is pointer
    //make a constructor to insert values.
      node(int val){
          data=val;
          next=NULL;
      }
};
      //to input another node at the tail of the linked list
      //for traversing we have the head pointer.
      //we will firstly start from head and traves at the last the codntion behind that 
      //the condtion head==!null

      //to insert a value at tail we will take head by referene not by value and make a function to insert at tail

void insertATTail(node* &head,int val){
   
          //new node making which will go at the last of the node
          node *n = new node(val);
          
          //case when our head is null means there is no node present in inside of my list.

          if(head==NULL){
              head=n;
              return;
          }

          //to traverse inside the linked list from start to end

          //make a pointer which will traverse from start to end
          node* temp=head;
          //condtion that when we will stop to travese
          while(temp->next!=NULL){
              temp=temp->next;
          }
          //after traversing we have reached at out last node.
          //at this point we have to add our new node which we have maked.
          temp->next=n;

};

      //to print this linked list we will again make a function by value not by reference.
    
                //by value not by reference
void Display(node* head){
          node* temp=head;
          while(temp!=NULL){
              cout<<temp->data<<"->";
              temp=temp->next;
          }
          cout<<"NULL"<<endl;
};

int main()
{

     node* head = NULL;//means linked list is empty 
     insertATTail(head,2);
     insertATTail(head,5);
     
     insertATTail(head,9);
     Display(head);
     return 0;
}

//program to make and insert at head linkedlist/
#include<iostream>
using namespace std;
class node{
	public:
    int data;
    node* next =NULL;
    //constructor make to take input
    node(int val){
        data=val;
        node*next=NULL;
    }
};

void insertAtHead(node* &head ,int val){

    node* n= new node(val);
    n->next=head;//new node which point the head or first node of the linked list.
    head=n;
};

 void insertATTail(node* &head,int val){
    //make a new node
    node* n= new node(val);
    //check the linkedlist is not null
    if(head==NULL){
        head=n;
        return;
    }
    //to traverse from start to end of the linked list.
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;


};
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;;
};
//function to reverse the linkedlist
node* reverse(node* &head){
    node* prevoiusptr=NULL;
     node* currentptr=head;
     node* nextptr;

     while(currentptr!=NULL){
         nextptr=current-next;
         currentptr->next=prevoius;

         prevoiusptr=currentptr;
         currentptr=nextptr;

     }
     return prevoiusptr;//because this is our new head.
};

int main()
{
    node* head=NULL;
    insertATTail(head,4);
    
    insertATTail(head,6);
    
    insertATTail(head,9);
    
    insertATTail(head,15);

    display(head);

    insertAtHead(head,0);
    cout<<"insert value 0 at head"<<endl;
    display(head);
    cout<<"reverse the value"<<endl;
    node* newhead=reverse(head);
    display(newhead);

    return 0;



}
//recursive way to reverse a linked list.
/* fro this method we will call recursive function for head->next;
we will stop head and after all the values from head we will recursive call of the linkedlist.
and the newhead which will give to me is my recursivehead.

  1->2->3->4
  we will have to point 2 to 1.
  so we will do head->next->next = head;
             head->next=NULL;
             we will return newhead there.
 */
 //progam to recursively reverse the linked list.
#include<iostream>
using namespace std;
class node{
	public:
    int data;
    node* next =NULL;
    //constructor make to take input
    node(int val){
        data=val;
        node*next=NULL;
    }
};

void insertAtHead(node* &head ,int val){

    node* n= new node(val);
    n->next=head;//new node which point the head or first node of the linked list.
    head=n;
};

 void insertATTail(node* &head,int val){
    //make a new node
    node* n= new node(val);
    //check the linkedlist is not null
    if(head==NULL){
        head=n;
        return;
    }
    //to traverse from start to end of the linked list.
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;


};
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;;
};
//function to reverse the linkedlist
node* reverse(node* &head){
    node* prevoiusptr=NULL;
     node* currentptr=head;
     node* nextptr;

     while(currentptr!=NULL){
         nextptr=currentptr->next;
         currentptr->next=prevoiusptr;

         prevoiusptr=currentptr;
         currentptr=nextptr;

     }
     return prevoiusptr;//because this is our new head.
};

node* recursive(node* &head){

//this is the base case  which means we have only one node
         if(head==NULL || head->next==NULL){
             return head;
         }

//this is our recusive case 
node* newnewhead=recursive(head->next);//because we have to reverse the linked list
        head->next->next=head;
        head->next=NULL;
        return newnewhead;

};

int main()
{
    node* head=NULL;
    insertATTail(head,4);
    
    insertATTail(head,6);
    
    insertATTail(head,9);
    
    insertATTail(head,15);

    display(head);

    insertAtHead(head,0);
    cout<<"insert value 0 at head"<<endl;
    display(head);
    cout<<"reverse the value"<<endl;
    node* newhead=reverse(head);
    display(newhead);
    cout<<"again reverse the linked list"<<endl;
    node* newnewhead=recursive(head);
    display(newnewhead);

    return 0;



}             

//reverse k nodes in the linked list.
//Detection and removal of cycle in linked list.=question learn in future.

//doubly linked list.
/* Structure = 
   Node = Previous|Data|Next

prev  next next next next next
<----1--->2--->3--->4--->5--->NULL
     | prev prev prev prev
     | 
     head
 */
 //program to print doubly linked list
#include<iostream>
 using namespace std;
 class node{
     public:
     int data;
     node* next;
     node* prev;
     //constrcutor making
     node(int val){
         data= val;
         next=NULL;
         prev=NULL;
     }
 };
  void insertAtHead(node* &head,int val){
      node* n = new node(val);
          n->next=head;
          if(head!=NULL){
          head->prev=n;
          }
          head=n;

};
void insertATTail(node* &head,int val){
     node* n= new node(val);
     //if linkedlist is empty
     if(head==NULL){
        insertAtHead(head,val);
        return;
     }
     node* temp=head;
     while(temp->next!=NULL){
         temp=temp->next;
         
    }
     temp->next=n;
     //here doubly linked list starts.
     n->prev=temp;
     
     
 };

 void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;;
};
 int main(){
     node* head=NULL;
     insertATTail(head,8);
     insertATTail(head,12);
     insertATTail(head,24);
	 display(head);
	 insertAtHead(head,25);
	 display(head);
     return 0;
 }

 //deletion in doubly linkd list.
 /* to delete inside doubly linked lsit 
 we will do temp->prev=temp->next;
           temp->next=temp->prev;
            delete temp;
            this will use in deletion inside the doubly linked list.
  */          

//program to print doubly linked list
//program to delete insside the doubly linked list.
#include<iostream>
 using namespace std;
 class node{
     public:
     int data;
     node* next;
     node* prev;
     //constrcutor making
     node(int val){
         data= val;
         next=NULL;
         prev=NULL;
     }
 };
  void insertAtHead(node* &head,int val){
      node* n = new node(val);
          n->next=head;
          if(head!=NULL){
          head->prev=n;
          }
          head=n;

};
void insertATTail(node* &head,int val){
     node* n= new node(val);
     //if linkedlist is empty
     if(head==NULL){
        insertAtHead(head,val);
        return;
     }
     node* temp=head;
     while(temp->next!=head){
         temp=temp->next;
         
    }
     temp->next=n;
     //here doubly linked list starts.
     n->prev=temp;
     
     
 };
 void deleteathead(node* &head){
	 node* todelete=head;
	 head=head->next;
	 head->prev=NULL;
	 
	 delete todelete;

 };

//fucntion to delete inside doubly linkedl list
 void todelete(node* &head, int pos){

	 //if we have first node which we will ahve to delete
	 if(pos==1){
		 deleteathead(head);
		 return;
	 }
     node * temp=head;
	 int count=1;
	 while(temp!=NULL && count!=pos){
		 temp=temp->next;
		 count++;
     }

	 temp->prev->next=temp->next;
	 //if we have last node then we have to make a condtion
	 if(temp->next!=NULL){
     temp->next->prev= temp->prev;
	 }
     delete temp;
	 

 };

 void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;;
};
 int main(){
     node* head=NULL;
     insertATTail(head,8);
     insertATTail(head,12);
     insertATTail(head,24);
	 display(head);
	 insertAtHead(head,25);
	 display(head);
     cout<<"delete 12 from doubly linked list"<<endl;
     todelete(head,12);
     display(head);
     return 0;
 }
 
 //append last k nodes to the linked list to start of the linked list
 //find intersection point of 2 linked list.
 //merge two sorted linkd list.



 //circular linked list.=in this type of linked list our null value of linked list will be point head pointer of linked list.
 /*
 to insert node at end of the linked list. 
 we will traverse at the last node as temp
 temp-next=newnode
 newnode->next=head;
 */
//program to print and insert a node in circular linked list
 #include<iostream>
 using namespace std;
 class node{
     public:
     int data;
     node* next;
     node* prev;
     //constrcutor making
     node(int val){
         data= val;
         next=NULL;
         prev=NULL;
     }
 };
  void insertAtHead(node* &head,int val){
      node* n = new node(val);
      if(head==NULL){
          n->next=n;
          head=n;
          return;
      }
	  node* temp=head;
        while(temp->next!=head){
         temp=temp->next;
         
    }
     temp->next=n;
     n->next=head;
     head=n;

};
void insertATTail(node* &head,int val){
     node* n= new node(val);
     //if linkedlist is empty
     if(head==NULL){
        insertAtHead(head,val);
        return;
     }
     node* temp=head;
     while(temp->next!=head){
         temp=temp->next;
         
    }
     temp->next=n;
     //here doubly linked list starts.
     n->next=head;
     
     
 };
//fucntion to delete inside doubly linkedl list
 void display(node* head){
    node* temp=head;
   
   do{
       cout<<temp->data<<"->";
       temp=temp->next;
   } while(temp!=head);
   cout<<endl;
   cout<<NULL;
};
 int main(){
     node* head=NULL;
     insertATTail(head,8);
     insertATTail(head,12);
     insertATTail(head,24);
	 display(head);
	 insertAtHead(head,20);
	 display(head);
     return 0;
 }
//to delete inside the circular linked list
//program to print and insert a node in circular linked list
 #include<iostream>
 using namespace std;
 class node{
     public:
     int data;
     node* next;
     node* prev;
     //constrcutor making
     node(int val){
         data= val;
         next=NULL;
         prev=NULL;
     }
 };
  void insertAtHead(node* &head,int val){
      node* n = new node(val);
      if(head==NULL){
          n->next=n;
          head=n;
          return;
      }
	  node* temp=head;
        while(temp->next!=head){
         temp=temp->next;
         
    }
     temp->next=n;
     n->next=head;
     head=n;

};
void insertATTail(node* &head,int val){
     node* n= new node(val);
     //if linkedlist is empty
     if(head==NULL){
        insertAtHead(head,val);
        return;
     }
     node* temp=head;
     while(temp->next!=head){
         temp=temp->next;
         
    }
     temp->next=n;
     //here doubly linked list starts.
     n->next=head;
     
     
 };
 void todeleteathead(node* &head){
     node* temp=head;
     while(temp->next!=head){
         temp=temp->next;
     }
     node* todelete=head;
     temp->next=head->next;
     head=head->next;

     delete todelete;
 }
 void deleetion(node* &head,int pos){
     if(pos==1){

     }
     node* temp=head;
      int count=1;
      while(count!=pos-1){
          temp=temp->next;
          count++;
      }
      node* todelete=temp->next;
      temp->next=temp->next->next;

      delete todelete;
 };

//fucntion to delete inside singly linkedl list

 void display(node* head){
    node* temp=head;
   
   do{
       cout<<temp->data<<"";
       temp=temp->next;
   } while(temp!=head);
   cout<<endl;
};
 int main(){
     node* head=NULL;
     insertATTail(head,8);
     insertATTail(head,12);
     insertATTail(head,24);
	 display(head);
	 insertAtHead(head,25);
	 display(head);
     cout<<"delete 12 from circular linked list"<<endl;
     deleetion(head,12);
     display(head);
     return 0;
 }

 //question = Put even position nodes after odd postions nodes

 //time complexity using mastertheorm
 //recurance relation= recurance relation is relation that recursive defines a sequence
 //lets see with example = 

 /* fibonacci series=
 f(n)=f(n-1)+f(n-2)

 //master theorm = gives the time complexity for the recurrance relation

 T(n)=aT(n/b)+f(n)

 note = if our recurance relation is in this type of form
 */

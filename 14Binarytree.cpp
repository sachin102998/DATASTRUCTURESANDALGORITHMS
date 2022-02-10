//binary tree=data stores hierachically.
/* Tree visualtion is completly opposite to the real life tree.
binary tree= every node has only and maximumly two nodes.
Propeties = 1. Maximum nodes at level L=2L

        O            L=O NODES=1
       / \
      /   \
     O     O         L=1, NODES=2
    / \   / \
   /   \ /   \
  O    O O   O       L=2 ,NODES=4

  Where L= Level of Nodes.
2.MAXIMUM NODES IN A TREE OF HEIGHT H IS 2h-1.


        O            L=O NODES=1
       / \
      /   \
     O     O         L=1, NODES=2
    / \   / \
   /   \ /   \
  O    O O   O
  there ARE 3 LEVEL IN THIS TREE SO MAXIMUM NO OF NODES = 7.

3.for N nodes ,minimum possible height or minimum numbers of levels are log2(n+1).

        O            L=O NODES=1
       / \
      /   \
     O     O         L=1, NODES=2
    / \   / \
   /   \ /   \
  O    O O   O 
 4.A binary tree with L leaves has atleast log2(N+1)+1 numbers of levels.
 
        O            L=O NODES=1
       / \
      /   \
     O     O         L=1, NODES=2
    / \   / \
   /   \ /   \
  O    O O   O 

  */
 //program to make a binary tree like;
 /*
 
        1           
       / \
      /   \
     2     3         
    / \   / \
   /   \ /   \
  4    5 6    7 
  */
#include<iostream>
using namespace std;
//structure making
struct node{
    public:
    int data;
    node* left;
    node* right;
    //constructor making.
    node(int val){
        data= val;
        left=NULL:
        right=NULL;
    }
};
int main(){
    struct node* root = new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right= new node(7);
    return 0;
}  
//Binary tree traversal 
/* There are three ways to traverse a tree.
1.preorder Traversal = 
     
        1           
       / \
      /   \
     2     3         
    / \   / \
   /   \ /   \
  4    5 6    7  

  1.Root->2.Left Subtree->3.Right subtree.

  Preoder= 1,2,4,5,3,6,7.
*/
/*
2.INORDER TRAVERSAL


        1           
       / \
      /   \
     2     3         
    / \   / \
   /   \ /   \
  4    5 6    7 
1.dont write value of root
firstly travel left subtree and after that root and after that right subtree.
 Left subtree->root->right subtree.
 INORDER TRAVERSAL =4,2,5,1,6,3,7.
 */
 /* POSTRODER TRAVERSAL
  
        1           
       / \
      /   \
     2     3         
    / \   / \
   /   \ /   \
  4    5 6    7

  1.dont write value of root first 
  .Travel left subtree then right subtree then write root.
Left subtree->right subtree->root.
POSTORDER=4,5,2,6,7,3,1.   
*/
//program to all type of traversal.
//for preoder.
#include<iostream>
using namespace std;
//structure making
struct node{
    public:
    int data;
    node* left;
    node* right;
    //constructor making.
    node(int val){
        data= val;
        left=NULL:
        right=NULL;
    }
};
//for preorder
void preorder(struct node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<"";
    preorder(root->left);//condtions of traversal in binary tree in preorder or post order.
    preorder(root->right);
};
void inorder(struct node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<"";
    inorder(root->right);
};
int main(){
    struct node* root = new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right= new node(7);
    preorder(root);//preoder function excuted.
    inorder(root);//inorder fucntion executed.
    return 0;
}
//for inorder
#include<iostream>
using namespace std;
//structure making
struct node{
    public:
    int data;
    node* left;
    node* right;
    //constructor making.
    node(int val){
        data= val;
        left=NULL:
        right=NULL;
    }
};
//for preorder
void preorder(struct node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<"";
    preorder(root->left);//condtions of traversal in binary tree in preorder or post order.
    preorder(root->right);
};
void inorder(struct node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<"";
    inorder(root->right);
};
int main(){
    struct node* root = new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right= new node(7);
    preorder(root);//preoder function excuted.
    inorder(root);//inorder fucntion executed.
    return 0;
} 
//for postroder.
#include<iostream>
using namespace std;
//structure making
struct node{
    public:
    int data;
    node* left;
    node* right;
    //constructor making.
    node(int val){
        data= val;
        left=NULL;
        right=NULL;
    }
};
//for preorder
void preorder(struct node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<"";
    preorder(root->left);//condtions of traversal in binary tree in preorder or post order.
    preorder(root->right);
};
//for inoder
void inorder(struct node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<"";
    inorder(root->right);
};

void postorder(struct node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    
    postorder(root->right);
    cout<<root->data<<"";
};    
int main(){
    struct node* root = new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right= new node(7);
    preorder(root);//preoder function excuted.
    cout<<"\n";
    inorder(root);//inorder fucntion executed.
    cout<<"\n";
    postorder(root);//inorder fucntion executed.
    return 0;
} 
//program to preorder to inoreder traversal

/*
  preorder=1 2 3 , Inorder = 2 1 3.
        1           
       / \
      /   \
     2     3  

 .pick element from preorder  & create  a node
 .inreament preoder idx.
 .search for picked elements pos in inorder.
 .call to build left subtree from inoreder 0 to pos-1.
 .call to build left subtree from inorder pos+1.to n.
 .Return to node.    
 all the steps are recursively call inside the order.

 */
 /* program to print and search respectively in preorder array and inorder array.

  Preorder= 1|2|3|4|5    Inorder=4|2|1|5|3.
            |                    |   |   |
            |                    |   |   |   
           idx=0                 st  cur end

        1           
       / \
      /   \
     2     3         
    /     / 
   /     /   
  4     5
 */
 //program to construct array from preorder to inorder .
#include<iostream>
using namespace std;
//structure making
struct node{
    public:
    int data;
    node* left;
    node* right;
    //constructor making.
    node(int val){
        data= val;
        left=NULL;
        right=NULL;
    }
};
//search function making
int search(int inorder[],int start,int end, int curr){

    for(int i=start; i<=end; i++){//travese the whole inorder
     //condtion to search
     if(inorder[i]==curr){
         return i;
     }
    }
    return -1;
};
node* buildtree(int preorder[],int inorder[],int start,int end){
     static int idx=0;//create index pointer
     //contion for if start>end
     if(start>end){
         return NULL;
     }
     int curr=preorder[idx];//assign current postion to index
     idx++;//increament index
     Node * node = new node(curr);//new node create
     //condtion if only one node inside inorder
     if(start==end){
         return node;
     }

     int pos=search(inorder,start,end,curr);//postion search
     node->left=buildtree(preorder,inorder,start,end);//left subtree build
     node->right=buildtree(preorder,inorder,start,end);//right subtree buil
     
      return node;
};
//fucnction to print inorder sequnece to verify the inorder
void inorder(struct node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<"";
    inorder(root->right);
};
int main(){
    int preorder[]={1,2,3,4,5};
    int inorder[]={4,2,1,5,3};
    //build tree
     Node * root =buildtree(preorder,inorder,0,4);
     inorderprint(root);

    return 0;
}
//program tobuild tree from postorder to inorder sequence.
/* start from the end of the postorder and pick an element to create a node.
2.Decreament postoredr idx.
3.Search for picked element pos in inorder.
4.call to build right subtree from inorder pos+1 to n.
5.call to build left subtree from inorder 0 to pos-1.
6.return to node
*/
#include<iostream>
using namespace std;
//structure making
struct node{
    public:
    int data;
    node* left;
    node* right;
    //constructor making.
    node(int val){
        data= val;
        left=NULL;
        right=NULL;
    }
};
//search function making
int search(int inorder[],int start,int end, int curr){

    for(int i=start; i<=end; i++){//travese the whole inorder
     //condtion to search
     if(inorder[i]==curr){
         return i;
     }
    }
    return -1;
};
node* buildtree(int postorder[],int inorder[],int start,int end){
     static int idx=4;//create index pointer
     //contion for if start>end
     if(start>end){
         return NULL;
     }
     int val=postorder[idx];//assign current postion to index
     idx--;//increament index
      node* curr = new node(val);//new node create
     //condtion if only one node inside inorder
     if(start==end){
         return curr;
     }

     int pos=search(inorder,start,end,val);//postion search
     node->right=buildtree(postorder,inorder,start,end);//left subtree build
     node->left=buildtree(postorder,inorder,start,end);//right subtree buil
     
      return curr;
};
//fucnction to print inorder sequnece to verify the inorder
void inorder(struct node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<"";
    inorder(root->right);
};
int main(){
    int postorder[]={4,2,5,3,1};
    int inorder[]={4,2,1,3,5};
    //build tree
     Node * root =buildtree(postorder,inorder,0,4);
     inorderprint(root);

    return 0;
}
//level order traversal sum of kth lvele in bibary tree.
//count all the nodesin binary tree.
/*
        O            
       / \
      /   \
     O     O         
    / \   / \
   /   \ /   \
  O    O O   O 
        O            
       / \
      /   \
     O     O         
    / \   / \
   /   \ /   \
  O    O O   O 

recurively first count left subtree nodes and then count right subtree of node.

NOTE= LEFT SUBTREE+RIGHT SUBTREE+1.
*/
#include<iostream>
using namespace std;
//structure making
struct node{
    public:
    int data;
    node* left;
    node* right;
    //constructor making.
    node(int val){
        data= val;
        left=NULL;
        right=NULL;
    }
};
//FUCNTION TO CALCULATE AND COUNT NODES.
int countnodes(node* root){
    if(root==NULL){
        return 0;
    }
    countnodes(root->left)+countnodes(root->right)+1.
}
int main(){
    struct node* root = new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right= new node(7);
    //count nodes
    cout<<countnodes(root)<<endl;
    return 0;
}
//sum of all the nodes in the binary tree.
//left subtree sum+right sub tree sum+node value.

#include<iostream>
using namespace std;
//structure making
struct node{
    public:
    int data;
    node* left;
    node* right;
    //constructor making.
    node(int val){
        data= val;
        left=NULL;
        right=NULL;
    }
};
//FUCNTION TO CALCULATE AND COUNT NODES.
int sumnode(node* root){
    if(root==NULL){
        return 0;
    }
    sumnode(root->left)+sumnode(root->right)+root->data;
};
int main(){
    struct node* root = new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right= new node(7);
    //count nodes
    cout<<countnodes(root)<<endl;
    return 0;
}
//Questions.
//height and diameter of binary tree
//sum replacement in binary tree
//height balanced binary tree
//right view of binary tree
//left view of binary tree
//shortest distance between two nodes


 
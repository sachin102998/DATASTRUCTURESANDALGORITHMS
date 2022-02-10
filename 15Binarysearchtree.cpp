//binarysearch tree=which uses for fast lookup insertion and deletion.
//binary search tree = O(logn) is time complexity.
/* it applies three values. = 
1.The left subtree of a node contains only nodes with keys lesser than node key.
2.The right subtree of a node contains only nodes with keys greater than the nodes key.
3.The left and right subtree each must be also be a binary search tree.
There must be no duplicates nodes.
BST NOTATION/REPRESETATION.

        3           
       / \
      /   \
     2     7         
    /     / \
   /     /   \
  1     5    8 
       /\
      /  \          
     /    \
    /      \
   4        6.         
    

*/
//HOW TO CONSTRUCT A BST FROM ARRAY ELEMENTS.
/* ARR[]={5,1,3,4,2,7};

                   5
                  / \
                 /   \
                1     7.
                 \
                  \
                   3
                  / \
                 /   \
                2     4

*/
//code to implement it.
//code is likely and same as bt.
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node  *right;
    //consturctor making
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }

};
//to insert inside the binary tree
Node* insertbst(Node *root,int val){
    if(root==NULL){
        return new Node(val);
    }
    //to apply the rule and conparsion.
    if(val<root->data){
        root->left=insertbst(root->left,val);

    }
    else{
        root->right=insertbst(root->right,val);
    }
    return root;
};
void inorder(Node *root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<"";
    inorder(root->right);
};
 int main(){
      Node  *root= NULL;
      //inserting the values in bst
    insertbst(root,1);
    insertbst(root,3);
      
       insertbst(root,4);
      
       insertbst(root,2);
      
      insertbst(root,7);
      //print inorder
      inorder(root);
      cout<<endl;
      return 0;
      
} 
//program to search in a bst.
/*Derivation of time complexity in BSt.
1+2+.......+2h-1=n

2h-1=n
h=log(n+1)

Time complexity = O(logn)
*/
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node  *right;
    //consturctor making
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }

};
//code to search in side bst.
Node* searchbst(Node* root,int key){
    if(root==NULL){
        return root;
    }
    if(root->data==key){
        return root;
    }
    //data>key
     if(root->data>key){
         return searchbst(root->left,key);
     }
     
    //data<key
     if(root->data<key){
         return searchbst(root->right,key);
};
int main()
{
    Node *root=new Node(4);
    root->left=new Node(2);
    root->right=new Node(5);
    root->left->left=new Node(1);
    root->left->right=new Node(3);
    root->right->right=new Node(6);

    if(searchbst(root,5)==NULL)
    {
        cout<<"key does not exist"<<endl;
    }
    else{
        cout<<"key exist";
    }
    return 0;
}
//Delete in a BST.
//Case 1 Delete at leaf= in this case directly delete leaf node.
//case 2 Node has only 1 Child=Replace the NOde with The child and delete the node
/*
        
                   5
                  / \
                 /   \
     delete    (1)     7.    =       
                 \
                  \
                   3
                  / \
                 /   \
                2     4

                ==
                
                   5
                  / \
                 /   \
                 3   7.
                / \
               /   \
              2     4
              
 */

 /* CASE node has two children=    

     
                   5
                  / \
                 /   \
               (1)     7.    =       
                 \
                  \
 delete           (3)
                  / \
                 /   \
                2     4           
Step1.find the inorder succesor of the node
step2.Replace the node with inorder suceesor
    
      
                   5
                  / \
                 /   \
     delete    (1)     7.    =       
                 \
                  \
                   4
                  / \
                 /   \
                2     3
    step3.Delete the node.


    
                   5
                  / \
                 /   \
     delete    (1)     7.    =       
                 \
                  \
                   4
                  / 
                 /   
                2    

 */
//delete in bst
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node  *right;
    //consturctor making
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }

};
//code to delete in side bst.

int main()
{
    Node *root=new Node(4);
    root->left=new Node(2);
    root->right=new Node(5);
    root->left->left=new Node(1);
    root->left->right=new Node(3);
    root->right->right=new Node(6);

    if(searchbst(root,5)==NULL)
    {
        cout<<"key does not exist"<<endl;
    }
    else{
        cout<<"key exist";
    }
    return 0;
}
//Qusetions
//constructu binary search tree from preorder.
//Check for binary search tree.
//Build BST from Sorted array.

//Catalyn NUmbers concept
/* These numbers are the sequence of natural numbers.that occurs in various counting problems.often in
involving recursively defined objects.

Their closed form is in terms of binomial coefficiants.


    |Cn =1 2nCn =summation of Ci Cn-i , i=0 to n-1|
      _______
        n+1.

     Numbers = Co=1.
     C1=1
     C2=C0C1+C1+C0=2
     C3=C0C2+C1C1+C2C0=5
     C4=C0C3+C1C2+C2C1+C3C0=14.

  */
//program for catalyn number/sequential incursive series
#include<iostream>
using namespace std;
int catalan(int n){
    //base case
    if(n<=1){
        return 1;
    }
    //varibale
    int rest=0;
    for(int i=0;i<=n-1; i++){
        rest+=catalan(i)*catalan(n-i-1);//methods

    }
    return rest;
}
int main(){
    for(int i=0;i<10; i++){
        cout<<catalan(i)<<"";
    }
    cout<<endl;
    return 0;

}   
//after improving of time comlexity.
/* applications of catalan numbers.
1.possible BSTs
2.paranthesis/bracket combinations.
3.Possible forests
4.Ways of Triangluations.
5.Possible paths in matrix
6>Dividing a cicrcle using N chords.
7.Dyck Words of given length & much more.
*/
//QUestions
//ZIG Zag Traversal.
//are BST Identical
//restor BST.
//SET MULTISET IN STL.
//place elements to maximise
//page allocation problem.
//painter partition problem.
//search in sorted array.
//find th peak of the element.
//max sub array.
//minimum sub array.
//from number divisble by 3.
//subarray with palindromic concetanation.
//perfect numbers in subarray.



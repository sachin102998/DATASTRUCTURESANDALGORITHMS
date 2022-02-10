//heaps =binary tree based data struture.but not neccesraily it can be BST.
/*Types of heaps=
1.Maxheap=
=Root>rest of all element present in its subtree.for all roots.
2.Minheap=
=Root<rest of all the elements present in subtree.for all roots.
*/
//How to convert an array in maxheap.
//NOTE=heapify means swap of two elements.
/* 
  arr[]={10,15,21,30,18,19};

  10
  /
 /
15 
after heapify
  15
  /
 /
10
insert another element
  15
  /\
 /  \
10   21
after heapify
  21
  /\
 /  \
10   15

and this procees will go again and again then finally it will be go for the


                                30
                               / \
                              /   \
                             21   19 
                            / \     \
                           /   \     \
                          10   18    15.
 .POOPING ELEMNTS FROM HEAP
         
                                30
                               / \
                              /   \
                             21   19 
                            / \     \
                           /   \     \
                          10   18    15.

                          remove with last element
                          
                                15
                               / \
                              /   \
                             21   19 
                            / \     
                           /   \     
                          10   18  
                          again same process
                          
                                21
                               / \
                              /   \
                             18  19 
                            / \     
                           /   \     
                          10   15 
//Heapsort

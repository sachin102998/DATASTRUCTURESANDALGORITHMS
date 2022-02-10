//Graphs->Graph Thory
/* Nodes: These are the states or vertex.For instance,users in case of facebook.
.Edges:Links between states in graph. for instance,connecion between users.
There are two types of edges:
1.Undirected->Two way edges
2.Directed -> one way edges

//Representation of Graph->
1.Adjacency Matrix
2.Adjacency List

//Difference between Adjancy Matrix and Adjancey list

               Adjancy matrix                 |             Adjancy List.
  .2d array, where a[i][j]=1,if there is      |  Array of list ,where each a[i] is a list of nodes X,that
  an edge from i to j else a[i][j]=0;         | are reachable from i.
                                              |
 THere are basically two types of searches:
 1.Depth first Search: Marriage Cards Distribution.


                    1
                   / \                                             
                  /   \
                 2     5
                / \   / \
               /   \ /   \
              3     4     6
 There are three parts inside the DFS: Preorder:first time when we calls on the node
                                       Inorder: when the call works inside subtree(in DFS) of that node.
                                       Postorder:After working on subtree call comes back on the node after this,call wont come on the same node.
                                       .implemented using stacks.

2.Breath First Search:                                       
   
     
                    1
                   / \                                             
                  /   \
                 2     5
                / \   / \
               /   \ /   \
              3     4     6
.Implemented using Queues.
Different Properties of componets of graph.
.Weighted Nodes:Values are associated with Nodes.
.Weighted Edges:Values are asscociated with edges.

*/
/* terminologies in graph->
Directed Graph->A graph with directed edges is known as directed Graph.


   1------->2
    \      /
     \    /
      \3 /
Undirected Graph->remmeber through neighbours.
Adjact vertices are two vertices with direct edge connecting them.

Degree of vertex->there are two types of degree 
1.Indegree->number of incoming edges to a node.
2.outdegree->Number of outgoing edges from a node.

path between two vertices->All vertices which come in the path of two given vertices are called their path.

Connected Graph->Each node has path from other node.
Disconnected->Each node does not have path from every other node.

Connected Components->Each connected Graph in a disconnected Graph is called connected component.

CYCLES IN A GRAPH-> path from a vertex to the same vertex in a graph is known as cycle.
                         B
                        / |
                       A  | 
                      /   |
                     /    |
                    F     C
                     \   /
                      \ /
                       E

Cyclic Graph->Graph That contains Cycle is called cyclic Graph.
Acyclic Graph-> graph that does not contain cycle is called acyclic graph.

Tree->Tree is a connected acyclic Graph.

                                   1
                                  / \
                                 /   \
                                2     3
                               /|\     \
                              / | \     \
                             4  5  6     7.

Properties->
1.NO of edges->Total Number of nodes-1.
2.There are no cycle present.
3.Each node has path from every other vertex.

Directed Acyclic Graph(DAG)->
Properties:->
1.it has directed edges.
2.it is acyclic , no cycles are present.


Complete Graph->
A graph in which each vertex is connected to every other vertex by direct edge.


       1-------------2
       |             |
       |             |
       |             |
       |             |
       |             |
       3-------------4

//Topological Sort->Ordering is called the topological sort of graph.
//A toppological ordering is an ordering of nodes in a directed graph started from edges of each directed graph
//From Node A to Node B,node A appears before node B in the ordering
//NOTe->Toplogical ordering is not unique.
//Every graph do not have a toplogical ordering
/*
                       A
                      / \
                     /   \
                    B     C
                     \    /
                      \  /
                        D
*/
//Note->Directed Cyclic Graph can not have a Topological Sort.
//Only Directed Acyclic Graph (DAG) have a valid toplogical sort.


/*Algithm for topologica sort->
While(all the nodes are not visited)
Node with Zero indegree can be added to the output array.
all the nodes which are adjacent to terminal nodes,gets their indegree subtracted.

/* Cycle detetction in undirected Graph->

                       A
                      / \
                     /   \
                    B     C
                     \    /
                      \  /
                        D
Keep on traversing the graph.
if you found an edge pointing to already visited node(except the parent node),a cycle is found.
*/
#include<iostream>
using namespace std;
//function of iscycle
bool cycle(int src ,vector<vector<int>> &adj, vector<bool> &visited, int parent){
      visited[src]=true;
      //traverse on the adjacency list
      for(auto i: adj[src]){
            if(i!=parent){
                  if(visited[i])
                  return true;
                  if(!visited[i] and iscycle(i,adj,visited,src)){
                        return true;
                  }
            }
      }
      return false;
};
int main(){
      int n,m;//rows and coloums where n is vertices and m no of edges.
      cin>>n>>m;
      // to make a adjacny list of n size.
      vector<vector<int>> adj(n);
      //to iterate over the adjacency list
      for(int i=0; i<m; i++){
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
      }
      bool cycle=false;
      //make a visted array where we can see that we have visted the graph or not
      vector<bool>visited(n,false);
      for(int i=0; i<n; i++){
            //which tell that its the parent node
            if(!visited[i] and iscycle(i,adj,visited,-1)){
                cycle=true;
            }
      }
      if(cycle)
      cout<<"Cycle is present";
      else
      cout<<"Cycle is not present";

}


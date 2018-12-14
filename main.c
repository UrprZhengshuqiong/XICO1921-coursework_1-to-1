#include <stdio.h>
#include <stdlib.h>
#include "math.h"
#include "treeStructure.h"
#include "print.h"
#include "tree.h"

void destroyTree(Node *node)
{
  int i;
  if(node->child[0] == NULL){
    return;
  }
  else{
     for(i = 0;i < 4;i++)
     {
        destroyTree(node->child[i]);
        free(node->child[i]);
        node->child[i] = NULL;
     }
  }
}

void removeChildren(Node *parent)
{
  int i;
  //method - 1
  //destroyTree(parent);

  //method - 2
  for(i = 0;i < 4;i++)
  {
      free(parent->child[i]);
      parent->child[i] = NULL;
  }
}

int main( int argc, char **argv ) {

  Node *head;
  head = makeNode( 0.0,0.0, 0 );
/*
  // a full tree at Level 2.
  growtree(head);
  growtree(head);

  //Remove children from one Level 1 node using your new function.
  removeChildren(head->child[0]);

  //Then free the whole tree using your function from Task 1
  destroyTree(head);
  free(head);
  head = NULL;
*/
  //a non-uniform tree that you define.
  growtree(head);
  makeChildren( head->child[0]);
  makeChildren( head->child[1]);

  //Use  removeChildren() to remove children from one Level 1 node.
  removeChildren(head->child[0]);

  //Then free the whole tree.
  destroyTree(head);
  free(head);
  head = NULL;


  writeTree( head );

}

















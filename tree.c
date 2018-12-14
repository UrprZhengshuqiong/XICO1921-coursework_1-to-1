#include <stdio.h>
#include <stdlib.h>
#include "math.h"
#include "treeStructure.h"
#include "tree.h"

void growtree(Node *node)
{
  int i;
  if(node->child[0] == NULL){
     makeChildren(node);
     return;
  }
  else{
     for(i = 0;i < 4;i++)
     {
        growtree(node->child[i]);
     }
  }
}
Node *makeNode( double x, double y, int level ) {

  int i;

  Node *node = (Node *)malloc(sizeof(Node)); //#include <stdlib.h>

  node->level = level;

  node->xy[0] = x;
  node->xy[1] = y;
  node->flag = 0;

  for( i=0;i<4;++i )
    node->child[i] = NULL;

  return node;
}

void makeChildren( Node *parent ) {

  double x = parent->xy[0];
  double y = parent->xy[1];

  int level = parent->level;

  double hChild = pow(2.0,-(level+1));

  parent->child[0] = makeNode( x,y, level+1 );
  parent->child[1] = makeNode( x+hChild,y, level+1 );
  parent->child[2] = makeNode( x+hChild,y+hChild, level+1 );
  parent->child[3] = makeNode( x,y+hChild, level+1 );

  return;
}
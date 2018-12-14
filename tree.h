#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

Node *makeNode( double x, double y, int level );
void makeChildren( Node *parent );
void growtree(Node *node);

#endif // TREE_H_INCLUDED

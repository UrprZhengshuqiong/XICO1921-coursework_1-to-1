#ifndef TREESTRUCTURE_H_INCLUDED
#define TREESTRUCTURE_H_INCLUDED

struct qnode {
  int level;  //用来表示是第几个等级
  double xy[2];
  struct qnode *child[4];  //结构指针数组
  int flag;
};
typedef struct qnode Node;

// function definitions
void printOut( FILE *fp, Node *node );


#endif // TREESTRUCTURE_H_INCLUDED



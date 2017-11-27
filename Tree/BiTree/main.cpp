#include <iostream>
using namespace std;

#include <stack>
#include <queue>
#include <math.h>

typedef char DataType;

#include "BiTree.h"

/*              root
 *
 *          A
 *       B      C
 *  D         E   F
 *    G
 *
 *
 */
int main() {

    BiTree biTree = BiTree();
    Node *p = NULL;

    p = biTree.InsertLeftNode(biTree.GetRoot(), 'A');
    p = biTree.InsertLeftNode(p, 'B');
    p = biTree.InsertLeftNode(p, 'D');
    biTree.InsertRightNode(p, 'G');
    p = biTree.InsertRightNode(biTree.GetRoot()->left, 'C');

    Node *p1 = p;
    biTree.InsertLeftNode(p, 'E');
    biTree.InsertRightNode(p1, 'F');

    biTree.PrintTree(biTree.GetRoot()->left, 0);
    biTree.GetTreeLevel(biTree.GetRoot());

    biTree.PreOrder(biTree.GetRoot()->left, biTree.Visit);  cout << endl;
    biTree.InOrder(biTree.GetRoot()->left, biTree.Visit);   cout << endl;
    biTree.PostOrder(biTree.GetRoot()->left, biTree.Visit); cout << endl;

    biTree.PreOrderNotRecursion(biTree.GetRoot()->left, biTree.Visit);
    biTree.InOrderNotRecursion(biTree.GetRoot()->left, biTree.Visit);
    biTree.PostOrderNotRecursion(biTree.GetRoot()->left, biTree.Visit);

    biTree.LevelOrderTraverse(biTree.GetRoot()->left, biTree.Visit);

    p = biTree.SearchNodeByData(biTree.GetRoot(), 'B');
    biTree.DeleteLeftTree(p);
    biTree.PreOrder(biTree.GetRoot()->left, biTree.Visit);  cout << endl;

    p = biTree.SearchNodeByData(biTree.GetRoot(), 'C');
    biTree.DeleteRightTree(p);
    biTree.PreOrder(biTree.GetRoot()->left, biTree.Visit);  cout << endl;

    biTree.PrintTree(biTree.GetRoot()->left, 0);

    return 0;
}
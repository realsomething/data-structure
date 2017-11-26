#include <iostream>
using namespace std;

#include <stack>

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

    biTree.PreOrder(biTree.GetRoot()->left, biTree.Visit);  cout << endl;
    biTree.InOrder(biTree.GetRoot()->left, biTree.Visit);   cout << endl;
    biTree.PostOrder(biTree.GetRoot()->left, biTree.Visit); cout << endl;

    biTree.SearchNodeByData(biTree.GetRoot(), 'C');
    biTree.SearchNodeByData(biTree.GetRoot(), 'H');

    biTree.PreOrderNotRecursion(biTree.GetRoot()->left, biTree.Visit);
    biTree.InOrderNotRecursion(biTree.GetRoot()->left, biTree.Visit);
    biTree.PostOrderNotRecursion(biTree.GetRoot()->left, biTree.Visit);


    return 0;
}
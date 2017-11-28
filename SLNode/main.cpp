#include <iostream>
using namespace std;


typedef int DataType;

#include "SLNode.h"

int main() {

    SLinkList sLinkList = SLinkList();
    DataType x = 0;
    Node *p = NULL;

    sLinkList.create_list_head();

    sLinkList.print_linklist();

    sLinkList.delete_pos(x, 0);                         // delete the first

    sLinkList.print_linklist();

    sLinkList.delete_pos(x, sLinkList.get_size() - 1);  // delete the last

    sLinkList.print_linklist();

    p = sLinkList.get_node(0);                                  // get the first
    cout << "first node: " << p->data << endl;

    p = sLinkList.get_node(sLinkList.get_size() - 1);           // get the last
    cout << "last node: " << p->data << endl;

    sLinkList = sLinkList.reverse_linklist();                       // reverse the link list

    sLinkList.print_linklist();

    return 0;
}
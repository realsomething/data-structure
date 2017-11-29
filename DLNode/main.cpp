#include <iostream>
using namespace std;

typedef int DataType;

#include "DLNode.h"

int main() {

    DLinkList dLinkList = DLinkList();
    DataType  x = 0;
    Node *p = NULL;

    dLinkList.create_list_head();

    dLinkList.print_linklist();

    dLinkList.delete_pos(x, 0);                            // delete the first

    dLinkList.print_linklist();

    dLinkList.delete_pos(x, dLinkList.get_size() - 1);     // delete the last

    dLinkList.print_linklist();

    p = dLinkList.get_node(0);      cout << "first data: " << p->data << endl;
    p = dLinkList.get_node(dLinkList.get_size() - 1);   cout << "last data: " << p->data << endl;

    dLinkList.reverse_linklist();

    dLinkList.print_linklist();

    return 0;
}
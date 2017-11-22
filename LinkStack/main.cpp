#include <iostream>
using namespace std;

typedef int DataType;

#include "LinkStack.h"

int main() {

    LinkStack linkStack = LinkStack();
    DataType  x = 0;

    linkStack.create_linkstack();

    linkStack.print_linkstack();

    linkStack.pop(x);   cout << "pop the top data: " << x << endl;

    linkStack.print_linkstack();

    linkStack.pop(x);   cout << "pop the top data: " << x << endl;

    linkStack.print_linkstack();

    return 0;
}
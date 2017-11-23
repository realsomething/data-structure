#include <iostream>
using namespace std;

typedef int DataType;

#include "LinkQueue.h"

int main() {

    LinkQueue queue = LinkQueue();
    DataType x = 0;

    queue.create_linkqueue();

    queue.print_linklist();

    queue.dequeue(x);   cout << "link queue front data: " << x << endl;

    queue.dequeue(x);   cout << "link queue front data: " << x << endl;

    queue.print_linklist();

    return 0;
}
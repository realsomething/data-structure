#include <iostream>
using namespace std;

typedef int DataType;
#define MAX_SIZE  10;

#include "Order.h"

int main() {

    Order order = Order();
    int d[3] = {5, 3, 1};

    order.print_data();

    //order.select_sort();
    //order.insert_sort();
    order.shell_sort(d, sizeof(d)/sizeof(int));

    order.print_data();

    return 0;
}
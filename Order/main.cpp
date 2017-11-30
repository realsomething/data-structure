#include <iostream>
using namespace std;

typedef int DataType;
#define MAX_SIZE  10;

#include "Order.h"

int main() {

    Order order = Order();

    order.print_data();

    order.select_sort();

    order.print_data();

    return 0;
}
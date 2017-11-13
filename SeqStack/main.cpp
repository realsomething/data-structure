#include <iostream>
using namespace std;

#define MAX_SIZE 10
typedef int DataType;

#include "SeqStack.h"

int main() {

    SeqStack seqStack = SeqStack();
    DataType  x = 0;

    seqStack.StackInit();

    seqStack.StackPrebild();

    seqStack.StackPrint();

    seqStack.StackPop(x);       cout << "pop x: " << x << endl;

    seqStack.StackPop(x);       cout << "pop x: " << x << endl;

    seqStack.StackPrint();

    return 0;
}
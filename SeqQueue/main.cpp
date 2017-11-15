#include <iostream>
using namespace std;


#define MAX_SIZE 10
typedef int DataType;

#include "SeqQueue.h"

int main() {

    SeqQueue seqQueue = SeqQueue();
    DataType  x = 0;

    seqQueue.QueueInit();

    seqQueue.QueuePreset();

    seqQueue.QueuePrint();

    seqQueue.QueueDequeue(x);

    seqQueue.QueueDequeue(x);

    seqQueue.QueuePrint();

    return 0;
}
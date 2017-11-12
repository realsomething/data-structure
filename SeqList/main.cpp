#include <iostream>
using namespace std;


#define MAX_SIZE 100
typedef int DataType;

#include "SeqList.h"

int main() {
    SeqList *seqList = new SeqList();

    seqList->ListInitiate();

    for (int i=0; i<10; i++)
    {
        seqList->ListInsert(i, rand() % 100);
    }

    seqList->ListPrint();

    DataType  x = 0;
    seqList->ListDelete(0, &x);                         // delete the first
    seqList->ListPrint();

    seqList->ListDelete(seqList->ListSize()-1, &x);     // delete the last
    seqList->ListPrint();
    
    return 0;
}
#include <iostream>
using namespace std;


#define MAX_SIZE 100
typedef int DataType;

#include "SeqList.h"

int main() {
    SeqList seqList = SeqList();
    DataType  x = 0;

    seqList.ListInitiate();

    seqList.ListPreset();

    seqList.ListPrint();

    seqList.ListDelete(0, x);                           // delete the first
    cout << "x = " + x << endl;

    seqList.ListDelete(seqList.ListSize()-1, x);        // delete the last
    cout << "x = " + x << endl;

    seqList.ListPrint();

    return 0;
}
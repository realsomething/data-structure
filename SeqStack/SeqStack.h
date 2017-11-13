//
// Created by  sky on 2017/11/12.
//

#ifndef SEQSTACK_SEQSTACK_H
#define SEQSTACK_SEQSTACK_H

#endif //SEQSTACK_SEQSTACK_H


class SeqStack
{
private:
    DataType stack[MAX_SIZE];
    int top;                        // always point to the top of the real data

public:

    // initializing.....
    void StackInit()
    {
        cout << "stack inilizing........" << endl;
        top = 0;
    }

    void StackPrebild()
    {
        for (int i=0; i<10; ++i)
        {
            StackPush(rand() % 100);
        }
    }

    // push
    bool StackPush(DataType x)
    {
        if (top > MAX_SIZE - 1)
        {
            cout << "stack is full." << endl;
            return false;
        }

        stack[top] = x;
        top++;
        cout << "stack push data success." << endl;
        return true;
    }

    // pop
    bool StackPop(DataType &x)
    {
        if (top == 0)
        {
            cout << "stack is empty." << endl;
            return false;
        }

        top--;
        x = stack[top];
        cout << "stack pop data success." << endl;
        return true;
    }

    bool StackNotEmpty()
    {
        if (top == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }

    // print the data
    void StackPrint()
    {
        cout << "stack data below......................" << endl;

        if (StackNotEmpty())
        {
            for (int i=0; i<top; ++i)
            {
                cout << stack[i] << '\t';
            }

            cout << endl;
        }
    }

};

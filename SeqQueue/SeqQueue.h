//
// Created by  sky on 2017/11/12.
//

#ifndef SEQQUEUE_SEQQUEUE_H
#define SEQQUEUE_SEQQUEUE_H

#endif //SEQQUEUE_SEQQUEUE_H


class SeqQueue
{
private:
    DataType queue[MAX_SIZE];
    int front;                  // front pointer    always point to the top of the real data
    int rear;                   // rear pointer     point to the real data when not empty
    int count;                  // pointer 0 means empty, or full when front == rear

public:

    // initialize
    void QueueInit()
    {
        front = 0;
        rear = 0;
        count = 0;
        cout << "queue initializing....." << endl;
    }

    bool QueueEmpty()
    {
        if (count == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool QueueFull()
    {
        if (front == rear && count > 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void QueuePreset()
    {
        for (int i=0; i<10; ++i)
        {
            QueueEnqueue(rand() % 100);
        }
    }

    // enqueue
    bool QueueEnqueue(DataType x)
    {
        if (QueueFull())
        {
            cout << "queue is full." << endl;
            return false;
        }

        queue[rear] = x;
        rear = (rear + 1) % MAX_SIZE;
        count++;
        cout << "queue enqueue data success." << endl;
        return  true;
    }

    // dequeue
    bool QueueDequeue(DataType &x)
    {
        if (QueueEmpty())
        {
            cout << "queue is empty." << endl;
            return false;
        }

        x = queue[front];
        front = (front + 1) % MAX_SIZE;
        count--;
        cout << "queue dequeue data success." << endl;
        return true;
    }

    // print queue data
    void QueuePrint()
    {
        cout << "queue data below....................." << endl;

        if (!QueueEmpty())
        {
            cout << "rear:";
            for (int i=0; i<count; ++i)
            {
                cout << queue[i] << '\t';
            }
            cout << ":front" << endl;
        }
    }

};

//
// Created by  sky on 2017/11/19.
//

#ifndef LINKQUEUE_LINKQUEUE_H
#define LINKQUEUE_LINKQUEUE_H

#endif //LINKQUEUE_LINKQUEUE_H



struct Node
{
    DataType data;
    Node *next;
    Node(const DataType &d):data(d), next(NULL)
    {

    }

    Node()
    {
        data = 0;
        next = NULL;
    }
};

class LinkQueue
{
private:
    Node *front;
    Node *rear;
    int size;

public:
    LinkQueue()
    {
        front = NULL;           // none head node
        rear = NULL;            // none head node
        size = 0;
    }

    virtual ~LinkQueue()
    {
        Node *p = front;
        Node *q = NULL;

        while (p->next != NULL)
        {
            q = p;
            p = p->next;
            delete q;
            q = NULL;
        }
    }

    bool is_empty()
    {
        if (front != NULL)
        {
            return false;
        }
        else
        {
            return true;
        }
    }

    void create_linkqueue()
    {
        for (int i=0; i<10; ++i)
        {
            enqueue(rand() % 100);
        }
    }

    bool enqueue(DataType x)
    {
        Node *q = new Node(x);

        if (rear != NULL)
        {
            rear->next = q;
        }
        rear = q;

        if (front == NULL)
        {
            front = q;
        }

        return true;
    }

    bool dequeue(DataType &x)
    {
        Node *p = front;

        if (is_empty())
        {
            cout << "link queue is empty, dequeue failed." << endl;
            return false;
        }

        x = p->data;
        front = front->next;

        if (front == NULL)
        {
            rear = NULL;
        }

        delete p;
        p = NULL;

        return true;
    }

    int get_size()
    {
        Node *p = front;
        size = 0;

        while (p != NULL)
        {
            size++;
            p = p->next;
        }

        return size;
    }

    void print_linklist()
    {
        Node *p = front;

        while (p != NULL)
        {
            cout << p->data << '\t';
            p = p->next;
        }

        cout << endl;
    }

};
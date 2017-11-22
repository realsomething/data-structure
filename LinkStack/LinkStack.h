//
// Created by  sky on 2017/11/19.
//

#ifndef LINKSTACK_LINKSTACK_H
#define LINKSTACK_LINKSTACK_H

#endif //LINKSTACK_LINKSTACK_H


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

class LinkStack
{
private:
    Node *head;
    int size;

public:
    LinkStack()
    {
        head = new Node();
        size = 0;
    }

    virtual ~LinkStack() {
        Node *p = head->next;
        Node *q = NULL;

        while (p != NULL)
        {
            q = p;
            p = p->next;
            delete q;
            q = NULL;
        }

        delete head;
        head = NULL;
    }

    bool is_empty()
    {
        if (head->next != NULL)
        {
            return false;
        }
        else
        {
            return true;
        }
    }

    void create_linkstack()
    {
        for (int i=0; i<10; ++i)
        {
            push(rand() % 100);
        }
    }

    bool push(DataType x)
    {
        Node *p = head;
        Node *q = new Node(x);

        q->next = p->next;
        p->next = q;

        return true;
    }

    bool pop(DataType &x)
    {
        Node *p = head->next;

        if (is_empty())
        {
            cout << "link stack is empty, pop failed." << endl;
            return false;
        }

        x = p->data;

        head->next = p->next;
        delete p;
        p = NULL;

        return true;
    }

    int getsize()
    {
        Node *p = head;

        while (p->next != NULL)
        {
            p = p->next;
            size++;
        }

        return size;
    }

    void print_linkstack()
    {
        Node *p = head;

        while (p->next != NULL)
        {
            cout << p->next->data << '\t';
            p = p->next;
        }

        cout << endl;
    }

};
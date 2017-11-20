//
// Created by  sky on 2017/11/19.
//

#ifndef DLNODE_DLNODE_H
#define DLNODE_DLNODE_H

#endif //DLNODE_DLNODE_H


struct Node
{
    DataType data;
    Node *prior;
    Node *next;
    Node(const DataType &d):data(d), prior(NULL), next(NULL)
    {

    }

    Node()
    {
        data = 0;
        prior = NULL;
        next = NULL;        // of vital importance, in head insert list, ends the link list
    }
};

class DLinkList
{
private:
    Node *head;
    int size;

public:

    DLinkList()
    {
        head = new Node();      // with head node, also means deep copy
        head->prior = head;     // create a loop
        head->next = head;      // create a loop
        size = 0;
    }

    virtual ~DLinkList()    // new list with one node, call this function error: SLNode(10166,0x7fffd367f3c0) malloc: *** error for object 0x7f8c7ec02600: pointer being freed was not allocated
    {
        Node *p = head->next;
        Node *q;

        while (p != head)
        {
            q = p;
            p = p->next;
            delete  q;//free(q);
            q = NULL;
        }
        delete head;
        head = NULL;
    }

    void create_list_head()
    {
        for (int i=0; i<10; ++i)
        {
            insert_pos(rand() % 100, 0);
        }
    }

    bool insert_pos(DataType x, int position)
    {
        Node *p = head->next;
        Node *q = NULL;

        int j = 0;

        // point to the location before position
        while (p != head && j < position)
        {
            p = p->next;
            j++;
        }

        if (j != position)
        {
            cout << "DLinkList insert position error." << endl;
            return false;
        }

        q = new Node(x);

        // also ok
        q->prior = p->prior;
        p->prior->next = q;
        q->next = p;
        p->prior = q;

        /*
        p->prior->next = q;
        q->prior = p->prior;
        p->prior = q;
        q->next = p;
        */

        cout << "DLinkList insert data success." << endl;

        return true;
    }

    bool delete_pos(DataType &x, int position)
    {
        Node *p = head->next;

        int j = 0;

        // point to the location before position, make sure the position not empty, has the real data
        while (p != NULL & j < position)
        {
            p = p->next;
            j++;
        }

        if (j != position)
        {
            cout << "DLinkList delete position error." << endl;
            return false;
        }

        x = p->data;

        p->prior->next = p->next;
        p->next->prior = p->prior;
        delete(p);
        p = NULL;
        cout << "DLinkList delete data success." << endl;

        return true;
    }

    Node* get_node(int position)
    {
        Node *p = head;
        int j = -1;

        while (p->next != head && j < position)
        {
            p = p->next;
            j++;
        }

        if (j != position )
        {
            cout << "DLinkList get position error." << endl;
            return NULL;
        }

        return p;
    }

    int get_size()
    {
        Node *p = head;
        size = 0;

        while (p->next != head)
        {
            size++;
            p = p->next;
        }

        return size;
    }

    void print_linklist()
    {
        Node *p = head;

        while (p->next != head)
        {
            cout << p->next->data << '\t';
            p = p->next;
        }

        cout << endl;
    }

    // reverse the single link list
    bool reverse_linklist()
    {
        DLinkList new_list;
        Node *p = head;
        Node *temp;

        if (head->next == NULL)
        {
            cout << "the original link list is empty." << endl;
            return false;
        }

        new_list = DLinkList();

        if (new_list.head == NULL)
        {
            cout << "create the new link list failed." << endl;
            return false;
        }

        while (head->next != NULL)
        {
            temp = new_list.head->next;
            new_list.head->next = head->next;
            head->next = head->next->next;
            new_list.head->next->next = temp;
        }


        p->next = new_list.head->next;  // link to the original link list

        new_list.head->next = NULL;     // break to the new link list

        //delete new_list.head;

        return true;
    }

};
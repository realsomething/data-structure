//
// Created by  sky on 2017/11/12.
//

#ifndef SEQLIST_SEQLIST_H
#define SEQLIST_SEQLIST_H

#endif //SEQLIST_SEQLIST_H


class SeqList
{
private:
    DataType list[MAX_SIZE];
    int size;

public:
    // init
    void ListInitiate()
    {
        cout << "list initializing..." << endl;
        size = 0;
    }

    // preset some data
    void ListPreset()
    {
        for (int i=0; i<10; i++)
        {
            ListInsert(i, rand() % 100);
        }
    }

    // insert x before i,    0 <= i <= L->size
    bool ListInsert( int i, DataType x)
    {
        if (size >= MAX_SIZE)
        {
            cout << "list is full." << endl;
            return false;
        }
        else if (i < 0 || i > size)
        {
            cout << "list insert param is invalid." << endl;
            return false;
        }
        else
        {
            for (int j=size; j>i; j--)
            {
                list[j] = list[j-1];
            }

            list[i] = x;
            size++;
            cout << "list insert data success." << endl;
            return true;
        }
    }

    // delete x from i,     0 <= i <= L->size - 1
    bool ListDelete(int i, DataType &x)
    {
        if (size == 0)
        {
            cout << "list is empty." << endl;
            return false;
        }
        else if (i < 0 || i > size - 1)
        {
            cout << "list delete param is invalid." << endl;
            return false;
        }
        else
        {
            x = list[i];

            for (int j=i+1; j<size; j++)
            {
                list[j-1] = list[j];
            }

            size--;
            cout << "list delete data success."  << endl;
            return true;
        }
    }


    // modify original value in i with x
    bool ListModify(int i, DataType x)
    {
        if (size == 0)
        {
            cout << "list is empty." << endl;
            return false;
        }
        else if (i < 0 || i > size - 1)
        {
            cout << "list modify param is invalid." << endl;
            return false;
        }
        else
        {
            list[i] = x;

            cout << "list modify data success." << endl;
            return true;
        }
    }

    // search value in L with x
    bool ListSearch(int i, DataType x)
    {
        if (size == 0)
        {
            cout << "list is empty." << endl;
            return false;
        }
        else if (i < 0 || i > size - 1)
        {
            cout << "list search param is invalid." << endl;
            return false;
        }
        else
        {
            int j=0;

            while (j < size)
            {
                if (list[j] == x)
                {
                    cout << "list search data success." << endl;
                    return true;
                }
                j++;
            }
            cout << "list search data failed." << endl;
            return false;
        }
    }

    // print the list
    void ListPrint()
    {
        cout << "list data showing..................." << endl;
        if (size == 0)
        {
            cout << "list is empty.";
        }
        else
        {
            cout << "list size[" << size << "]:  ";

            for (int i=0; i< size; i++)
            {
                cout << list[i] << '\t';
            }
            cout << endl;
        }
    }

    int ListSize()
    {
        return size;
    }

};
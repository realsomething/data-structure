//
// Created by  sky on 2017/11/26.
//

#include <cstdlib>

#ifndef ORDER_ORDER_H
#define ORDER_ORDER_H

#endif //ORDER_ORDER_H


class Order
{
private:
    DataType array[10];
    int size;

public:

    Order()
    {
        size = 10;

        for (int i=0; i<size; ++i)
        {
            array[i] = rand() % 100;
        }
    }

    void print_data()
    {
        for (int i=0; i<size; ++i)
        {
            cout << array[i] << '\t';
        }

        cout << endl;
    }

    void insert_sort()
    {
        for (int i=0; i<size-1; ++i)
        {
            DataType temp = array[i+1];
            int j=i;

            while (j > -1 && temp < array[j])
            {
                array[j+1] = array[j];
                j--;
            }
            array[j+1] = temp;
        }
    }

    void select_sort()
    {
        int i;
        int j;
        int small;
        DataType temp;

        for (i=0; i<size-1; ++i)
        {
            small = i;

            for (j=i+1; j<size; ++j)
            {
                if (array[j] < array[small])
                {
                    small = j;
                }
            }

            if (i != small)
            {
                temp = array[i];
                array[i] = array[small];
                array[small] = temp;
            }
        }
    }
};
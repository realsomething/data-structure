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

    /* insert directly
     * 进行n-1轮，假设第一个元素已排好序，从第二个元素开始，顺序的把待排序的元素按其关键字大小插入到已经排好序的子集合的适当位置
     * */
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

    /* first group, then insert directly in each group
     * d[]: number of each group's member
     * num_of_d: number of group
     * */
    void shell_sort(int d[], int num_of_d)
    {
        for (int m=0; m<num_of_d; ++m)
        {
            int span = d[m];

            for (int k=0; k<span; ++k)
            {
                for (int i=k; i<size-span; i=i+span)
                {
                    DataType  temp = array[i+span];
                    int j=i;

                    while (j > -1 && temp < array[j])
                    {
                        array[j+span] = array[j];
                        j -= span;
                    }
                    array[j+span] = temp;
                }
            }
        }
    }

    /* 从待排序的数据元素集合中选取关键字最小的元素并与原始数据元素集合中的第一个元素进行交换，然后从不包含第一个位置的数据元素集合中选取
     * 关键字最小的数据元素并与原始数据集合中第二个元素交换位置，直到待排序集合中只剩下一个元素位置
     * */
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
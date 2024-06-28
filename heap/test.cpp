#include <iostream>
#include "heap.h"

int insert_nums_and_print()
{
    Heap h({-98, -75, -32, -11, 0, 14, 27, 42, 67, 91});
    h.print();
    return 0;
}

int pop_max()
{
    Heap h({-98, -75, -32, -11, 0, 14, 27, 42, 67, 91});
    h.print();
    h.pop();
    h.print();
    return 0;
}

int insert_a_num(int x = 177)
{
    Heap h({0});
    h.print();
    h.insert(x);
    h.print();
    return 0;
}
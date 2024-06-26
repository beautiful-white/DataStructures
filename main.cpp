#include <iostream>
#include "heap/test.cpp"

using namespace std;

int main()
{
    cout << "Insert 10 random nums" << '\n';
    insert_nums_and_print();
    cout << "Insert a particular num" << '\n';
    insert_a_num(-100);
    cout << "Take a max num" << '\n';
    pop_max();
    return 0;
}
#include "DLList.hpp"
#include "DLList.cpp"

#include <iostream>

int main(void) {
    DLList<char> list;

    list.push_front('a');
    list.push_front('b');
    list.push_front('c');


    //list.push_back('d');
    //list.push_back('e');
    //list.push_back('f');

    list.print();

    list.pop_front();
    //list.pop_back();

    //list.print();
    //list.print_backwards();


    return 0;
}
#include "AVLTree.hpp"
#include "AVLTree.cpp"

#include <iostream>
#include <string>


int main(void) {
    AVLTree<int> tree;

    tree.insert(20);
    tree.insert(1);
    tree.insert(23);
    tree.insert(22);
    tree.insert(24);
    tree.insert(26);
    tree.insert(27);
    tree.insert(28);
    tree.insert(29);
    tree.insert(19);
    tree.insert(12);

    tree.print();
    
    tree.remove(12);

    return 0;
}

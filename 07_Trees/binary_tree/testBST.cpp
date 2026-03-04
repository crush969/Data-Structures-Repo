#include "BTNode.hpp"
#include "BST.cpp"

#include <iostream>
#include <string>

int main(void) {
    //BTNode<int>* root = new BTNode<int>(23);

    BST<int> tree;

    tree.insert(2);
    tree.insert(1);
    tree.insert(3);
    tree.insert(4);

    //tree.inorder();

    //tree.preorder();
    //tree.postorder();

    //std::cout << tree.getMinNode()->data << std::endl;
    //std::cout << tree.searchParent(33)->data << std::endl;

    /*
    BTNode<int>* node = tree.search(21);
    if (node) {
        std::cout << "Found" << std::endl;
    }
    else {
        std::cout << "Not Found" << std::endl;
    }
        */

    tree.print();

    tree.deleteNode(2);
    tree.print();
    tree.deleteNode(3);
    tree.print();

    return 0;
}
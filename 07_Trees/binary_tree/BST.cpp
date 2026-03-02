#include "BST.hpp"
#include <iostream>

template <typename T>
BST<T>::BST() {
    root = nullptr;
}

template <typename T>
bool BST<T>::empty() const {
    return root == nullptr;
}

template <typename T>
void BST<T>::insert(const T& val) {
    if (empty()) {
        root = new BTNode<T>(val);
        return;
    }

    // Iterative approach
    BTNode<T>* cur = root;
    BTNode<T>* prev = root;
    while (cur) {
        prev = cur;
        if (cur->data > val) {
            cur = cur->left;
        }
        else {
            cur = cur->right;
        }
    }

    if (prev->data > val) {
        prev->left = new BTNode<T>(val);
    }
    else {
        prev->right = new BTNode<T>(val);
    }
}

template <typename T>
void BST<T>::insert_recursive(const T& val) {
    root = insert_recursive(root, val);
}

template <typename T>
BTNode<T>* BST<T>::insert_recursive(BTNode<T>* node, const T& val) {
    if (!node) {
        return new BTNode<T>(val);
    }
    if (val > node->data) {
        node->right = insert_recursive(node->right, val);
        return node;
    }
    else {
        node->left = insert_recursive(node->left, val);
        return node;
    }
}

template <typename T>
void BST<T>::inorder() const {
    std::cout << "Inorder: [ ";
    inorder(root);
    std::cout << " ]\n\n";
}

template<typename T>
void BST<T>::inorder(BTNode<T>* node) const {
    if (!node) {
        return;
    }
    inorder(node->left);
    std::cout << node->data << ' ';
    inorder(node->right);
}

template<typename T>
void BST<T>::preorder() const {
    std::cout << "Preorder: [ ";
    preorder(root);
    std::cout << " ]\n\n";
}

template<typename T>
void BST<T>::preorder(BTNode<T>* node) const {
    if (!node) {
        return;
    }
    std::cout << node->data << ' ';
    preorder(node->left);
    preorder(node->right);
}

template<typename T>
void BST<T>::postorder() const {
    std::cout << "Postorder: [ ";
    postorder(root);
    std::cout << " ]\n\n";
}

template<typename T>
void BST<T>::postorder(BTNode<T>* node) const {
    if (!node) {
        return;
    }
    postorder(node->left);
    postorder(node->right);
    std::cout << node->data << ' ';
}

template <typename T>
bool BST<T>::isFullTree() const {
    return isFullTree(root);
}

template <typename T>
bool BST<T>::isFullTree(BTNode<T>* node) const {
    if (!node) {
        return true;
    }
    if (node.hasOneChild()) {
        return false;
    }
    return isFullTree(node->left) && isFullTree(node->right);
}

template <typename T>
BTNode<T>* BST<T>::search(const T& val) const {
    BTNode<T>* cur = root;

    while (cur) {
        if (cur->data == val) { // Found the value
            return cur;
        }
        else if (cur->data > val) { // Value is less than current
            cur = cur->left;
        }
        else {
            cur = cur->right;
        }
    }


    
    return nullptr;
}

template<typename T>
BTNode<T>* BST<T>::getMinNode() const {
    if (empty()) {
        return nullptr;
    }

    BTNode<T>* cur = root;

    while(cur->left != nullptr){
        cur = cur->left;
    }

    return cur;
}

template<typename T>
BTNode<T>* BST<T>::searchParent(const T& val) const {
    BTNode<T>* check = root;

    while(true) {
        if (check == nullptr) {
            return nullptr;
        }
        if (check->data == val) {
            return nullptr;
        }
        if(check->left && check->left->data == val) {
            return check;
        }
        if(check->right && check->right->data == val) {
            return check;
        }
        
        if(val > check->data) {
            check = check->right;
            continue;
        }
        if(val < check->data) {
            check = check->left;
            continue;
        }

    }
}

/*template<typename T>
void BST<T>::deleteLeaf(BTNode<T>* child, BTNode<T>* parent) {
    if (child == root) {
        return nullptr;
    }
}*/

template <typename T>
void BST<T>::print() const {
    std::cout << "================================\n";
    print("", root, false);
    std::cout << "================================\n";
}

template <typename T>
void BST<T>::print(const std::string& prefix, BTNode<T>* node, bool isRight) const {
    if(!node) {
        return;
    }
    std::cout << prefix;
    if(node != root) {
        std::cout << (isRight ? "R--" : "L--");
    }
    else {
        std::cout << "---";
    }
    
    // print the value of the node
    std::cout << node->data << std::endl;

    // go to the next level of the tree
    print(prefix + "   ", node->right, true);
    print(prefix + "   ", node->left, false);

}

template <typename T>
void BST<T>::deleteNode(const T& val) {
    BTNode<T>* node = search(val);

    if(!node) {
        std::cout << "Delete: No value in the BST\n";
        return;
    }
    BTNode<T>* parent = seachParent(val);

    if(node->isLeaf()) {
        deleteLeaf(node, parent);
    }
    else if (node->hasOneChild()) {
        deleteNodeWithOneChild(node, parent);
    }
    else { //
        deleteNodeWithTwoChildren(node);
    }

}

template <typename T>
void BST<T>::deleteNodeWithTwoChildren(BTNode<T>* node) {
    BTNode<T>* min_right_node = getMinNode(node->right);
    T min_val = min_right_node->data;

    if(min_right_node->isLeaf()) {
        deleteLeaf(min_right_node, searchParent(min_val));
    }
    else if (min_right_node->hasOneChild()) {
        deleteNodeWithOneChild(min_right_node, searchParent(min_val));
    }
    node->data = min_val;
}

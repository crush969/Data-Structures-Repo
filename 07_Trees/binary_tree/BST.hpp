#ifndef BST_HPP
#define BST_HPP

#include "BTNode.hpp"

#include <string>

template <typename T>
class BST {
    public:
        BST();

        bool empty() const;
        void insert(const T& val);

        void insert_recursive(const T& val);

        // Traversals of the tree
        void inorder() const;
        void preorder() const;
        void postorder() const;

        bool isFullTree() const;

        BTNode<T>* search(const T& val) const;

        BTNode<T>* getMinNode() const;
        BTNode<T>* searchParent(const T& val) const;
        void deleteNode(const T& val);
        void print() const;

        //void deleteLeaf(BTNode<T>* child, BTNode<T>* parent);
        //void deleteNodeWithOneChild(BTNode<T>* child, BTNode<T>* parent);
        void BST<T>::deleteNodeWithTwoChildren(BTNode<T>* node);
        
    private:
        BTNode<T>* root;
        BTNode<T>* insert_recursive(BTNode<T>* node, const T& val);
        void inorder(BTNode<T>* node) const;
        void preorder(BTNode<T>* node) const;
        void postorder(BTNode<T>* node) const;
        bool isFullTree(BTNode<T>* node) const;

        //void deleteLeaf(BTNode<T>* child, BTNode<T>* parent);
        // void deleteNodeWithOneChild(BTNode<T>* child, BTNode<T>* parent);

        void print(const std::string& prefix, BTNode<T>* node, bool isRight) const;

};

#endif
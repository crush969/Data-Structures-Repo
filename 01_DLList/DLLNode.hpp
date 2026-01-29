#ifndef DLLNode_H
#define DLLNode_H


template <typename T>
class DLLNode{
// <T> - default template type
public:
    DLLNode(const T& d = 0, SLLNode<T> *n = nullptr) {
        data = d;
        next = n;
    }

    int data;
    DLLNode *next; // pointer to the next node
};

#endif
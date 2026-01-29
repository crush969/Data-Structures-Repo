#ifndef DLLNode_H
#define DLLNode_H


template <typename T>
class DLLNode{
// T() - default template type
public:
    DLLNode(const T& d = T(), DLLNode<T>* p = nullptr, DLLNode<T>* n = nullptr) {
        data = d;
        prev = p;
        next = n;
    }

    T data;
    DLLNode<T>* next; // pointer to the next node
    DLLNode<T>* prev; // pointer to the previous node
};

#endif
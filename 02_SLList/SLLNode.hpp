#ifndef SLLNode_H
#define SLLNode_H


template <typename T>
class SLLNode{
// <T> - default template constructor
public:
    SLLNode(const T& d = T(), SLLNode<T> *n = nullptr) {
        data = d;
        next = n;
    }

    T data;
    SLLNode<T> *next; // pointer to the next node
};

#endif
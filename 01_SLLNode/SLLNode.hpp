#ifndef SLLNode_H
#define SLLNode_H

class SLLNode{
public:
    SLLNode(int d = 0, SLLNode *n = nullptr) {
        data = d;
        next = n;
    }

    int data;
    SLLNode *next; // pointer to the next node
};

#endif
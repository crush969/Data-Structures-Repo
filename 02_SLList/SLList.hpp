#ifndef SLList_H
#define SLList_H

#include "SLLNode.hpp"

class SLList {
    public:
        // No-arg constructor
        SLList();

        unsigned    size() const; // Returns the size of the list
        bool        empty() const; // Returns true if list is empty
        void        push_front(int val); // Insert the new node at the beggining
        void        print() const; // Print the list

        // TODO
        void        push_back(int val); // Insert the new node at the end

    private:
        SLLNode* head; // The pointer to the first node
        SLLNode* tail; // The pointer to the last node
        unsigned list_size;
};

#endif
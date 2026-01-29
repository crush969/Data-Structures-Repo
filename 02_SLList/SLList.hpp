#ifndef SLList_H
#define SLList_H

#include "SLLNode.hpp"

template <typename T>
class SLList {
    public:
        // No-arg constructor
        SLList();

        // The copy constructor
        SLList(const SLList<T>& other);
        // Assignment operator
        SLList<T>& operator=(const SLList<T>& other);

        // The destructor
        ~SLList();


        unsigned    size() const; // Returns the size of the list
        bool        empty() const; // Returns true if list is empty
        void        push_front(const T& val); // Insert the new node at the beggining
        void        print() const; // Print the list
        void        push_back(const T& val); // Insert the new node at the end

        void        pop_front(); // Remove the front element (node)
        void        pop_back(); // Remove the last element (node)
        void        clear(); //Clear the list

    private:
        SLLNode<T>* head; // The pointer to the first node
        SLLNode<T>* tail; // The pointer to the last node
        unsigned list_size;
};

#endif
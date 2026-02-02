#ifndef DLLIST_H
#define DLLIST_H

#include "DLLNode.hpp"

template <typename T>
class DLList{
    public:
        // No-arg constructor
        DLList();

        // The copy constructor
        //DLList(const DLList<T>& other);
        // Assignment operator
        //DLList<T>& operator=(const DLList<T>& other);

        // The destructor
        //~DLList();


        //unsigned    size() const; // Returns the size of the list
        bool        empty() const; // Returns true if list is empty
        void        push_front(const T& val); // Insert the new node at the beggining
        void        push_back(const T& val); // Insert the new node at the end
        void        print() const; // Print the list

        // Practice 2
        void        print_backwards() const; // prints the list backwards

        void        pop_front(); // Remove the front element (node)
        void        pop_back(); // Remove the last element (node)
        //void        clear(); //Clear the list

    private:
        DLLNode<T>* head; // The pointer to the first node
        DLLNode<T>* tail; // The pointer to the last node
        unsigned list_size;
};


#endif
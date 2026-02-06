#ifndef QUEUEDLL_h
#define QUEUEDLL_h

#include "DLList.hpp"
#include "DLList.cpp"

template <typename T>
class QueueDLL {
    public:
        QueueDLL();

        int         length() const;
        bool        empty() const;
        bool        full()  const;
        void        print() const;
        void        clear();

        void        enqueue(const T& val);
        //  Throws std::out_of_range exception
        T           dequeue();
        const T&    front(); // Return the first element in the queue

    private:
        DLList<T>* data;
};

#endif
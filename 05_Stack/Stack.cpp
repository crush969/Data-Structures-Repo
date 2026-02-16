#include "Stack.hpp"

#include <iostream>

template <typename T, int size>
Stack<T,size>::Stack() : top_idx(-1) {}

template <typename T, int size>
void        Stack<T,size>::push(const T& val) {
    if (full()) {
        throw std::out_of_range("Full Stack");
    }
}

template <typename T, int size>
bool        Stack<T,size>::empty() const {}

template <typename T, int size>
bool        Stack<T,size>::full() const {}

template <typename T, int size>
void        Stack<T,size>::print() const {}

template <typename T, int size>
T           Stack<T,size>::pop() {}

template <typename T, int size>
const T&    Stack<T,size>::top() const {}
#ifndef STACK_HPP
#define STACK_HPP

template <typename T, int size = 10>
class Stack {
    public:
        Stack();

        void        push(const T& val);
        bool        empty() const;
        bool        full() const;
        void        print() const;
        T           pop();
        const T&    top() const;

        
    private:
        T data[size];   // Array of stack elemennts
        int top_idx;    // Index of the top of the stack
};

#endif
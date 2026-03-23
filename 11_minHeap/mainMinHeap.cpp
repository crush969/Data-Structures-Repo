#include "MinHeap.hpp"
#include "minHeap.cpp"
#include <cstdlib>

int main(void) {
    MinHeap<int> heap;

    for(int i = 0; i < 10; i++) {
        heap.insert(rand() % 1000);
    }

    heap.print();
    for (int i = 0; i < 10; i++) {
        heap.deleteMin();
        heap.print();
        std::cout << "----------\n";
    }

    return 0;
}
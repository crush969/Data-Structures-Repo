#include "SLList.hpp"
#include "SLList.cpp"
#include <string>

int main(void) {
    SLList<std::string> list;
    list.push_front("tommorow");
    list.push_front("will");
    list.push_front("be");
    list.push_front("great");

    list.print();

    
    return 0;
}
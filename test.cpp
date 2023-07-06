#include <iostream>
#include "stack.hpp"

template <typename T>
void testStack()
{
    Stack<T> obj;

    obj.push("10");
    obj.push("20");
    obj.push("30");

    std::cout << "Stack size: " << obj.size() << std::endl;
    std::cout << "Top element: " << obj.top() << std::endl;

    obj.pop();

    std::cout << "Stack size after pop: " << obj.size() << std::endl;
    std::cout << "Top element after pop: " << obj.top() << std::endl;

    std::cout << "Is stack empty? " << (obj.empty() ? "Yes" : "No") << std::endl;

    std::cout << "Element at index 1: " << obj[1] << std::endl;

    Stack<T> obj1;
    obj1.push("100");
    obj1.push("200");
    std::cout << "Stack before swap: ";
    for (int i = 0; i < obj.size(); ++i) {
        std::cout << obj[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Another stack before swap: ";
    for (int i = 0; i < obj1.size(); ++i) {
        std::cout << obj1[i] << " ";
    }
    std::cout << std::endl;

    obj.swap(obj1);

    std::cout << "Stack after swap: ";
    for (int i = 0; i < obj.size(); ++i) {
        std::cout << obj[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Another stack after swap: ";
    for (int i = 0; i < obj1.size(); ++i) {
        std::cout << obj1[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    // std::cout << "Testing int stack:" << std::endl;
    // testStack<int>();

    std::cout << "Testing string stack:" << std::endl;
    testStack<std::string>();

    return 0;
}

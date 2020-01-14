//clang constructors.cpp -Wall -Wdeprecated -lstdc++ --std=c++2a
#include <iostream>

class A
{
public:
    virtual ~A() = default;
    
    A()
    {
        std::cout << "Default constructor" << std::endl;
    }
    A(const A&)
    {
        std::cout << "Copy constructor A" << std::endl;
    }
};

int main()
{
    A a;
    A b = a;
    A c = std::move(a);
    return 0;
}
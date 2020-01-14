//clang constructors.cpp -Wall -Wdeprecated -lstdc++ --std=c++2a
#include <iostream>

class A
{
public:
    virtual ~A() = default;
    A(const A&)
    {
        std::cout << "Copy constructor A" << std::endl;
    }
};

int main()
{
    A a;
    A b = a;
    return 0;
}
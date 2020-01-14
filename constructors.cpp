//clang constructors.cpp -Wall -Wdeprecated -lstdc++ --std=c++2a
#include <iostream>

class A
{
public:
    virtual ~A() = default;
    
    A(int num) : number(num)
    {
        std::cout << "Parameter constructor" << std::endl;
    }
    A(const A&)
    {
        std::cout << "Copy constructor A" << std::endl;
    }
    A(A&&)
    {
        std::cout << "Move constructor A" << std::endl;
    }

private:
    int number;
};

int main()
{
    A a;
    A b = a;
    A c = std::move(a);
    return 0;
}
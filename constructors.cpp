//clang constructors.cpp -Wall -Wdeprecated -lstdc++ --std=c++2a
#include <iostream>

class A
{
public:
    virtual ~A() = default;
    
    A() : number(5)
    {
        std::cout << "Default constructor" << std::endl;
    }
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
    int getNumber(){return number;} // to avoid warning
    int number;
};

int main()
{
    A a;
    A b = a;
    A c = std::move(a);
    return 0;
}
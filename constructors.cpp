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
        std::cout << "Parameter int constructor" << std::endl;
    }
    A(double num) : number(num)
    {
        std::cout << "Parameter double constructor" << std::endl;
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
    double number;
};

class B : public A
{
public:
    virtual ~B() = default;

    B()
    {
        std::cout << "Default B constructor" << std::endl;
    }
    B(const B& b) : A(b)
    {
        std::cout << "Copy B constructor" << std::endl;
    }
    B(B&& b) : A(std::move(b))
    {
        std::cout << "Move B constructor" << std::endl;
    }
};

int main()
{
    A a;
    A b = a;
    A c = std::move(a);
    A d(4);
    A e(5.0);
    A f{5};
    A g{5.0};
    std::cout << "Class B" << std::endl;
    B aa;
    B bb = aa;
    B cc = std::move(bb);
    return 0;
}
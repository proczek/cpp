//clang constructors.cpp -Wall -Wdeprecated -lstdc++ --std=c++2a
#include <iostream>
#include <vector>

class A
{
public:
    virtual ~A() = default;
    
    A() : number(5)
    {
        std::cout << "Default constructor" << std::endl;
    }
    A(std::initializer_list<int> num) : numbers(num)
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
    std::vector<int> getNumbers() {return numbers;} //to avoid warning
    int number;
    std::vector<int> numbers;
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
    return 0;
}
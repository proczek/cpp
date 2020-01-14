//clang constructors.cpp -Wall -Wdeprecated -lstdc++ --std=c++2a

class A
{
public:
    virtual ~A() = default;
};

int main()
{
    A a;
    A b = a;
    return 0;
}
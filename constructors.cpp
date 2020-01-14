//clang constructors.cpp -Wall -Wdeprecated -lstdc++ --std=c++2a

class A
{
public:
    virtual ~A() = default;
};

int main()
{
    A a;
    return 0;
}
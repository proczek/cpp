#include <string>

class InitializerList
{
public:
    InitializerList(double number) : p_number(number) {}
    InitializerList(std::initializer_list<int>) {}

    double p_number;
};

int main()
{
    InitializerList first(2.0);
    //InitializerList second{2.0}; does not compile - narrowing conversion, cause "greedy" constructor with initializer list is only with int
    return 0;
}
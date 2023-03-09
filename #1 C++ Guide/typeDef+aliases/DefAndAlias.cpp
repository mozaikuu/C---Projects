#include <iostream>

typedef std::string myString; // define a new type called myString

namespace Test
{
    int x = 5;

} // namespace Test

int main()
{
    using namespace Test;

    myString HW = "Hello World!";
    int x = 7; // this x is different from the x in the namespace Test //if there are using namespace statements, this x would be used instead of the x in the namespace Test
    std::cout << HW << std::endl;
    // std::cout << Test::x;
    std::cout << x; // this works because of the using namespace Test;
    return 0;
}
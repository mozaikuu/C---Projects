#include <iostream>

namespace myNamespace
{
    int myInt = 15;
    const int myConstInt = 15;
    float myFloat = 3.14;
    double myDouble = 3.14159265358979323846;
    bool myBool = true;
    char myChar = 'a';
}

int main()
{
    int myInt = 7;
    std::cout << myInt << std::endl;
    std::cout << myNamespace::myInt << std::endl;
    return 0;
}
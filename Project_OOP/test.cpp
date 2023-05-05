#include <iostream>

int main()
{
    int x;
    std::cout << &x << '\n';
    int &y = x;
    std::cout << &y << '\n';
    int *p = &x;
    std::cout << p << '\n';
    return 0;
}
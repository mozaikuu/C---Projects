#include <iostream>

int main()
{
    std::cout << "Enter circle Radius: " << endl;
    int radius;
    std::cin >> radius;

    const double PI = 3.14159265358979323846;
    double area = PI * radius * radius;
    double circumference = 2 * PI * radius;

    return 0;
}
#include <iostream>

void celsius_to_fahrenheit(double Celsius)
{
    double fahrenheit = (Celsius * 180.0 / 100.0) + 32;
    std::cout << Celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit." << std::endl;
}

int main()
{
    celsius_to_fahrenheit(0);
    celsius_to_fahrenheit(37);
    celsius_to_fahrenheit(40);
    celsius_to_fahrenheit(100);

    return 0;
}
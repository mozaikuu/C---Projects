#include <iostream>

int main()
{
    std::string x;
    std::cout << "Enter a string: ";
    std::cin >> x;
    std::cout << "You entered: " << x << std::endl
              << std::endl;

    // problem with this method is that it only reads the first word of the input...
    // to fix this, use getline() instead of cin

    std::string y;
    std::cout << "Enter a string: ";
    std::getline(std::cin, y);
    std::cout << "You entered: " << y << std::endl
              << std::endl;

    // problem with this method is that it reads the newline character as well...
    // to fix this, use cin.ignore() after getline()

    std::string z;
    std::cout << "Enter a string: ";
    std::getline(std::cin, z);
    std::cin.ignore(32767, '\n'); // ignore up to 32767 characters until a newline character is found
    std::cout << "You entered: " << z << std::endl
              << std::endl;

    return 0;
}
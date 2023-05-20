#include <iostream>

void Menu();

void Register()
{
    std::string x;
    std::string y;
    std::string z;

    std::cout << "register." << std::endl;
    std::cout << std::endl;
    std::cout << "enter username: ";
    std::cin >> x;
    std::cout << std::endl;
    std::cout << "enter password: ";
    std::cin >> y;
    std::cout << std::endl;
    std::cout << "confirm password: ";
    std::cin >> z;
    std::cout << std::endl;
    if (y == z)
    {
        std::cout << "account created." << std::endl;
        std::cout << std::endl;
        std::cout << "username: " + x << std::endl;
        std::cout << "password: " + y << std::endl;
        std::cout << std::endl;
        std::cout << "press enter to continue...";
        std::cin.ignore();
        std::cin.get();
        std::cout << std::endl;

        Menu();
    }
    else if (y != z)
    {
        std::cout << "passwords do not match..." << std::endl;
        std::cout << std::endl;
        std::cout << "press enter to continue...";
        std::cin.ignore();
        std::cin.get();
        std::cout << std::endl;
        Register();
    }
}
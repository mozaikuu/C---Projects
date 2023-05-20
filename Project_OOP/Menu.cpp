#include <iostream>

void login();
// void Register();
// void forgotPassword();

void Menu()
{
    int x;
    std::cout << "menu." << std::endl;
    std::cout << "1. login." << std::endl;
    std::cout << "2. register." << std::endl;
    std::cout << "3. forgot password." << std::endl;
    std::cout << "4. exit." << std::endl;
    std::cout << std::endl;
    std::cout << "enter number: ";
    std::cin >> x;
    std::cout << std::endl;

    switch (x)
    {
    case 1:
        login();
        break;
    // case 2:
    //     Register();
    //     break;
    // case 3:
    //     forgotPassword();
    //     break;
    // case 4:
    //     std::cout << "exiting..." << std::endl;
    //     exit(0);
    //     break;
    default:
        std::cout << "invalid input..." << std::endl;
        std::cout << std::endl;
        Menu();
        break;
    }
}
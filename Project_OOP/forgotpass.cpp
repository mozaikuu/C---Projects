#include <iostream>

void forgotPassword()
{

    std::cout << "forgot password." << std::endl;
    std::cout << std::endl;
    std::cout << "enter username: ";
    std::cout << std::endl;
    std::string userTemp;
    std::cin >> userTemp;
    std::cout << "enter ID: ";
    std::cout << std::endl;
    std::string idTemp;
    std::cin >> idTemp;
    std::cout << "enter phone number: ";
    std::cout << std::endl;
    std::string numberTemp;
    std::cin >> numberTemp;
    std::cout << "enter new password: ";
    std::cout << std::endl;
    std::string passTemp;
    std::cin >> passTemp;
    std::cout << "enter new password again: ";
    std::cout << std::endl;
    std::string passTemp2;
    std::cin >> passTemp2;
    std::cout << "password changed successfully." << std::endl;
    std::cout << std::endl;

    for (int i = 0; i < 20; i++)
    {
        std::string *user = &userTemp;
        std::string *id = &idTemp;
        std::string *number = &numberTemp;
        if (userTemp == *user && idTemp == *id && numberTemp == *number)
        {
            std::cout << "password changed successfully." << std::endl;
            std::cout << std::endl;
            break;
        }
        else if (userTemp != *user || idTemp != *id || numberTemp != *number)
        {
            if (i == 10 - 1)
            {
                std::cout << "Error: wrong username, ID, or phone number." << std::endl;
                std::cout << std::endl;
            }
        }
    }
}
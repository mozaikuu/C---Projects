#include <iostream>
#include "Classes.cpp"
#include "Menu.cpp"
#include "login.cpp"
#include "forgotpass.cpp"
#include "Register.cpp"

using std::string, std::cout, std::cin;

int main()
{

    // Register(usernames, passwords, num_users, id, number); append to list
    std::cout << "welcome to the bank." << std::endl;
    std::cout << std::endl;
    // std::cout << customer[0].name << std::endl; // test
    Menu();

    return 0;
}

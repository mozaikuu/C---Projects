#include <iostream>

// void GUI();

void Find()
{
    std::string x;
    std::string y;

    std::cout << "\tusername: ";
    std::cin >> x;
    std::cout << "\tpassword: ";
    std::cin >> y;
    for (int i = 0; i < SIZE; i++)
    {
        std::string user = customer[i].name;
        std::string pass = customer[i].password;
        if (x != user || y != pass)
        {
            if (i == SIZE - 1)
            {
                std::cout << "wrong username or password..." << std::endl;
                std::cout << std::endl;
            }
            Find(); // leaveeeeeee
        }
        else if (x == user && y == pass)
        {
            std::cout << "welcome " + customer[i].name << std::endl;
            break;
        }
    }
}
// cip
void login()
{

    std::cout << "logging in..." << std::endl;

    Find();
    // Menu();
    //  GUI();
};

//*** change passwords ***
//*** unique passwords ***
//*** add/remove users ***

#include <iostream>

void login()
{
std::string username = "iamusername";
std::string password = "iamapassword";
std::string x;
std::string y;

std::cout << "login." << std::endl;




do{

std::cout <<  "\tusername: ";
std::cin >> x;
if (x == username)break;
std::cout << std::endl;
std::cout << "wrong username..." << std::endl;

}while(x!=username);


do{

std::cout <<  "\tpassword: ";
std::cin >> y;
if (y == password)break;
std::cout << "wrong password..." << std::endl;
std::cout << std::endl;
}while(y!=password);

std::cout << "welcome " + username << std::endl;
};

//*** change passwords ***
//*** unique passwords ***
//*** add/remove users ***
#include <iostream>
#include <string>

void add(Customer customer[], int &num_users)
{
    std::string name;
    int id;
    int number;
    std::string password;
    int balance;

    std::cout << "enter name: ";
    std::cin >> name;
    std::cout << "enter id: ";
    std::cin >> id;
    std::cout << "enter number: ";
    std::cin >> number;
    std::cout << "enter password: ";
    std::cin >> password;
    std::cout << "enter balance: ";
    std::cin >> balance;
    std::cout << std::endl;
    num_users++;

    customer[num_users] = Customer(name, id, balance, number, password);
    std::cout << std::endl;
    std::cout << "user added." << std::endl;
    std::cout << std::endl;
    Menu();
}

void remove()
{
    std::string name;
    std::cout << "enter name: ";
    std::cin >> name;
    std::cout << std::endl;
    std::cout << "enter password: ";
    std::string password;
    std::cin >> password;
    std::cout << std::endl;

    for (int i = 0; i < SIZE; i++)
    {
        if (customer[i].name == name && customer[i].password == password)
        {
            customer[i].name = "";
            customer[i].id = 0;
            customer[i].number = 0;
            customer[i].password = "";
            customer[i].balance = 0;
            std::cout << "user removed." << std::endl;
            std::cout << std::endl;
            Menu();
        }
        else if (i == SIZE - 1)
        {
            std::cout << "user not found..." << std::endl;
            std::cout << std::endl;
            Menu();
        }
    }
}

void replace()
{
    std::string name;
    std::cout << "enter name: ";
    std::cin >> name; // repetittive bs 3adi \<3
    std::cout << std::endl;
    std::cout << "enter password: ";
    std::string password;
    std::cin >> password;
    std::cout << std::endl;

    for (int i = 0; i < SIZE; i++)
    {
        if (customer[i].name == name && customer[i].password == password)
        {
            std::string name;
            int id;
            int number;
            std::string password;
            int balance;

            std::cout << "enter name: ";
            std::cin >> name;
            std::cout << "enter id: ";
            std::cin >> id;
            std::cout << "enter number: ";
            std::cin >> number;
            std::cout << "enter password: ";
            std::cin >> password;
            std::cout << "enter balance: ";
            std::cin >> balance;
            std::cout << std::endl;

            customer[i].name = name;
            customer[i].id = id;
            customer[i].number = number;
            customer[i].password = password;
            customer[i].balance = balance;
            std::cout << "user replaced." << std::endl;
            std::cout << std::endl;
            Menu();
        }
        else if (i == SIZE - 1)
        {
            std::cout << "user not found..." << std::endl;
            std::cout << std::endl;
            Menu();
        }
    }
}

void Promote(Customer customer[], int &num_users, vip vip[], int &num_vips)
{
    std::string name;
    std::cout << "Enter name: ";
    std::cin >> name;
    std::cout << std::endl;

    std::string password;
    std::cout << "Enter password: ";
    std::cin >> password;
    std::cout << std::endl;

    bool found = false;
    for (int i = 0; i < num_users; i++)
    {
        if (customer[i].name == name && customer[i].password == password)
        {
            vip[num_vips] = {customer[i].name, customer[i].id, customer[i].balance, customer[i].number, customer[i].password, 0}; // TEST: if it works
            customer[i].name = "";
            customer[i].id = 0;
            customer[i].number = 0;
            customer[i].password = ""; // just realized i can use .clear() lol a7a?  what i was actually saying was that i need sorting
            customer[i].balance = 0;
            num_users--;

            found = true;
            std::cout << "Customer " << name << " has been Promoted to VIP." << std::endl;
            break;
        }
    }

    if (!found)
    {
        std::cout << "Customer " << name << " not found." << std::endl;
    }
}
void Register()
{
    int x;
    std::cout << "register." << std::endl;
    std::cout << "1. add user." << std::endl;
    std::cout << "2. remove user." << std::endl;
    std::cout << "3. replace user." << std::endl;
    std::cout << "4. promote user." << std::endl;
    std::cout << "5. exit." << std::endl;
    std::cout << std::endl;
    std::cout << "enter number: ";
    std::cin >> x;
    std::cout << std::endl;

    switch (x)
    {
    case 1:
        add(customer, num_users);
        break;
    case 2:
        remove();
        break;
    case 3:
        replace();
        break;
    case 4:
        Promote(customer, num_users);
        break;
    case 5:
        std::cout << "exiting..." << std::endl;
        exit(0);
        break;
    default:
        std::cout << "invalid input..." << std::endl;
        std::cout << std::endl;
        Register();
        break;
    }
}
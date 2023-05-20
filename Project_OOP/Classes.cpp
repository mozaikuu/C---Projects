#include <iostream>

using std::string, std::cout, std::cin;

const int SIZE = 20;

class Customer
{
public:
    // static int num_users;
    string name;
    int id;
    int number;
    std::string password;
    int balance;

    Customer(string name, int id, int bal, int number, std::string password)
    {
        name = name;
        id = id;
        balance = bal;
        number = number;
        password = password;
        // num_users++;
    }
    virtual void GUI()
    {
        int x;
        cout << "what would you like to do?" << std::endl;
        cout << "1. deposit." << std::endl;
        cout << "2. withdraw." << std::endl;
        cout << "3. check balance." << std::endl;
        cout << "4. exit." << std::endl;
        cout << std::endl;
        cout << "enter number: ";
        cin >> x;
        cout << std::endl;

        switch (x)
        {
        case 1:
            // deposit();
            break;
        case 2:
            // withdraw();
            break;
        case 3:
            // checkBalance();
            break;
        case 4:
            // invest();
            break;
        case 5:
            // transfer();
            break;
        case 6:
            // buy();
            break;
        case 7:
            exit(0);
            break;
        default:
            cout << "invalid input..." << std::endl;
            cout << std::endl;
            GUI();
            break;
        }
    }
};

class vip : public Customer
{
public:
    int discount;
    // static int num_vips;

    vip(string name, int id, int bal, int number, std::string password, int discount) : Customer(name, id, bal, number, password)
    {
        discount = discount;
        // num_vips++;
    }
    void GUI() override
    {
        // buy(discount);   needs to be implemented
    }
};
Customer customer[SIZE] = {Customer("ahmed", 1, 1000, 01042333253, "pass1"),
                           Customer("mohamed", 2, 2000, 01556703723, "pass2"),
                           Customer("ali", 3, 3000, 01042333253, "pass3"),
                           Customer("khaled", 4, 4000, 01556703523, "pass4"),
                           Customer("mahmoud", 5, 5000, 01042333253, "pass5"),
                           Customer("hassan", 6, 6000, 01556703523, "pass6"),
                           Customer("youssef", 7, 7000, 01042333253, "pass7"),
                           Customer("omar", 8, 8000, 01556703423, "pass8"),
                           Customer("mohsen", 9, 9000, 01042333253, "pass9"),
                           Customer("wael", 10, 10000, 01556703423, "pass10"),
                           Customer("", 0, 0, 0, ""),
                           Customer("", 0, 0, 0, ""),
                           Customer("", 0, 0, 0, ""),
                           Customer("", 0, 0, 0, ""),
                           Customer("", 0, 0, 0, ""),
                           Customer("", 0, 0, 0, ""),
                           Customer("", 0, 0, 0, ""),
                           Customer("", 0, 0, 0, ""),
                           Customer("", 0, 0, 0, ""),
                           Customer("", 0, 0, 0, "")};

vip Vip[SIZE] = {vip("ahmed", 1, 1000, 01042333253, "pass1", 10),
                 vip("mohamed", 2, 2000, 01556703423, "pass2", 20),
                 vip("ali", 3, 3000, 01042333253, "pass3", 30),
                 vip("khaled", 4, 4000, 01556703423, "pass4", 40),
                 vip("mahmoud", 5, 5000, 01042333253, "pass5", 50),
                 vip("hassan", 6, 6000, 01556703423, "pass6", 60),
                 vip("youssef", 7, 7000, 01042333253, "pass7", 70),
                 vip("omar", 8, 8000, 01556703423, "pass8", 80),
                 vip("mohsen", 9, 9000, 01042333253, "pass9", 90),
                 vip("wael", 10, 10000, 01556703423, "pass10", 100),
                 vip("", 0, 0, 0, "", 0),
                 vip("", 0, 0, 0, "", 0),
                 vip("", 0, 0, 0, "", 0),
                 vip("", 0, 0, 0, "", 0),
                 vip("", 0, 0, 0, "", 0),
                 vip("", 0, 0, 0, "", 0),
                 vip("", 0, 0, 0, "", 0),
                 vip("", 0, 0, 0, "", 0),
                 vip("", 0, 0, 0, "", 0),
                 vip("", 0, 0, 0, "", 0)};

// ________________________________________________________________________________

// void printCustomers(Customer customers)
// {
//     std::cout << "Customers:" << std::endl;
//     for (int i = 0; i < SIZE; i++)
//     {
//         Customer c = customers[i];
//         if (c.name != "")
//         {
//             std::cout << "Name: " << c.name << std::endl;
//             std::cout << "ID: " << c.id << std::endl;
//             std::cout << "Balance: " << c.balance << std::endl;
//             std::cout << "Phone Number: " << c.number << std::endl;
//             std::cout << "Password: " << c.password << std::endl;
//             std::cout << std::endl;
//         }
//     }
// }
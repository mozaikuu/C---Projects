#include <iostream>

// /*
// .......##.......##..######..##..........###.....######...######..########..######.
// ......##.......##..##....##.##.........##.##...##....##.##....##.##.......##....##
// .....##.......##...##.......##........##...##..##.......##.......##.......##......
// ....##.......##....##.......##.......##.....##..######...######..######....######.
// ...##.......##.....##.......##.......#########.......##.......##.##.............##
// ..##.......##......##....##.##.......##.....##.##....##.##....##.##.......##....##
// .##.......##........######..########.##.....##..######...######..########..######.
// */

const int SIZE = 20;

class Customer
{
public:
    // static int num_users;
    std::string name;
    std::string id;
    std::string number;
    std::string password;
    int balance;

    Customer(std::string name, std::string id, int bal, std::string number, std::string password)
    {
        this->name = name;
        this->id = id;
        this->balance = bal;
        this->number = number;
        this->password = password;
        // num_users++;
    }

    // virtual void GUI()
    // {
    //     int x;
    //     std::cout << "what would you like to do?" << std::endl;
    //     std::cout << "1. deposit." << std::endl;
    //     std::cout << "2. withdraw." << std::endl;
    //     std::cout << "3. check balance." << std::endl;
    //     std::cout << "4. exit." << std::endl;
    //     std::cout << std::endl;
    //     std::cout << "enter number: ";
    //     std::cin >> x;
    //     std::cout << std::endl;

    //     switch (x)
    //     {
    //     case 1:
    //         // deposit();
    //         break;
    //     case 2:
    //         // withdraw();
    //         break;
    //     case 3:
    //         // checkBalance();
    //         break;
    //     case 4:
    //         // invest();
    //         break;
    //     case 5:
    //         // transfer();
    //         break;
    //     case 6:
    //         // buy();
    //         break;
    //     case 7:
    //         exit(0);
    //         break;
    //     default:
    //         std::cout << "invalid input..." << std::endl;
    //         std::cout << std::endl;
    //         // GUI();
    //         break;
    //     }
    // }
};

class Vip : public Customer
{
public:
    int discount;
    // static int num_vips;

    Vip(std::string name, std::string id, int bal, std::string number, std::string password, int discount) : Customer(name, id, bal, number, password)
    {
        this->discount = discount;
        // num_vips++;
    }
    // void GUI() override
    // {
    //     // buy(discount);   needs to be implemented
    // }
};

Customer customer[SIZE] = {Customer("ahmed", "1", 1000, "01042333253", "pass1"),
                           Customer("mohamed", "2", 2000, "01556703723", "pass2"),
                           Customer("ali", "3", 3000, "01042333253", "pass3"),
                           Customer("khaled", "4", 4000, "01556703523", "pass4"),
                           Customer("mahmoud", "5", 5000, "01042333253", "pass5"),
                           Customer("hassan", "6", 6000, "01556703523", "pass6"),
                           Customer("youssef", "7", 7000, "01042333253", "pass7"),
                           Customer("omar", "8", 8000, "01556703423", "pass8"),
                           Customer("mohsen", "9", 9000, "01042333253", "pass9"),
                           Customer("wael", "10", 10000, "01556703423", "pass10"),
                           Customer("", "0", 0, "0", ""),
                           Customer("", "0", 0, "0", ""),
                           Customer("", "0", 0, "0", ""),
                           Customer("", "0", 0, "0", ""),
                           Customer("", "0", 0, "0", ""),
                           Customer("", "0", 0, "0", ""),
                           Customer("", "0", 0, "0", ""),
                           Customer("", "0", 0, "0", ""),
                           Customer("", "0", 0, "0", ""),
                           Customer("", "0", 0, "0", "")};

Vip vip[SIZE] = {Vip("ahmed", "1", 1000, "01042333253", "pass1", 10),
                 Vip("mohamed", "2", 2000, "01556703423", "pass2", 20),
                 Vip("ali", "3", 3000, "01042333253", "pass3", 30),
                 Vip("khaled", "4", 4000, "01556703423", "pass4", 40),
                 Vip("mahmoud", "5", 5000, "01042333253", "pass5", 50),
                 Vip("hassan", "6", 6000, "01556703423", "pass6", 60),
                 Vip("youssef", "7", 7000, "01042333253", "pass7", 70),
                 Vip("omar", "8", 8000, "01556703423", "pass8", 80),
                 Vip("mohsen", "9", 9000, "01042333253", "pass9", 90),
                 Vip("wael", "10", 10000, "01556703423", "pass10", 100),
                 Vip("", "0", 0, "0", "", 0),
                 Vip("", "0", 0, "0", "", 0),
                 Vip("", "0", 0, "0", "", 0),
                 Vip("", "0", 0, "0", "", 0),
                 Vip("", "0", 0, "0", "", 0),
                 Vip("", "0", 0, "0", "", 0),
                 Vip("", "0", 0, "0", "", 0),
                 Vip("", "0", 0, "0", "", 0),
                 Vip("", "0", 0, "0", "", 0),
                 Vip("", "0", 0, "0", "", 0)};

// // ________________________________________________________________________________

// /*
// .......##.......##....########.##.....##.##....##..######..########.####..#######..##....##..######.
// ......##.......##.....##.......##.....##.###...##.##....##....##.....##..##.....##.###...##.##....##
// .....##.......##......##.......##.....##.####..##.##..........##.....##..##.....##.####..##.##......
// ....##.......##.......######...##.....##.##.##.##.##..........##.....##..##.....##.##.##.##..######.
// ...##.......##........##.......##.....##.##..####.##..........##.....##..##.....##.##..####.......##
// ..##.......##.........##.......##.....##.##...###.##....##....##.....##..##.....##.##...###.##....##
// .##.......##..........##........#######..##....##..######.....##....####..#######..##....##..######.
// */

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

    // switch (x)
    // {
    // case 1:
    //     add(customer, num_users);
    //     break;
    // case 2:
    //     remove();
    //     break;
    // case 3:
    //     replace();
    //     break;
    // case 4:
    //     Promote(customer, num_users);
    //     break;
    // case 5:
    //     std::cout << "exiting..." << std::endl;
    //     exit(0);
    //     break;
    // default:
    //     std::cout << "invalid input..." << std::endl;
    //     std::cout << std::endl;
    //     Register();
    //     break;
    // }
}

// void forgotPassword()
// {
//     std::string userTemp;
//     std::string idTemp;
//     std::string numberTemp;
//     std::string passTemp;
//     std::string passTemp2;

//     std::cout << "forgot password..." << std::endl;
//     std::cout << std::endl;

//     std::cout << "enter username: ";
//     std::cout << std::endl;
//     std::cin >> userTemp;

//     std::cout << "enter ID: ";
//     std::cout << std::endl;
//     std::cin >> idTemp;

//     std::cout << "enter phone number: ";
//     std::cout << std::endl;
//     std::cin >> numberTemp;

//     std::cout << "enter new password: ";
//     std::cout << std::endl;
//     std::cin >> passTemp;

//     std::cout << "enter new password again: ";
//     std::cout << std::endl;
//     std::cin >> passTemp2;

//     std::cout << "password changed successfully." << std::endl;
//     std::cout << std::endl;

//     for (int i = 0; i < SIZE; i++)
//     {

//         if (userTemp == costumer[i].name && idTemp == costumer[i].id && numberTemp == costumer[i].number)
//         {
//             std::cout << "password changed successfully." << std::endl;
//             std::cout << std::endl;
//             break;
//         }
//         else if (userTemp != costumer[i].name || idTemp != costumer[i].id || numberTemp != costumer[i].number)
//         {
//             if (i == 10 - 1)
//             {
//                 std::cout << "Error: wrong username, ID, or phone number." << std::endl;
//                 std::cout << std::endl;
//             }
//         }
//     }
// }

void Find()
{

    std::string x;
    std::string y;
    std::string currUser;
    std::string currPass;
    do
    {
        std::cout << "\tusername: ";
        std::cin >> x;
        std::cout << "\tpassword: ";
        std::cin >> y;
        std::cout << std::endl;
        for (int i = 0; i < SIZE; i++)
        {
            std::string user = customer[i].name;
            std::string pass = customer[i].password;
            currUser = user;
            currPass = pass;
            if (x == user && y == pass)
            {
                std::cout << "welcome " + customer[i].name << std::endl;
                break;
            }
            else if ((x != user && y != pass) && i == SIZE - 1)
            {
                std::cout << "invalid username or password..." << std::endl;
            }
        }
    } while (x != currUser && y != currPass);
}
// cip
void login()
{

    std::cout << "logging in..." << std::endl;

    Find();
    // Menu();
    //  GUI();
};

// //*** change passwords ***
// //*** unique passwords ***
// //*** add/remove users ***

void exists()
{
    std::string name;
    std::cout << "enter name: ";
    std::cin >> name;
    std::cout << std::endl;

    for (int i = 0; i < SIZE; i++)
    {
        if (customer[i].name == name)
        {
            std::cout << "user exists..." << std::endl;
            std::cout << std::endl;
        }
        else if (vip[i].name == name)
        {
            std::cout << "user exists..." << std::endl;
            std::cout << std::endl;
        }
        else if (i == SIZE - 1)
        {
            std::cout << "user does not exist..." << std::endl;
            std::cout << std::endl;
        }
        else if (i == SIZE - 1)
        {
            std::cout << "user does not exist..." << std::endl;
            std::cout << std::endl;
        }
    }
}

void Menu()
{
    int x;
    std::cout << "menu." << std::endl;
    std::cout << "1. login." << std::endl;
    std::cout << "2. register." << std::endl;
    std::cout << "3. forgot password." << std::endl;
    std::cout << "4. search." << std::endl;
    std::cout << "5. exit." << std::endl;
    std::cout << std::endl;
    std::cout << "enter number: ";
    std::cin >> x;
    std::cout << std::endl;

    switch (x)
    {
    case 1:
        login();
        break;
    case 2:
        // Register();
        break;
    // case 3:
    //     forgotPassword(); // FIXME: forgot password
    //     break;
    case 4:
        std::cout << "Search" << std::endl;
        exists();
        Menu();
        break;
    case 5:
        std::cout << "exiting..." << std::endl;
        exit(0);
        break;
    default:
        std::cout << "invalid input..." << std::endl;
        std::cout << std::endl;
        Menu();
        break;
    }
}

// void add(Customer customer[], int &num_users)
// {
//     std::string name;
//     std::string id;
//     int number;
//     std::string password;
//     int balance;

//     std::cout << "enter name: ";
//     std::cin >> name;
//     std::cout << "enter id: ";
//     std::cin >> id;
//     std::cout << "enter number: ";
//     std::cin >> number;
//     std::cout << "enter password: ";
//     std::cin >> password;
//     std::cout << "enter balance: ";
//     std::cin >> balance;
//     std::cout << std::endl;
//     num_users++;

//     customer[num_users] = Customer(name, id, balance, number, password);
//     std::cout << std::endl;
//     std::cout << "user added." << std::endl;
//     std::cout << std::endl;
//     Menu();
// }

// void remove()
// {
//     std::string name;
//     std::cout << "enter name: ";
//     std::cin >> name;
//     std::cout << std::endl;
//     std::cout << "enter password: ";
//     std::string password;
//     std::cin >> password;
//     std::cout << std::endl;

//     for (int i = 0; i < SIZE; i++)
//     {
//         if (customer[i].name == name && customer[i].password == password)
//         {
//             customer[i].name = "";
//             customer[i].id = "0";
//             customer[i].number = 0;
//             customer[i].password = "";
//             customer[i].balance = 0;
//             std::cout << "user removed." << std::endl;
//             std::cout << std::endl;
//             Menu();
//         }
//         else if (i == SIZE - 1)
//         {
//             std::cout << "user not found..." << std::endl;
//             std::cout << std::endl;
//             Menu();
//         }
//     }
// }

// void replace()
// {
//     std::string name;
//     std::cout << "enter name: ";
//     std::cin >> name; // repetittive bs 3adi \<3
//     std::cout << std::endl;
//     std::cout << "enter password: ";
//     std::string password;
//     std::cin >> password;
//     std::cout << std::endl;

//     for (int i = 0; i < SIZE; i++)
//     {
//         if (customer[i].name == name && customer[i].password == password)
//         {
//             std::string name;
//             std::string id;
//             int number;
//             std::string password;
//             int balance;

//             std::cout << "enter name: ";
//             std::cin >> name;
//             std::cout << "enter id: ";
//             std::cin >> id;
//             std::cout << "enter number: ";
//             std::cin >> number;
//             std::cout << "enter password: ";
//             std::cin >> password;
//             std::cout << "enter balance: ";
//             std::cin >> balance;
//             std::cout << std::endl;

//             customer[i].name = name;
//             customer[i].id = id;
//             customer[i].number = number;
//             customer[i].password = password;
//             customer[i].balance = balance;
//             std::cout << "user replaced." << std::endl;
//             std::cout << std::endl;
//             Menu();
//         }
//         else if (i == SIZE - 1)
//         {
//             std::cout << "user not found..." << std::endl;
//             std::cout << std::endl;
//             Menu();
//         }
//     }
// }

// void Promote(Customer customer[], int &num_users, Vip vip[], int &num_vips)
// {
//     std::string name;
//     std::cout << "Enter name: ";
//     std::cin >> name;
//     std::cout << std::endl;

//     std::string password;
//     std::cout << "Enter password: ";
//     std::cin >> password;
//     std::cout << std::endl;

//     bool found = false;
//     for (int i = 0; i < num_users; i++)
//     {
//         if (customer[i].name == name && customer[i].password == password)
//         {
//             vip[num_vips] = {customer[i].name, customer[i].id, customer[i].balance, customer[i].number, customer[i].password, 0}; // TEST: if it works
//             customer[i].name = "";
//             customer[i].id = "0";
//             customer[i].number = 0;
//             customer[i].password = ""; // just realized i can use .clear() lol a7a?  what i was actually saying was that i need sorting
//             customer[i].balance = 0;
//             num_users--;

//             found = true;
//             std::cout << "Customer " << name << " has been Promoted to VIP." << std::endl;
//             break;
//         }
//     }

//     if (!found)
//     {
//         std::cout << "Customer " << name << " not found." << std::endl;
//     }
// }

/*
.......##.......##....##.....##....###....####.##....##
......##.......##.....###...###...##.##....##..###...##
.....##.......##......####.####..##...##...##..####..##
....##.......##.......##.###.##.##.....##..##..##.##.##
...##.......##........##.....##.#########..##..##..####
..##.......##.........##.....##.##.....##..##..##...###
.##.......##..........##.....##.##.....##.####.##....##
*/

int main()
{

    // Register(usernames, passwords, num_users, id, number); append to list
    std::cout << "welcome to the bank." << std::endl;
    std::cout << std::endl;

    Menu();

    return 0;
}

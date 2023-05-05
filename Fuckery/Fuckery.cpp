#include <iostream>
#include <cassert>

using namespace std;

class Account
{
private:
long accNumber;
double balance;
static int base; // Static data member

public:
Account(double bal); // Constructor
~Account(); // Destructor
void checkBalance() const; // Accessor
void deposit(double amount); // Mutator
void withdraw(double amount); // Mutator
};
// Initialization of static data member
int Account::base = 0;


Account::Account(double bal) : balance(bal) //eplain this line of code.
{
if (bal < 0.0)
{
cout << "Balance is negative; program terminates";
assert(false);
}
base++;
accNumber = 100000 + base;
cout << "Account " << accNumber << " is opened. " << endl;
cout << "Balance $" << balance << endl << endl;
}

Account :: ~Account() // Destructor
{
cout << "Account #: " << accNumber << " is closed." << endl;
cout << "$" << balance << " sent to the customer." << endl << endl;
}
void Account::checkBalance() const // Accessor member function
{
cout << "Account #: " << accNumber << endl;
cout << "Transaction: balance check" << endl;
cout << "Balance: $" << balance << endl << endl;
}

void Account::deposit(double amount) // Mutator Member function
{
if (amount > 0.0)
{
balance += amount;
cout << "Account #: " << accNumber << endl;
cout << "Transaction: deposit of $" << amount << endl;
cout << "New balance: $" << balance << endl << endl;
}
else cout << "Transaction aborted." << endl;
}

void Account::withdraw(double amount) // Mutator member function
{
if (amount > balance)
{
amount = balance;
}
balance -= amount;
cout << "Account #: " << accNumber << endl;
cout << "Transaction: withdraw of $" << amount << endl;
cout << "New balance: $" << balance << endl << endl;
}

int main()
{
Account acc1(2000), acc2(5000), acc3(1000);
// Transactions
acc1.deposit(150);
acc2.checkBalance();
acc1.checkBalance();
acc3.withdraw(800);
acc1.withdraw(1000);
acc2.deposit(120);
return 0;
}

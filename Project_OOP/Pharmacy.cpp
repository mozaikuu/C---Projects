#include <iostream>
#include <list>
#include "Importer.cpp"

using std::string, std::cout, std::cin, std::list;

void login();

int main()
{
    // login();

    // c meds
    // ass meds
    // get meds
    // push meds

    const int SIZE = 5;
    Meds myArray[SIZE] = {
        Meds("abdo", 1, 69420),
        Meds("abdo", 2, 69420),
        Meds("abdo", 3, 69420),
        Meds("abdo", 4, 69420),
        Meds("abdo", 5, 69420)};

    for (int i = 0; i < SIZE; i++)
    {
        std::cout << "Medicine " << i << " has Name " << myArray[i].getName() << std::endl;
    }

    // list<Meds> myint = {1};

    // list<Meds> meds = {
    //     Meds("adol", 1, 69420),
    //     Meds("adool", 2, 69420),
    //     Meds("adoool", 3, 69420),
    //     Meds("adoooooool", 4, 69420)};

    // for (const auto &medicine : meds)
    // {
    //     cout << medicine.id;
    // }
    // make a list of objects

    return 0;
}
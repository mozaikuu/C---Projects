#include <iostream>

using std::string, std::cout, std::cin;

class Meds
{
public:
    int id;
    string name;
    int price;

public:
    Meds(string name, int id, int price)
    {
        this->name = name;
        this->id = id;
        this->price = price;
    }

    string getName() const
    {
        return name;
    }

    int getId() const
    {
        return id;
    }

    int getPrice() const
    {
        return price;
    }
};
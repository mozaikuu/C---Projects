#include <iostream>

public class Team
{
    double money;
    std::string name;

public:
    Team(std::string name, double money)
    {
    : name(name), money(money)
    {
    }
    }

    void addMoney(double money)
    {
    this->money += money;
    }

    void removeMoney(double money)
    {
    this->money -= money;
    }

    double getMoney() const
    {
    return money;
    }

    std::string getName() const
    {
    return name;
    }

    int main()
    {
    Team ahmed.name("ahmed");
    // Team ahmed("ahmed", 550);
    Team fawaz("fawaz", 300);
    Team rawan("rawan", 300);
    Team shahd("shahd", 300);
    Team samaa("samaa", 0);
    Team basmala("basmala", 0);
    Team amira("amira", 300);
    Team esmail("esmail", 300);

    double total = ahmed.getMoney() + fawaz.getMoney() + rawan.getMoney() + shahd.getMoney() + samaa.getMoney() + basmala.getMoney() + amira.getMoney() + esmail.getMoney();

    double member = total / 8;

    std::cout << member << std::endl;

    ahmed.addMoney(member - ahmed.getMoney());
    fawaz.addMoney(member - fawaz.getMoney());
    rawan.addMoney(member - rawan.getMoney());
    shahd.addMoney(member - shahd.getMoney());
    samaa.addMoney(member - samaa.getMoney());
    basmala.addMoney(member - basmala.getMoney());
    amira.addMoney(member - amira.getMoney());
    esmail.addMoney(member - esmail.getMoney());

    std::cout << ahmed.getName() << " " << ahmed.getMoney() << std::endl;
    std::cout << fawaz.getName() << " " << fawaz.getMoney() << std::endl;
    std::cout << rawan.getName() << " " << rawan.getMoney() << std::endl;
    std::cout << shahd.getName() << " " << shahd.getMoney() << std::endl;
    std::cout << samaa.getName() << " " << samaa.getMoney() << std::endl;
    std::cout << basmala.getName() << " " << basmala.getMoney() << std::endl;
    std::cout << amira.getName() << " " << amira.getMoney() << std::endl;
    std::cout << esmail.getName() << " " << esmail.getMoney() << std::endl;

    return 0;
    }
};

#include <iostream>

class human
{
public:
    std::string name;
    int age;
    std::string gender;

public:
    void create(std::string Name, int Age, std::string Gender)
    {
        this->name = Name;
        this->age = Age;
        this->gender = Gender;
        
    }

};

int main()
{
    human h1;

    h1.create("ahmed" , 18, "Male");
    std::cout << h1.name << std::endl;
    std::cout << h1.age << std::endl;
    std::cout << h1.gender << std::endl;
    return 0;
}
